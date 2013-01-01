/* ///////////////////////////// Inclusion des bibliotheques ///////////////////////////// */
#include <nyanrp>

/* ///////////////////////////// Prototypes de fonctions publiques ///////////////////////////// */
forward OnPlayerFirstConnect(playerid);
forward OnPlayerConnectAgain(playerid);
forward OnPlayerLoginFail(playerid);
forward OnPlayerRegister(playerid);
forward OnPlayerLoginSucess(playerid);
forward TenMinutesTimer();
forward OnPlayerCrash(playerid);
forward OnPlayerQuit(playerid);
forward OnPlayerKicked(playerid);

/* ///////////////////////////// Callbacks ///////////////////////////// */
main()
{
	print("\n----------------------------------");
	print("Nyan-RP");
	print("----------------------------------\n");
}

public OnGameModeInit()
{
    djson_GameModeInit();

	SetGameModeText("Nyan-RP");
	AddPlayerClass(0, 1958.3783, 1343.1572, 15.3746, 269.1425, 0, 0, 0, 0, 0, 0);
	SetTimer("TenMinutestimer", 10*1000*60, true);
	

	return 1;
}

public OnGameModeExit()
{
    djson_GameModeExit();

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
	switch(reason)
	{
		case 0:
			OnPlayerCrash(playerid);
		case 1:
			OnPlayerQuit(playerid);
		case 2:
			OnPlayerKicked(playerid);
	}
	return 1;
}

public OnPlayerText(playerid, text[])
{
	SendMessageToNearPlayers(playerid, text, CE_PURPPLE, CE_WHITE, CE_GREY, CE_BLACK);
	return 0;
}

public OnPlayerClickPlayer(playerid, clickedplayerid, source)
{
	return 1;
}

/* ///////////////////////////// Callbacks ajoutees ///////////////////////////// */

public OnPlayerFirstConnect(playerid)//Quand le joueur se connecte pour la premere fois
{
	pInfos[playerid][aRank] = MEMBER;
	new message[220+MAX_PLAYER_NAME];
	format(message, sizeof(message), "CE_WHITE Bonjour %s !\n Bienvenue sur CE_PURPLE Nyan-RP CE_WHITE, un serveur RP qui se veux simple et amusant !\n Avant de pouvoir jouer, tu dois effectuer une rapide inscription.\nPas de panique, c'est simple et rapide !", GetPlayerName(playerid));
	ShowPlayerDialog(playerid, DIALOG_STYLE_MSGBOX, dRegisterS1, "CE_GREEN Bienvenue sur Nyan-RP !", message, "Continuer", "Quitter");
}

public OnPlayerConnectAgain(playerid)//Quand un joueur dea inscris se connecte
{
	LoginForm(playerid);
}

public OnPlayerLoginFail(playerid)//Quand un joueur se trompe de mot de passe à la connexion
{
	SetPVarInt(playerid, "LoginFail", ++);
	ShowPlayerDialog(playerid, DIALOG_STYLE_PASSWORD, dLogin, "Login", "Mot de passe incorrect !\nReessayez", "Login", "Annuler");
}

public OnPlayerLoginSucess(playerid)//Quand le joueur s'est logge avec succes
{

}

public OnPlayerRegister(playerid)//Quand le joueur termine son inscription
{
	LoginForm(playerid);
}

public OnPlayerCrash(playerid)
{

}

public OnPlayerQuit(playerid)
{

}

public OnPlayerKicked(playerid)// /!\Aussi appele quand le jour est banni
{

}

public TenMinutesTimer()//Appele toutes les 10 minutes
{
	AutoSavePlayersDatas();
}

/*

Fixing isuue with Github.
Please ignore this comment
*/