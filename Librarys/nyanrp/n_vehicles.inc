#if !defined N_VEHICLES_INCLUDED
	#define N_VEHICLES_INCLUDED
#else
	#endinput
#endif

#define VEH_FILE "vehicles"
#define VEHICLE_NONE -500
#define OWNER_FACTION -600
#define OWNER_ADMIN -700


enum VEH_INFOS
{
		bool:hydolic,
		vehID,
		color01,
		color02,
		nitro,
		spoiler,
		wheels,
		skirts,
		owner,
		faction
}


new vInfos[MAX_VEHICLES][VEH_INFOS];

stock VEH_RegisterVehicle(vehid)
{
	
}
