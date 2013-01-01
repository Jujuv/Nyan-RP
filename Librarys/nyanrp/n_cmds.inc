YCMD:amenu(playerid, prams[], help)
{
	if(help)
		SendClientMessage(playerid, C_YELLOW, "[Aide] - La commande [/amenu] permet l'accés au menu d'administration");
	else if(IsPlayerAdmin(playerid))
			ShowPlayerDialog(playerid, dAMenu, DIALOG_STYLE_LIST,"Menu - Administration" , "Vehicules\n", "Valider", "Annuler"); 
	else
		SendClientMessage(playerid, C_RED, "[Erreur] - Cette commande est résérvé aux administrateurs");
	
	return 1;
}