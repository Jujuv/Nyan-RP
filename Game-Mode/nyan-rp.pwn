/*
Nyan-RP est un GM de type RP crée dans le seul but d'être partagé pubiquement et de divertir son auteur.
Nyan-RP est un GM crée par Jujuv (ou Pseudonyme).
Nyan-RP utilise toute fois un certains nombre de bibliotheques libres afin de simplifier le developement.

Le nom Nyan-RP viens à l'origine de la contraction de l'expresion anglaise "Yet Another RP" (YAN-RP) à la-quel est venu s'ajouter la lettre "n" pour réaliser un jeu de mot avec le mot japonais "nyan" (litéralement "miaou")

Rien ne vous oblige à laisser à laisser ces credits originaux, votre conscience est seul maitre de vos choix.
Toute fois, si vous décidez de retirer ces credits vous aurez, à mrs yeux, fait la preuve d'une proffonde stupidité.

From Jujuv
*/

/*
Divers directives de pre-processeur imposés par YSI
*/
#define MODE_NAME Nyan-RP M01B
#pragma unused Langs_AddLanguage



/*
Inclusion de bibliotheques de bases
*/
#include <a_samp>
#include <YSI>
#include <Commons\Y_Less\foreach>

/*
Macros divers
*/
#define MIN_PASSWORD_LENGHT 7


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
		dRegisterS6//Message de fin d'inscription
}

enum//Enumeration des IDs de pays
{
		nAmerica,//North America (Amerique du Nord / USA)
		mAmerica,//Middle America (Amerique centrale)
		sAmerica,//South America (Amerique du Sud
		asia,//Asie
		europe,//Europe
		nAfrica,//North Africa (Afrique du Nord)
		sAfrica//South Africa (Afrique du Sud)
		
}

enum E_PLAYERS
{
		pwd,//Stocke le mot de passe hasché
		age,
		country,
		level,
		money
}
uvar pInfos[MAX_PLAYERS][E_PLAYERS];

/*
Création de fonctions
*/


stock strs(str1[], str2[], bool:ignorecase = true)
{
    if (strlen(str1) != strlen(str2)) return false;
    if (!strcmp(str1, str2, ignorecase)) return true;
    return false;
	
	/*
	Fonction honteusement copié de Dutils (de Dracoblue)
	*/
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

forward OnPlayerFirstConnect(playerid);
public OnPlayerFirstConnect(playerid)
{
	new message[255];
	format(message, sizeof(message), "Bonjour %s !\n Bienvenue sur Nyan-RP, un serveur RP qui se veux simple et amusant !\n Avant de pouvoir jouer, tu dois effectuer une rapide inscription.\nPas de panique, c'est simple et rapide !", GivePlayerName(playerid));
	ShowPlayerDialog(playerid, DIALOG_STYLE_MSGBOX, dRegisterS1, "Bienvenue sur Nyan-RP !", message, "Continuer", "Quitter");
}

forward ProxDetector(playerid, targetid, Float:range);
public ProxDetector(playerid, targetid, Float:range)  
{
    if(!(IsPlayerConnected(playerid) || IsPlayerConnected(targetid)) || playerid == targetid)
        return 0;
    if(!(GetPlayerVirtualWorld(playerid) == GetPlayerVirtualWorld(targetid) && GetPlayerInterior(playerid) == GetPlayerInterior(playerid)))
        return 0;

    new Float:posX, Float:posY, Float:posZ;  
    GetPlayerPos(playerid, posX, posY, posZ);  
    return IsPlayerInRangeOfPoint(targetid, range, posX, posY, posZ); 
}

stock SendMessageToNearPlayers(playerid, message[], color0, color1, color2, color3)
{
	format(message, strlen(message), "%s: %s", GivePlayerName(playerid), message);
	
	foreach(new targetid : Player)
	{
		if(ProxDetector(playerid, targetid, 2.0))
			SendClientMessage(targetid, color0, message);
		else if(ProxDetector(playerid, targetid, 4.0)
			SendClientMessage(targetid, color1, message);
		else if(ProxDetector(playerid, targetid, 6.0)
			SendClientMessage(targetid, color2, message);
		else if(ProxDetector(playerid, targetid, 8.0)
			SendClientMessage(targetid, color3, message);
	}
}

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
	
	
	return 1;
}

public OnGameModeExit()
{
	return 1;
}

public OnPlayerRequestClass(playerid, classid)
{
	return 1;
}

public OnPlayerConnect(playerid)
{
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
	SendMessageToNearPlayers(playerid, text, 
	return 1;
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
			if(strlen(inputtext) > MIN_PASSWORD_LENGHT)
				return ShowPlayerDialog(playerid, dRegisterS2, DIALOG_STYLE_PASSWORD, "Choix du mot de passe", "Erreur. Le mot de passe choisie est trop court", "Ok", "Annuler");
			else
			{
				pInfos[playerid][pwd] = YHash(inputtext);
				return ShowPlayerDialog(playerid, dRegisterS3, DIALOG_STYLE_PASSWORD, "Verification du mot de passe", "Afin d'éviter toute erreur lors du choix de votre mot de passe, nous vous demandons de bien vouloir le rentrer de nouveau.", "Ok", "Annuler");
			}
		}
		case dRegisterS3:
		{
			if(YHash(inputtext) != pInfos[playerid][pwd])
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
			ShowPlayerDialog(playerid, dRegisterS6, DIALOG_STYLE_LIST, "Inscription términée !", "Votre inscription est términée !\nVous pouvez désormais jouer.", "Ok", "Annuler");
			Player_TryRegister(playerid, GetPVarStringEx(playerid, "CleanPassword"));
			return SetPVarString(playerid, "CleanPassword", "None");//Réduis les risques de vol du mot de passe via des "injections de script"
		}
	}
	return 1;
}

public OnPlayerClickPlayer(playerid, clickedplayerid, source)
{
	return 1;
}
