#if !defined N_DIALOGS_TWEAKS
	#define N_DIALOGS_TWEAKS
#else
	#endinput
#endif

/*
ATTENTION
Cette bibliothéuqe regroupe toutes les astuces un peu "sales" et dois être incluse en premier.
Ne soyez pas étonez si en visitant cette partie obscur de Nyan-RP vous tomber sur des arraignés et des
squelletes de dévelopeurs, ce code est sale, on vous aura prévenus !
*/

#define SetPVarInt(%0,%1,++) SetPVarInt(%0,%1,GetPVarInt(%0,%1)+1) //Permet une incrémentation simple des PVars

enum //Enumeration des IDs de dialogues
{
		dRegisterS1,//Message de premiere connexion
		dRegisterS2,//Choix du mot de passe
		dRegisterS3,//Confirmation du mot de passe
		dRegisterS4,//Choix de l'age
		dRegisterS5,//Choix de l'origine
		dRegisterS6,//Message de fin d'inscription
		dLogin,//Menu de connexion
		dAMenu,//Menu d'adiministration
		dAVehicles,//Menu de gestion des vehicules (administration)
		dRegisterVehicle,//Menu de choix d'ID pour l'enregistrement de véhicule
		
}

stock NYAN_GetPlayerName(playerid)
{
	new pName[MAX_PLAYER_NAME+1];
	GetPlayerName(playerid, pName, sizeof(pName));
	
	return pName;
}
#define GetPlayerName(%0) NYAN_GetPlayerName(%0)