import os
import unreal
from automation_test.unittest_utilities import *

TEMP_PROJECT_ASSETS_DIR = "/Game/Python/PCG/test_artifacts/temp"
PCG_GRAPH_CLASS = unreal.PCGGraph
PCG_GRAPH_NAME = "NewPCGGraph"

runner = TestRunner()

@runner.set_after_each
def test_tear_down():
    """
    Cleans up the test artifacts.
    """
    delete_test_artifacts()

def delete_test_artifacts():
    """
    Deletes PCG Graph asset.
    """
    asset_path = f"{TEMP_PROJECT_ASSETS_DIR}/{PCG_GRAPH_NAME}.{PCG_GRAPH_NAME}"
    if unreal.EditorAssetLibrary.does_asset_exist(asset_path):
        asset = unreal.EditorAssetLibrary.load_asset(asset_path)
        unreal.EditorAssetLibrary.delete_asset(asset.get_path_name())
    asset_absolute_path = unreal.SystemLibrary.get_project_content_directory() + asset_path.lstrip("/")
    if os.path.exists(asset_absolute_path):
        os.remove(asset_absolute_path)
    unreal.EditorAssetLibrary.delete_directory(TEMP_PROJECT_ASSETS_DIR)

def create_asset(asset_name, asset_class, package_path):
    """
    Creates PCG Graph asset.
    :param asset_name: The name of the asset to create.
    :param asset_class: The class of the asset to create.
    :param package_path: The path where the asset should be created.
    :return: The created asset.
    """
    asset_tools = unreal.AssetToolsHelpers.get_asset_tools()
    new_asset = asset_tools.create_asset(asset_name, package_path, asset_class, None)
    expect(new_asset is not None).to_be(True)
    return new_asset

@test_on_win
@runner.add_test
def test_pcg_graph_asset_creation():
    """
    This test verifies the creation of a PCG graph asset in the Unreal Engine project.
    It checks if the asset exists, if it has the correct class, and if its path is correctly set.
    """
    unreal.EditorAssetLibrary.sync_browser_to_objects([TEMP_PROJECT_ASSETS_DIR])
    pcg_graph_asset = create_asset(PCG_GRAPH_NAME, PCG_GRAPH_CLASS, TEMP_PROJECT_ASSETS_DIR)
    if expect(pcg_graph_asset).to_exist() is None:
        return
    expect(pcg_graph_asset.get_class().get_name()).to_be("PCGGraph")
    asset_path = os.path.join(TEMP_PROJECT_ASSETS_DIR, f"{PCG_GRAPH_NAME}.{PCG_GRAPH_NAME}").replace("\\", "/")
    expect(pcg_graph_asset.get_path_name()).to_be(asset_path)

@test_on_win
@runner.add_test
def test_pcg_graph_asset_deletion():
    """
    This test verifies the deletion of a PCG graph asset in the Unreal Engine project.
    It checks if the asset is removed from the Content Browser and from disk.
    """
    # Create the asset before attempting to delete it
    pcg_graph_asset = create_asset(PCG_GRAPH_NAME, PCG_GRAPH_CLASS, TEMP_PROJECT_ASSETS_DIR)
    
    # Save the asset after creation
    asset_path = os.path.join(TEMP_PROJECT_ASSETS_DIR, f"{PCG_GRAPH_NAME}.{PCG_GRAPH_NAME}").replace("\\", "/")
    unreal.EditorAssetLibrary.save_asset(asset_path)

    # Attempt to delete the asset
    unreal.EditorAssetLibrary.delete_asset(asset_path)
    expect(unreal.EditorAssetLibrary.does_asset_exist(asset_path)).to_be(False)
    asset_absolute_path = unreal.SystemLibrary.get_project_content_directory() + asset_path.lstrip("/")
    expect(os.path.exists(asset_absolute_path)).to_be(False)

if __name__ == '__main__':
    runner.run_all()
