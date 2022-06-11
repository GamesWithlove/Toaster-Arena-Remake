Plugin Version: 1.36

# Smooth Sync
Performs interpolation and extrapolation in order to make your objects smooth and more accurate over the network.
Highly configurable, only send what you need. Optionally compress floats to further reduce bandwidth. 
Customizable interpolation and extrapolation settings depending on your game's needs. The full source code is provided so you can see everything with detailed comments!

Supports Windows, Linux, Mac, iOS, Android, HTML5. 


## Step 1 - Drag and Drop

1. In order to sync the root component, put the SmoothSync component onto any networked actor ("Replicates" is checked) that you want to be Smoothly Synced. Make sure "Replicate Movement" is unchecked as Smooth Sync will be replacing it.
2. In order to sync a specific component with a Transform, use SmoothSync.setSceneComponentToSync() and pass in the component with a transform that you want to sync. Use one Smooth Sync for each Transform you want to sync.
3. It is now smoothly synced across the network. Move the object on the server if unowned or the owner if owned to have it Smoothly Sync across all systems.

## Step 2 - Tweak to Your Needs

Now that it is on your networked object:

1. Read the tooltips corresponding to the variables to tweak the smoothness to your game's
specific needs. More detailed comments are in the code comments for the variables. 
2. Reduce your bandwidth by only sending position, rotation, and velocity variables that you need.


# How it Works

Smooth Sync stores a list of network States to interpolate between and then goes into extrapolation during latency spikes. 

# Methods you may need

SmoothSync.setSceneComponentToSync() - Used to set the Transform that you want to sync. If none is set up, it will sync the Actor. Must have one SmoothSync for each Transform that you want to sync.
SmoothSync.teleport() - Used to teleport your objects for situations like respawning so that they don't interpolate. Must be called on owner, or server if there is no owner.
SmoothSync.forceStateSendNextFixedUpdate() - Useful if you have a low send rate but you want to manually send a transform in between the send rate.
SmoothSync.clearBuffer() - You will need to manually call this on all of the object's instances if you change the object's network owner during runtime.
SmoothSync.enableSmoothSync() - Used to enable / disable Smooth Sync.


Don't hesitate to contact us with any problems, questions, or comments.
With Love,
Noble Whale Studios