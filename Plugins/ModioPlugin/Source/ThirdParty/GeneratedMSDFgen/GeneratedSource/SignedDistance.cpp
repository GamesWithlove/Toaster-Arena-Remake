#include "HAL/Platform.h"
THIRD_PARTY_INCLUDES_START
#pragma warning(push)
#pragma warning(disable : 4706)

#include "SignedDistance.h"

#include <cmath>
#include <cfloat>

namespace msdfgen {

SignedDistance::SignedDistance() : distance(-DBL_MAX), dot(1) { }

SignedDistance::SignedDistance(double dist, double d) : distance(dist), dot(d) { }

bool operator<(SignedDistance a, SignedDistance b) {
    return fabs(a.distance) < fabs(b.distance) || (fabs(a.distance) == fabs(b.distance) && a.dot < b.dot);
}

bool operator>(SignedDistance a, SignedDistance b) {
    return fabs(a.distance) > fabs(b.distance) || (fabs(a.distance) == fabs(b.distance) && a.dot > b.dot);
}

bool operator<=(SignedDistance a, SignedDistance b) {
    return fabs(a.distance) < fabs(b.distance) || (fabs(a.distance) == fabs(b.distance) && a.dot <= b.dot);
}

bool operator>=(SignedDistance a, SignedDistance b) {
    return fabs(a.distance) > fabs(b.distance) || (fabs(a.distance) == fabs(b.distance) && a.dot >= b.dot);
}

}

#pragma warning(pop)

THIRD_PARTY_INCLUDES_END
