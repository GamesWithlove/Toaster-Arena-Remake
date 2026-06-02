// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once
#if 0
#include "CoreMinimal.h"
#include "Misc/GeneratedTypeName.h"

namespace RealtimeMesh
{
	template <typename Type>
	constexpr FName RMTypeName()
    {
    	static const FName Name(GetGeneratedTypeName<Type>());
	    return Name;
    }

    using RMTypeId = uint32;

    // Base type to use under all types that are part of the RTTI hierarchy.
    // Much like UObject, except it's not an unreal engine object
    struct RMClass;


	static constexpr std::uint32_t FNV1a(const TCHAR* str, std::size_t n, std::uint32_t hash = UINT32_C(2166136261)) {
		return n == 0 ? hash : FNV1a(str + 1, n - 1, (hash ^ str[0]) * UINT32_C(19777619));
	}
	static constexpr std::uint32_t FNV1a(FStringView str) {
		return FNV1a(str.GetData(), str.Len());
	}


    template <typename This, typename... Supers>
    struct RMTypeInfo
    {
        using RawType = std::remove_const_t<std::remove_reference_t<This>>;

        // All the parents of this class should be a base of this class
        static_assert((... && std::is_base_of_v<Supers, This>), "One or more parents are not a base of this type.");

        // All the parents of this class should have the RMClass base to enable RTTI.
        static_assert((... && std::is_base_of_v<RMClass, Supers>), "One or more parent hierarchies is not based on top of RTTI::Enable.");

        // Get the name of this type as an FName
        [[nodiscard]] static constexpr FName Name() noexcept
        {
            return RMTypeName<RawType>();
        }

        // Gets the unique ID of this type
        [[nodiscard]] static constexpr RMTypeId Id() noexcept
        {
            return FNV1a(Name().ToString());
        }

        // Checks whether the supplied type id is this or a parent type.
        [[nodiscard]] static constexpr bool IsA(RMTypeId OtherId) noexcept
		{
            return Id() == OtherId || (... || (Supers::TypeInfo::IsA(OtherId)));
        }

        /**
         * Walks the dependency hierarchy of the object in search of the type identified
         * by the passed type id. In case found casts the passed pointer into the passed
         * type. If no match can be found the function returns a nullptr.
         * @tparam T The type of the most specialized type in the dependency hierarchy.
         * @param typeId The identifier of the type to cast the object into.
         * @returns Valid pointer to instance of requested type if the object is a
         * direct descendance of the type identified by the passed type id. Otherwise
         * the value returned is a nullptr.
         */
        template <typename T>
        [[nodiscard]] static void const* DynamicCast(RMTypeId ToTypeId, T const* Ptr) noexcept
        {
            // Check whether the current type matches the requested type.
            if (Id() == ToTypeId)
            {
                // Cast the passed pointer in to the current type and stop
                // the recursion.
                return static_cast<This const*>(Ptr);
            }
        	
        	// The current type does not match, recursively invoke the method
        	// for all directly related parent types.
        	std::array<void const*, sizeof...(Supers)> ptrs = {
            	Supers::TypeInfo::DynamicCast(ToTypeId, Ptr)...};

        	// Check whether the traversal up the dependency hierarchy returned a pointer
        	// that is not null.
        	auto it = std::find_if(ptrs.begin(), ptrs.end(), [](void const* ptr) {
				return ptr != nullptr;
			});
        	return (it != ptrs.end()) ? *it : nullptr;
        }
    };

    /**
     * Parent type for types at the base of an open RTTI hierarchy
     */
    struct RMClass
    {
    public:
        virtual ~RMClass() = default;
        [[nodiscard]] virtual RMTypeId GetTypeId() const noexcept = 0;

    	[[nodiscard]] virtual bool IsAById(RMTypeId TypeId) const noexcept = 0;

    	template <typename T>
        [[nodiscard]] bool IsA() const noexcept 
        {
            return TIsDerivedFrom<T, RMClass>::Value && IsAById(RMTypeInfo<T>::Id());
        }
    	
    protected:
    	[[nodiscard]] virtual void const* CastInternal(RMTypeId TypeId) const noexcept = 0;
    	
    	template<typename CastTo, typename CastFrom>
    	friend CastTo* RMCast(CastFrom* Ptr) noexcept;
    };



	template<typename CastTo, typename CastFrom>
	[[nodiscard]] const CastTo* RMCast(const CastFrom* Ptr) noexcept
	{
		// Quick exit in the case where the pointer is already the wanted type
		if constexpr (std::is_same_v<CastTo, CastFrom>)
		{
			return Ptr;
		}

		// Quick exit case where the wanted type is a base of the current type
		if constexpr (TIsDerivedFrom<CastFrom, CastTo>::Value)
		{
			return static_cast<CastTo*>(Ptr);
		}
		
		if (Ptr == nullptr)
		{
			return nullptr;
		}

		return reinterpret_cast<const CastTo*>(Ptr->CastInternal(RMTypeInfo<CastTo>::Id()));
	}
	
	template<typename CastTo, typename CastFrom>
	[[nodiscard]] CastTo* RMCast(CastFrom* Ptr) noexcept
	{
		return const_cast<CastTo*>(RMCast<CastTo>(const_cast<const CastFrom*>(Ptr)));
	}

	

	/**
	 * Macro to be called in the body of each type declaration that is to be part of an
	 * open hierarchy RTTI structure. The type itself or one or more parents of the type
	 * need to have been derived from RTTI::Enable.
	 * @param T The type it self.
	 * @param Parents Variadic number of direct parrent types of the type
	 */
#define REALTIME_MESH_TYPE_INFO(Type, ...)																		\
	public:																										\
		using TypeInfo = RealtimeMesh::RMTypeInfo<Type, ##__VA_ARGS__>;											\
		[[nodiscard]] virtual RealtimeMesh::RMTypeId GetTypeId() const noexcept __override						\
		{																										\
			return TypeInfo::Id();																				\
		}																										\
		[[nodiscard]] virtual bool IsAById(RealtimeMesh::RMTypeId TypeId) const noexcept override				\
		{																										\
			return TypeInfo::IsA(TypeId);																		\
		}																										\
	protected:																									\
		[[nodiscard]] virtual void const* CastInternal(RealtimeMesh::RMTypeId TypeId) const noexcept override	\
		{																										\
			return TypeInfo::IsA(TypeId) ? TypeInfo::DynamicCast(TypeId, this) : nullptr;						\
		}																										\
		template<typename CastTo, typename CastFrom> friend const CastTo* RMCast(const CastFrom* Ptr) noexcept;

	
}

#endif