#if !defined N_STRINGS_INCLUDED
	#define N_STRINGS_INCLUDED
#else
	#endinput
#endif

#define IsStringEmpty(%0) IsStringNull(%0)
#define strsame(%0) strs(%0)

stock strs(str1[], str2[], bool:ignorecase = true)//Indique si 2 chaines de carractéres sont identiques (copié de dracoBlue)
{
    if (strlen(str1) != strlen(str2)) return false;
    if (!strcmp(str1, str2, ignorecase)) return true;
    return false;
}

stock GivePlayerName(playerid)//Retourne le nom d'un joueur
{
		new pName[MAX_PLAYER_NAME+1];
		GetPlayerName(playerid, pName, sizeof(pName));
		return pName;
}

stock GetPVarStringEx(playerid, vName[])//Retourne la valeur d'une PVAR de type chaine de carractéres 
{
	new string[500];
	GetPVarString(playerid, vName, string, sizeof(string));
	return string;
}

stock IsStringNull(string[])//Indique si une chaine de carractére est vide
{
		if(string[0] == '\0')
			return true;
		return false
}














