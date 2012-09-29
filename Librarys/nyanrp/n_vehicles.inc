#if !defined N_VEHICLES_INCLUDED
	#define N_VEHICLES_INCLUDED
#else
	#endinput
#endif

#include <nyanrp\n_carparts>

#define VEH_FILE "vehicles"
#define VEHICLE_NONE -500
#define OWNER_FACTION -600
#define OWNER_ADMIN -700


enum VEH_INFOS
{
		bool:hydolic,
		vehID,// /!\ C'est un ID interne de NyanRP et pas les IDs de SA:MP
		color01,
		color02,
		nitro,
		spoiler,
		wheels,
		skirts,
		owner, // un YID si c'est un joueur, un ID de faction si c'est une faction 
		bool:faction
}


new vInfos[MAX_VEHICLES][VEH_INFOS];

stock VEH_RegisterVehicle(samp_vehid)
{
	
}
