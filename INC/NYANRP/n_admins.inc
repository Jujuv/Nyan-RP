#if !defined N_ADMINS_INCLUDED
	#define N_ADMINS_INCLUDED
#else
	#endinput
#endif

#define Ban(%0) NYAN_Ban(%0)
#define BanEx(%0, %1) NYAN_Ban(%0, %1)

stock KickEx(playerid, message[])
{
	if(!IsPlayerConnected(playerid))
		return 1;
		
	SendClientMessage(playerid, C_YELLOW, message);
	SetTimerEx("Kick", 1000, false, "%d", playerid);
	
	return 0;
}

stock NYAN_Ban(userID, adminID, reason[] = "Raison inconnue")
{
	if(!Player_IsLoggedIn(userID))
		return 1;
	if(!Player_IsLoggedIn(adminID))
		return 2;
	
	new message[250];
	format(message, sizeof(message), "L'administrateur [%s] a bannis [%s] du seveur pour le motif suivant: %s", GetPlayerName(adminID), GetPlayerName(userID), reason);
	SendClientMessageToAll(C_YELLOW, message);
	
	pInfos[userID][IsBanned] = true;
	SetTimerEx("Kick", 1000, false, "%d", userID);
	
	return 0;
} 

