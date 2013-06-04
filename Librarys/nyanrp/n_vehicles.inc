#if !defined N_VEHICLES_INCLUDED
	#define N_VEHICLES_INCLUDED
#else
	#endinput
#endif

#define VEH_FILE "NYANRP_vehicles.ini"
#define VEHICLE_NONE -500



enum VEH_INFOS
{
		Float:posX,
		Float:posY,
		Float:posZ,
		bool:IsRegistered,	
		vehID,// /!\ C'est un ID interne de NyanRP et pas les IDs de SA:MP
		color01,
		color02,
		nitro,
		hydrolic,
		spoiler,
		wheels,
		skirts,
		owner, //Un YID si c'est un joueur, un ID de faction si c'est une faction ou VEH_NOOWNER
		bool:IsOwnedByFaction //Le vehicule apartien t-il à une faction ?
}


new vInfos[MAX_VEHICLES][VEH_INFOS];

stock INTERNAL_RegisterVehicle(Local_vehID)
{
	new quantity = djInt(VEH_FILE, "Quantity");//Le nombre entier correspondant à l'élément "Quantity" désigne le nombre total de slots existants dans le fichier
	
		
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
	vInfos[Local_vehID][posX] = x;
	djSetFloat(VEH_FILE, cell, x);
	
	format(cell, sizeof(cell), "Slot[%d]/Pos/Y", slot);
	djSetFloat(VEH_FILE, cell, y);
	vInfos[Local_vehID][posY] = y;
	
	format(cell, sizeof(cell), "Slot[%d]/Pos/Z", slot);
	djSetFloat(VEH_FILE, cell, z);
	vInfos[Local_vehID][posZ] = z;
	
	new lSpoiler = GetVehicleComponentInSlot(Local_vehID, CARMODTYPE_SPOILER);
	new lWheels = GetVehicleComponentInSlot(Local_vehID, CARMODTYPE_WHEELS);
	new lSkirts = GetVehicleComponentInSlot(Local_vehID, CARMODTYPE_SIDESKIRT);
	new lHydrolic = GetVehicleComponentInSlot(Local_vehID, CARMODTYPE_HYDRAULICS);
	new lNitro = GetVehicleComponentInSlot(Local_vehID, CARMODTYPE_NITRO);
	
	format(cell, sizeof(cell), "Slot[%d]/Tunning/Spoiler", slot);
	djSetFloat(VEH_FILE, cell, lSpoiler);
	vInfos[Local_vehID][spoiler] = lSpoiler;
	
	format(cell, sizeof(cell), "Slot[%d]/Tunning/Wheels", slot);
	djSetFloat(VEH_FILE, cell, lWheels);
	vInfos[Local_vehID][wheels] = lWheels;

	format(cell, sizeof(cell), "Slot[%d]/Tunning/Skirts", slot);
	djSetFloat(VEH_FILE, cell, lSkirts);
	vInfos[Local_vehID][skirts] = lSkirts;

	format(cell, sizeof(cell), "Slot[%d]/Tunning/Hydrolic", slot);
	djSetFloat(VEH_FILE, cell, lHydrolic);
	vInfos[Local_vehID][hydrolic] = lHydrolic;
	
	format(cell, sizeof(cell), "Slot[%d]/Tunning/Nitro", slot);
	djSetFloat(VEH_FILE, cell, lNitro);
	vInfos[Local_vehID][nitro] = lNitro;
	
	
	/*
	Verification le resultat de l'operation précédement réalisé
	*/
	new Float:checkX;
	format(cell, sizeof(cell), "Slot[%d]/Pos/X", slot);
	checkX = djFloat(VEH_FILE, cell);
	
	if(checkX != x)//La valeur n'a pas bien été enregistré ou lu
		return 1;//On retourne 1 pour le "signaler"
	
	vInfos[Local_vehID][IsRegistered] = true;
	return 0;
}

stock IsSlotUsed(slot)
{
	new line[10], ModelID;
	format(line, sizeof(line), "ModelID[%i]", slot);
	ModelID = djInt(VEH_FILE, line);
	
	if(ModelID == VEHICLE_NONE)
		return true;	
	return false;
}

stock RegisterVehicle(playerid, vehid = VEHICLE_NONE)
{
	if(!IsPlayerAdmin(playerid))
		return printf("[WARNING] - Un utilisateur non administrateur a reussi à acceder au menu de gestion des vehicules !");
	
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
		if(!vInfos[vehid][IsRegistered])
			SendClientMessage(playerid, C_YELLOW, "[Information] - Le véhicule a été sauvegardé");
		else
			SendClientMessage(playerid, C_RED, "[Information] - Le véhicule n'a pas pu être sauvegardé");
	}
	
	return 0;
}

DIALOG:dRegisterVehicle(playerid, response, listitem, inputtext[])
{
	new Local_vehID = strval(inputtext);
	
	if(!GetVehicleModel(Local_vehID))
		SendClientMessage(playerid, C_RED, "[Erreur] - L'Identifiant Unique ne correspond à aucun vehicule");
	else
		RegisterVehicle(playerid, Local_vehID);
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