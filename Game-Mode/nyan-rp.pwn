/*
Macros divers
*/
#define MIN_PASSWORD_LENGHT 7
#define MODE_NAME Nyan-RP M03

#define SetPVarInt(%0,%1,++) SetPVarInt(%0,%1,GetPVarInt(%0,%1)+1)
#define Player_LogOut(%0) Player_DoLogout(%0, Player_GetYID(%0))
/*
Inclusion de bibliotheques
*/
#include <a_samp>
#include <nyanrp>

/*
Macros de couleurs (C_ pour Colors et CE_ pour ColorEmbeding)
*/
#define C_WHITE 0xFFFFFFFF
#define C_BLACK 0x000000FF
#define C_GREY 0x0000007F
#define C_RED 0xFF0000C3
#define C_BLUE 0x0000FFAA
#define C_YELLOW 0xFFCE0092
#define C_ORANGE 0xE67A00FF

#define CE_PURPPLE "{8C3C63}"
#define CE_WHITE "{FFFFFF}"
#define CE_GREY "{666666}"
#define CE_BLACK "{000000}"

/*
Enumerations divers
*/
enum//Enumeration des IDs de dialogues
{
		dRegisterS1,//Message de premiére connexion
		dRegisterS2,//Choix du mot de passe
		dRegisterS3,//Confirmation du mot de passe
		dRegisterS4,//Choix de l'age
		dRegisterS5,//Choix de l'origine
		dRegisterS6,//Message de fin d'inscription
		dLogin
}

enum//Enumeration des IDs de pays
{
		nAmerica,//North America (Amerique du Nord / USA)
		mAmerica,//Middle America (Amerique centrale)
		sAmerica,//South America (Amerique du Sud)
		asia,//Asie
		europe,//Europe
		nAfrica,//North Africa (Afrique du Nord)
		sAfrica//South Africa (Afrique du Sud)
}

enum E_PLAYERS
{
		age,
		country,
		level,
		money
}

/*
Tableaux globales & uvars
*/
uvar pInfos[MAX_PLAYERS][E_PLAYERS];

/*
Prototypes de fonctions publique
*/
forward OnPlayerFirstConnect(playerid);
forward OnPlayerConnectAgain(playerid);
forward OnPlayerLoginFail(playerid);
forward OnPlayerRegister(playerid);
forward OnPlayerLoginSucess(playerid);

forward TenMinutesTimer();

/*
Création de fonctions
*/
stock strs(str1[], str2[], bool:ignorecase = true)//Copié de Dutils (par Dracoblue)
{
    if (strlen(str1) != strlen(str2)) return false;
    if (!strcmp(str1, str2, ignorecase)) return true;
    return false;
}

stock GivePlayerName(playerid)
{
		new pName[MAX_PLAYER_NAME+1];
		GetPlayerName(playerid, pName, sizeof(pName));
		return pName;
}

stock GetPVarStringEx(playerid, vName[])
{
	new string[500];
	GetPVarString(playerid, vName, string, sizeof(string));
	return string;
}

stock ProxDetector(playerid, targetid, Float:range)  
{
    if(GetPlayerVirtualWorld(playerid) != GetPlayerVirtualWorld(targetid) || GetPlayerInterior(playerid) != GetPlayerInterior(playerid))
        return 0;

    new Float:posX, Float:posY, Float:posZ;  
    GetPlayerPos(playerid, posX, posY, posZ);  
    return IsPlayerInRangeOfPoint(targetid, range, posX, posY, posZ); 
}

stock SendMessageToNearPlayers(playerid, message[], nameColor[], color1[], color2[], color3[])
{
	new output[250];//Chaine de carractére correspondant au message affiché au joueur
	new bool:send = false;//Le message dois t-il être envoyé ?
	
	format(output, sizeof(output), "%s%s: ", nameColor, GivePlayerName(playerid));//On incoropore le nom du joueur (avec sa couleur)
	
	foreach(new targetid : Player)
	{
		if(ProxDetector(playerid, targetid, 2.0))
			{
				strcat(output, color1);//On incopore le code couleur correspondant au "range"
				send = true;//Il est bien dans l-un des "ranges" désirés, alors on lui envoie
			}
		else if(ProxDetector(playerid, targetid, 4.0))
			{
				strcat(output, color2);
				send = true;
			}
		else if(ProxDetector(playerid, targetid, 6.0))
			{
				strcat(output, color3);
				send = true;
			}
			
		if(send)//Si il est dans un des 3 "ranges"
		{
				strcat(output, message);//on incorpore le message
				SendClientMessage(targetid, -1, output);//on le lui envoie
		}
		
	}
}

stock AutoSavePlayersDatas()
{
	print("[WARNING] Sauvegarde automatique des comptes des joueurs connéctés en cours");
	foreach(new playerid : Player)
	{
		if(!IsPlayerNPC(playerid))
			SavePlayerDatas(playerid);
	}
}

stock SavePlayerDatas(playerid)
{
	if(!Player_IsLoggedIn(playerid))
		return 1;
		
	Player_LogOut(playerid);
	Player_ForceLogin(playerid);
	
	return 0;
		
	
}

stock Player_Login(playerid)
{
	new message[60+MAX_PLAYER_NAME];
	format(message, sizeof(message), "Bonjour %s,\nEntre ton mot de passe pour te connecter", GivePlayerName(playerid));
	ShowPlayerDialog(playerid, DIALOG_STYLE_PASSWORD, dLogin, "Login", message, "Login", "Annuler");
}

/*
Callbacks
*/

main()
{
	print("\n----------------------------------");
	print("NYAN-RP Started ...");
	print("----------------------------------\n");
}

public OnGameModeInit()
{
	SetGameModeText("Nyan-RP");
	AddPlayerClass(0, 1958.3783, 1343.1572, 15.3746, 269.1425, 0, 0, 0, 0, 0, 0);
	SetTimer("TenMinutestimer", 10*1000*60, true);
	
	return 1;
}

public OnGameModeExit()
{
	return 1;
}

public OnPlayerRequestClass(playerid, classid)
{
	SpawnPlayer(playerid);
	return 1;
}

public OnPlayerConnect(playerid)
{
	if(!Player_IsRegistered(playerid))
		OnPlayerFirstConnect(playerid);
	else
		OnPlayerConnectAgain(playerid);
	return 1;
}

public OnPlayerDisconnect(playerid, reason)
{
	return 1;
}

public OnPlayerSpawn(playerid)
{
	return 1;
}

public OnPlayerDeath(playerid, killerid, reason)
{
	return 1;
}

public OnVehicleSpawn(vehicleid)
{
	return 1;
}

public OnVehicleDeath(vehicleid, killerid)
{
	return 1;
}

public OnPlayerText(playerid, text[])
{
	SendMessageToNearPlayers(playerid, text, CE_PURPPLE, CE_WHITE, CE_GREY, CE_BLACK);
	return 0;
}

public OnPlayerCommandText(playerid, cmdtext[])
{
	if (strcmp("/mycommand", cmdtext, true, 10) == 0)
	{
		// Do something here
		return 1;
	}
	return 0;
}

public OnPlayerEnterVehicle(playerid, vehicleid, ispassenger)
{
	return 1;
}

public OnPlayerExitVehicle(playerid, vehicleid)
{
	return 1;
}

public OnPlayerStateChange(playerid, newstate, oldstate)
{
	return 1;
}

public OnPlayerEnterCheckpoint(playerid)
{
	return 1;
}

public OnPlayerLeaveCheckpoint(playerid)
{
	return 1;
}

public OnPlayerEnterRaceCheckpoint(playerid)
{
	return 1;
}

public OnPlayerLeaveRaceCheckpoint(playerid)
{
	return 1;
}

public OnRconCommand(cmd[])
{
	return 1;
}

public OnPlayerRequestSpawn(playerid)
{
	return 1;
}

public OnObjectMoved(objectid)
{
	return 1;
}

public OnPlayerObjectMoved(playerid, objectid)
{
	return 1;
}

public OnPlayerPickUpPickup(playerid, pickupid)
{
	return 1;
}

public OnVehicleMod(playerid, vehicleid, componentid)
{
	return 1;
}

public OnVehiclePaintjob(playerid, vehicleid, paintjobid)
{
	return 1;
}

public OnVehicleRespray(playerid, vehicleid, color1, color2)
{
	return 1;
}

public OnPlayerSelectedMenuRow(playerid, row)
{
	return 1;
}

public OnPlayerExitedMenu(playerid)
{
	return 1;
}

public OnPlayerInteriorChange(playerid, newinteriorid, oldinteriorid)
{
	return 1;
}

public OnPlayerKeyStateChange(playerid, newkeys, oldkeys)
{
	return 1;
}

public OnRconLoginAttempt(ip[], password[], success)
{
	return 1;
}

public OnPlayerUpdate(playerid)
{
	return 1;
}

public OnPlayerStreamIn(playerid, forplayerid)
{
	return 1;
}

public OnPlayerStreamOut(playerid, forplayerid)
{
	return 1;
}

public OnVehicleStreamIn(vehicleid, forplayerid)
{
	return 1;
}

public OnVehicleStreamOut(vehicleid, forplayerid)
{
	return 1;
}

public OnDialogResponse(playerid, dialogid, response, listitem, inputtext[])
{
	if(!response)
	{
		if(!Player_IsLoggedIn(playerid))
			return Kick(playerid);
	}
	
	switch(dialogid)
	{
		case dRegisterS1:
		{	
			return ShowPlayerDialog(playerid, dRegisterS2, DIALOG_STYLE_PASSWORD, "Choix du mot de passe", "Veuillez choisir un mot de passe de connexion.\nAttention de ne pas le perdre !\n\nPS:Votre mot de passe doit contenir au moins 6 carractéres", "Ok", "Annuler");
		}
		case dRegisterS2:
		{
			if(strlen(inputtext) < MIN_PASSWORD_LENGHT)
				return ShowPlayerDialog(playerid, dRegisterS2, DIALOG_STYLE_PASSWORD, "Choix du mot de passe", "Erreur. Le mot de passe choisie est trop court", "Ok", "Annuler");
			else
			{
				SetPVarInt(playerid, "HashedPassword", YHash(inputtext));
				return ShowPlayerDialog(playerid, dRegisterS3, DIALOG_STYLE_PASSWORD, "Verification du mot de passe", "Afin d'éviter toute erreur lors du choix de votre mot de passe, nous vous demandons de bien vouloir le rentrer de nouveau.", "Ok", "Annuler");
			}
		}
		case dRegisterS3:
		{
			if(YHash(inputtext) != GetPVarInt(playerid, "HashedPassword"))
				return ShowPlayerDialog(playerid, dRegisterS2, DIALOG_STYLE_PASSWORD, "Choix du mot de passe", "Vous avez entrer deux mots de passes différents.\nRéesayez. !", "Ok", "Annuler");
			else//Idée honteusement copié de Wonderful-Life RP
			{
				SetPVarString(playerid, "CleanPassword", inputtext);//Mot de passe non-hashé
				return ShowPlayerDialog(playerid, dRegisterS4, DIALOG_STYLE_LIST, "Choix de l'age", "20\n21\n22\n23\n24\n25\n26\n27\n28\n29\n30\n31\n32\n33\n34\n35\n36\n37\n38\n39\n40\n41\n42\n43\n44\n45\n46\n47\n48\n49\n50\n51\n52\n53\n54\n55\n56\n57\n58\n59\n60\n61\n62\n63\n64\n65\n66\n67\n68\n69\n70\n71\n72\n73\n74\n75\n76\n77\n78\n79\n80", "Ok", "Annuler");
			}
		}
		case dRegisterS4:
		{
			pInfos[playerid][age] = listitem+20;
			return ShowPlayerDialog(playerid, dRegisterS5, DIALOG_STYLE_LIST, "Choix de l'origine", "Amerique du nord\nAmerique centrale\nAmerique du Sud\nAsie\nEurope\nAffrique du Nord\nAffrique du Sud", "Ok", "Annuler");
		}
		case dRegisterS5:
		{
			pInfos[playerid][country] = listitem;
			ShowPlayerDialog(playerid, dRegisterS6, DIALOG_STYLE_MSGBOX, "Inscription términée !", "Votre inscription est términée !\nVous pouvez désormais jouer.", "Ok", "Annuler");
			Player_TryRegister(playerid, GetPVarStringEx(playerid, "CleanPassword"));
			OnPlayerRegister(playerid);
			return SetPVarString(playerid, "CleanPassword", "None");//Réduis les risques de vol du mot de passe via des "injections de script"
		}
		case dLogin:
		{
			Player_TryLogin(playerid, inputtext);
			
			if(!Player_IsLoggedIn(playerid))
				OnPlayerLoginFail(playerid);
		}
	}
	return 1;
}

public OnPlayerClickPlayer(playerid, clickedplayerid, source)
{
	return 1;
}

/*
Callbacks ajoutées
*/
public OnPlayerFirstConnect(playerid)
{
	new message[220+MAX_PLAYER_NAME];
	format(message, sizeof(message), "Bonjour %s !\n Bienvenue sur Nyan-RP, un serveur RP qui se veux simple et amusant !\n Avant de pouvoir jouer, tu dois effectuer une rapide inscription.\nPas de panique, c'est simple et rapide !", GivePlayerName(playerid));
	ShowPlayerDialog(playerid, DIALOG_STYLE_MSGBOX, dRegisterS1, "Bienvenue sur Nyan-RP !", message, "Continuer", "Quitter");
}

public OnPlayerConnectAgain(playerid)
{
	Player_Login(playerid);
}

public OnPlayerLoginFail(playerid)
{
	SetPVarInt(playerid, "LoginFail", ++);
	ShowPlayerDialog(playerid, DIALOG_STYLE_PASSWORD, dLogin, "Login", "Mot de passe incorrect !\nré-essayez", "Login", "Annuler");
}

public OnPlayerLoginSucess(playerid)
{

}

public OnPlayerRegister(playerid)
{
	Player_Login(playerid);
}

public TenMinutesTimer()//Appelé toutes les 10 minutes
{
	AutoSavePlayersDatas();
}








































































































































































































































































































