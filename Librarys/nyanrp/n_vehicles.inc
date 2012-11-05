#if !defined N_VEHICLES_INCLUDED
	#define N_VEHICLES_INCLUDED
#else
	#endinput
#endif

#include <nyanrp\n_carparts>

#define VEH_FILE "NYANRP_vehicles.ini"
#define VEHICLE_NONE -500



enum VEH_INFOS
{
		Float:posX,
		Float:posY,
		Float:posZ,
		bool:IsRegistered,
		bool:hydolic,
		vehID,// /!\ C'est un ID interne de NyanRP et pas les IDs de SA:MP
		color01,
		color02,
		nitro,
		spoiler,
		wheels,
		skirts,
		owner, //Un YID si c'est un joueur, un ID de faction si c'est une faction 
		bool:IsOwnedByFaction //Le vehicule apartien t-il à une faction ?
}


new vInfos[MAX_VEHICLES][VEH_INFOS];

stock RegisterVehicle(Local_vehID)
{
	new quantity = djInt(VEH_FILE, "Quantity");
	
	
	if(quantity == 0)
		return 1;
		
	new slot = 0;
	
	for(new i = 0; i <= quantity; i++)
	{
		if(!IsSlotUsed(i))
		{
			slot = i;
			break;
		}
	}
	
	if(!slot)
		slot = quantity+1;
		
	
	new cell[50];
	
	format(cell, sizeof(cell), "Slot[%i]\ModelID", slot);
	djSetInt(VEH_FILE, cell, GetVehicleModel(local_vehID));
	
	new float:x, float:y, float:z;
	GetVehiclePos(local_vehID, x, y, z);
	
	format(cell, sizeof(cell), "Slot[%i]\Pos\X", slot);
	
	djSetFloat(VEH_FILE, cell, x);
	
	format(cell, sizeof(cell), "Slot[%i]\Pos\Y", slot);
	
	djSetFloat(VEH_FILE, cell, y);
	
	format(cell, sizeof(cell), "Slot[%i]\Pos\Z", slot);
	
	djSetFloat(VEH_FILE, cell, z);
	
	
	
	return 0;
}

stock IsSlotUsed(slot)
{
	
	
	new line[10], ModelID;
	format(line, sizeof(line), "ModelID[%i]", slot);
	
	
	if(ModelID == VEHICLE_NONE)
		return true;
	return false;
}