/*[------------------------------------!! ATTENTION !!------------------------------------------]
Cette bibliothéque regroupe toutes les astuces un peu "sales" et dois être incluse en premier.
Ne soyez pas étonez si en visitant cette partie obscur de Nyan-RP vous tomber sur des arraignés et des
squelletes de dévelopeurs, ce code est sale, on vous aura prévenus !*/
#if !defined N_DIALOGS_TWEAKS
	#define N_DIALOGS_TWEAKS
#else
	#endinput
#endif

//[--------------------------------------Macros-----------------------------------------------]
#define SetPVarInt(%0,%1,++) SetPVarInt(%0,%1,GetPVarInt(%0,%1)+1) //Permet une incrémentation simple des PVars
#define MODE_NAME Nyan-RP //Macro necessaire à l utilisation de YSI
#define FDLG_USE_YSI_HOOK //Configure FDLG pour utiliser la méthode "Y Hook" de YSI

//[-----------------------------------Enumerations---------------------------------------------]
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

//[-------------------------------------Fonctions------------------------------------------------]
stock NYAN_GetPlayerName(playerid)
{	
	new pName[MAX_PLAYER_NAME+1];
	GetPlayerName(playerid, pName, sizeof(pName));
	#define GetPlayerName(%0) NYAN_GetPlayerName(%0)
	return pName;
}

