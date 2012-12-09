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

stock INTERNAL_RegisterVehicle(Local_vehID)
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
	
	format(cell, sizeof(cell), "Slot[%d]/ModelID", slot);
	djSetInt(VEH_FILE, cell, GetVehicleModel(Local_vehID));
	
	new Float:x, Float:y, Float:z;
	GetVehiclePos(Local_vehID, x, y, z);
	
	format(cell, sizeof(cell), "Slot[%d]/Pos/X", slot);
	
	djSetFloat(VEH_FILE, cell, x);
	
	format(cell, sizeof(cell), "Slot[%d]/Pos/Y", slot);
	
	djSetFloat(VEH_FILE, cell, y);
	
	format(cell, sizeof(cell), "Slot[%d]/Pos/Z", slot);
	
	djSetFloat(VEH_FILE, cell, z);
	
	
	
	return 0;
}

stock IsSlotUsed(slot)
{
	new line[10], ModelID;
	format(line, sizeof(line), "ModelID[%i]", slot);
	
	djInt(VEH_FILE, line);
	
	if(ModelID == VEHICLE_NONE)
		return true;
	return false;
}

stock RegisterVehicle(playerid, vehid = VEHICLE_NONE)
{
	if(!IsPlayerAdmin(playerid))
		return printf("[WARNING] - Un utilisateur non administrateur a reussi à acceder au menu de gestion des vehicules !!");
	
	if(IsPlayerInAnyVehicle(playerid))
		{
			RegisterVehicle(playerid, GetPlayerVehicleID(playerid));
		}
	else
		{
			ShowPlayerDialog(playerid, dRegisterVehicle, DIALOG_STYLE_INPUT, "Menu - Vehicules", "Veuillez entrez l'ID du véhicule à sauvegarder", "Valider", "Annuler");
		}
		
	if(vehid != VEHICLE_NONE)
	{
		INTERNAL_RegisterVehicle(vehid);
		SendClientMessage(playerid, C_YELLOW, "[Information] - Le véhicule a été sauvegardé");
	}
	
	return 0;
}

DIALOG:dRegisterVehicle(playerid, response, listitem, inputtext[])
{
	new local_int = strval(inputtext);
	if(!GetVehicleModel(local_int))
		SendClientMessage(playerid, C_RED, "[Erreur] - L'Identifiant Unique ne correspond à aucun vehicule");
	else
		RegisterVehicle(playerid, local_int);
}

forward AMenu_Vehicles(playerid);
public AMenu_Vehicles(playerid)
{
	ShowPlayerDialog(playerid, dAVehicles, DIALOG_STYLE_LIST, "Menu - Vehicules", "Sauvegarder\n", "Valider", "Annuler");
	
	return 1;
}

DIALOG:dAVehicles(playerid, response, listitem, inputtext[])
{
	switch(listitem)
	{
		case 0:
			{
				RegisterVehicle(playerid);
			}
		
		default:
			{
				printf("[WARNING] - La fonction DIALOG:dAVehicles() a reçu des données invalides - Informations: La variable listitem vaux %i ce qui n'est pas la valeur attendue", listitem);
			}
	}
}