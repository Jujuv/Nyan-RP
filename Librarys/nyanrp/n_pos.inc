#if !defined N_POS_INCLUDED
	#define N_POS_INCLUDED
#else
	#endinput
#endif

stock ProxDetector(playerid, targetid, Float:range)  
{
    if(GetPlayerVirtualWorld(playerid) != GetPlayerVirtualWorld(targetid) || GetPlayerInterior(playerid) != GetPlayerInterior(playerid))
        return 0;

    new Float:posX, Float:posY, Float:posZ;  
    GetPlayerPos(playerid, posX, posY, posZ);  
    return IsPlayerInRangeOfPoint(targetid, range, posX, posY, posZ); 
}