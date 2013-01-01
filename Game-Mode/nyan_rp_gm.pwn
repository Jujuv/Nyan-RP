/* ///////////////////////////// Includes ///////////////////////////// */
#include <nyanrp>

/* ///////////////////////////// Forwarding Public Functions ///////////////////////////// */
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

public OnPlayerFirstConnect(playerid)// When a player connects to the server for the first time
{
	pInfos[playerid][aRank] = MEMBER;
	new message[220+MAX_PLAYER_NAME];
	format(message, sizeof(message), "CE_WHITE Hello %s !\n Welcome to CE_PURPLE Nyan-RP CE_WHITE, a roleplay server that is simple and fun !\n Before you start playing, you must register,\ndo not panic, its quite easy and fast", GetPlayerName(playerid));
	ShowPlayerDialog(playerid, DIALOG_STYLE_MSGBOX, dRegisterS1, "CE_GREEN Welcome to Nyan-RP !", message, "Continue", "Quit");
}

public OnPlayerConnectAgain(playerid)// When a player connects, shows register/login
{
	LoginForm(playerid);
}

public OnPlayerLoginFail(playerid)// When a player has a incorrect password
{
	SetPVarInt(playerid, "LoginFail", ++);
	ShowPlayerDialog(playerid, DIALOG_STYLE_PASSWORD, dLogin, "Login", "Incorrect Password !\nTry Again", "Login", "Annuler");
}

public OnPlayerLoginSucess(playerid)//When the player has successfully logs in.
{

}

public OnPlayerRegister(playerid)//When a player passes the register dialog
{
	LoginForm(playerid);
}

public OnPlayerCrash(playerid)
{

}

public OnPlayerQuit(playerid)
{

}

public OnPlayerKicked(playerid)// /!\Also called when a player is banned
{

}

public TenMinutesTimer()//Calls every 10 minutes
{
	AutoSavePlayersDatas();
}
