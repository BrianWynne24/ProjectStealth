Created with Unreal Engine 4.26.1
Author: Brian Wynne

This project is a fan re-creation of the multiplayer mode in 'Splinter Cell: CT'. I hope to provide proof of 
concept to get other developers on board.

The game consists of Spies vs Mercs. This is a A-symmetric multiplayer game. Orignally built with maximum players
of 6 (3v3). Gadgets will be introduced to both teams with a maximum of 4 slots for gadgets. Spies will be in third person, 
and acrobatic. They will only have the ability to use a taser with limited ammo. Mercs will have lethal weapons but limited
mobility. They will be unable to traverse the map as quick as spies.

TEAM SPY: (Third-person Stealth)

	Movement Abilities:
		[X] Hang Ledge
		[] Climb up to platform from ledge
		[X] Move left to right on ledge
		[] Turn corner on ledge (left&right)
		[] Drop to lower ledge
		
	CustomBinds:
		[] Knock-Forward/Grab: Attempt to grab enemy from behind, if not temp stun him and stumble him
		
	Weapons:
		[] Tazer - Energy level. Will shock and temp stun ARGUS members when off shock cooldown
	
	Visions:
		[] Night Vision - Allows players to see in darker areas
		[] Thermal Vision - Allows players to see surroundings in thermal
		
	Gadgets:
		[] Smoke Grenade - (4) Slows down opposing force, knocks out if exposed to long
		[] Flashbang - (4) You know...
		[] Chaff Grenade - (4) Disrupts electonics nearby (spy detectors, mines, ARGUS HUD&VISIONS)
		[] Spy Camera - (3) Shootable, Allows spies to shoot and see from around corners; shoots knock-out gas once
		[] Alarm Snare - (3) Shootable, alerts the player snare went off when enemy passes by
		
TEAM ARGUS: (First-person Action)

	Movement Abilities:
		[] Charge - Perform a quick but short charge forward. If spy is hit they will be K.O.
		[] Beserker - 360 degree spin that will K.O. a spy in a short radius. Disoriented effects afterwards
		
	Weapons:
		[] Rifle - Left click will shoot automatic. Right click will act as a sniper rifle
		[?] Shotgun - I'm not sure if we should add this...
		
	Visions:
		[] MotionTracking - Will highlight any players moving at rapid speeds
		[] ElectroMagneticField - Will highlight ARGUS and spies using and visions or gadgets
		
	Gadgets:
		[] Frag Grenade - (4) Will shoot a grenade out of the Rifle. Distance depends on hold button length
		[] Mine - (Proxy, Laser)(3) Will blow up depending on Mine-TYPE (Proxy depends on speed, laser on block-trace)
		[] Cameras - Can view cameras around map. Leaves ARGUS member blind and easy
		[] GasMask - Limit on filter length while in use. Will not refill on re-supply only death
		[] Flare - (10 limit) shoots illuminating flares. Last ~10 seconds and sticks to surfaces
		[] Spy Detector - (3) Will alert ARGUS members to position when spy is moving faster than walking speed close by
		