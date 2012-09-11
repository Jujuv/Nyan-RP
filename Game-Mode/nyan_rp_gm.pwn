/*
Macros divers
*/
#define MODE_NAME Nyan-RP M04
#define SetPVarInt(%0,%1,++) SetPVarInt(%0,%1,GetPVarInt(%0,%1)+1)

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

/*
Inclusion de bibliotheques
*/
#include <nyanrp>

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
public OnPlayerFirstConnect(playerid)//Quand le joueur se connecte pour la premiére fois
{
	new message[220+MAX_PLAYER_NAME];
	format(message, sizeof(message), "Bonjour %s !\n Bienvenue sur Nyan-RP, un serveur RP qui se veux simple et amusant !\n Avant de pouvoir jouer, tu dois effectuer une rapide inscription.\nPas de panique, c'est simple et rapide !", GivePlayerName(playerid));
	ShowPlayerDialog(playerid, DIALOG_STYLE_MSGBOX, dRegisterS1, "Bienvenue sur Nyan-RP !", message, "Continuer", "Quitter");
}

public OnPlayerConnectAgain(playerid)//Quand un joueur dèja inscris se connecte
{
	LoginForm(playerid);
}

public OnPlayerLoginFail(playerid)//Quand un joueur se trompe de mot de passe à la connexion
{
	SetPVarInt(playerid, "LoginFail", ++);
	ShowPlayerDialog(playerid, DIALOG_STYLE_PASSWORD, dLogin, "Login", "Mot de passe incorrect !\nré-essayez", "Login", "Annuler");
}

public OnPlayerLoginSucess(playerid)//Quand le joueur s'est loggé avec succés
{

}

public OnPlayerRegister(playerid)//Quand le joueur termine son inscription
{
	LoginForm(playerid);
}

public TenMinutesTimer()//Appelé toutes les 10 minutes
{
	AutoSavePlayersDatas();
}








































































































































































































































































































