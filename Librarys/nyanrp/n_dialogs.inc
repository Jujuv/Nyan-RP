#if !defined N_DIALOGS_INCLUDED
	#define N_DIALOGS_INCLUDED
#else
	#endinput
#endif

DIALOG:dRegisterS1(playerid,response,listitem,inputtext[])
{
	ShowPlayerDialog(playerid, dRegisterS2, DIALOG_STYLE_PASSWORD, ""CE_GREEN"Choix du mot de passe", ""CE_WHITE"Veuillez choisir un "CE_PURPPLE"mot de passe"CE_WHITE" de connexion.\nAttention de ne pas le perdre !\n\nPS:Votre mot de passe doit contenir au moins 6 carracteres", "Ok", "Annuler");
	return 0;
}

DIALOG:dRegisterS2(playerid,response,listitem,inputtext[])
{
	if(strlen(inputtext) < MIN_PASSWORD_LENGHT)
		{
			ShowPlayerDialog(playerid, dRegisterS2, DIALOG_STYLE_PASSWORD, ""CE_GREEN"Choix du mot de passe", ""CE_RED" Erreur."CE_WHITE"Le mot de passe choisis est trop court", "Ok", "Annuler");
		}
	else
		{
			SetPVarInt(playerid, "HashedPassword", YHash(inputtext));
			ShowPlayerDialog(playerid, dRegisterS3, DIALOG_STYLE_PASSWORD, ""CE_GREEN"Verification du mot de passe", ""CE_WHITE"Afin d'eviter toute erreur lors du choix de votre mot de passe, nous vous demandons de bien vouloir le rentrer de nouveau.", "Ok", "Annuler");
		}
	return 0;
}

DIALOG:dRegisterS3(playerid,response,listitem,inputtext[])
{
	if(YHash(inputtext) != GetPVarInt(playerid, "HashedPassword"))
		{
			ShowPlayerDialog(playerid, dRegisterS2, DIALOG_STYLE_PASSWORD, ""CE_GREEN"Choix du mot de passe", ""CE_WHITE"Vous avez entre deux mots de passes differents.\nReesayez. !", "Ok", "Annuler");
		}
	else
		{
			SetPVarString(playerid, "CleanPassword", inputtext);//Mot de passe non-hash.
			ShowPlayerDialog(playerid, dRegisterS4, DIALOG_STYLE_LIST, ""CE_GREEN"Choix de l'age", "20\n21\n22\n23\n24\n25\n26\n27\n28\n29\n30\n31\n32\n33\n34\n35\n36\n37\n38\n39\n40\n41\n42\n43\n44\n45\n46\n47\n48\n49\n50\n51\n52\n53\n54\n55\n56\n57\n58\n59\n60\n61\n62\n63\n64\n65\n66\n67\n68\n69\n70\n71\n72\n73\n74\n75\n76\n77\n78\n79\n80", "Ok", "Annuler");
		}
	return 0;
}

DIALOG:dRegisterS4(playerid,response,listitem,inputtext[])
{
	pInfos[playerid][age] = listitem+20;
	ShowPlayerDialog(playerid, dRegisterS5, DIALOG_STYLE_LIST, ""CE_GREEN"Choix de l'origine", "Amerique du nord\nAmerique centrale\nAmerique du Sud\nAsie\nEurope\nAffrique du Nord\nAffrique du Sud", "Ok", "Annuler");
	return 0;
}

DIALOG:dRegisterS5(playerid,response,listitem,inputtext[])
{
	pInfos[playerid][country] = listitem;
	ShowPlayerDialog(playerid, dRegisterS6, DIALOG_STYLE_MSGBOX, "Inscription terminee !", "Votre inscription est terminee !\nVous pouvez desormais jouer.", "Ok", "Annuler");
	Player_TryRegister(playerid, GetPVarStringEx(playerid, "CleanPassword"));
	SetPVarString(playerid, "CleanPassword", "None");//Réduis les risques de vol du mot de passe via des "injections de script"
	OnPlayerRegister(playerid);
	return 0;
}

DIALOG:dLogin(playerid,response,listitem,inputtext[])
{
	Player_TryLogin(playerid, inputtext);
	
	if(!Player_IsLoggedIn(playerid))
		OnPlayerLoginFail(playerid);
	else
		OnPlayerLoginSucess(playerid);
}

DIALOG:dAMenu(playerid, response, listitem, inputtext[])
{
	if(!response)
		return 1;
	
	switch(listitem)
		{
			case 0:
				{
					AMenu_Vehicles(playerid);
				}
			
			default:
				{
					printf("[WARNING] - La fonction DIALOG:dAMenu() a reçu des données invalides - Informations: La variable listitem vaux %i ce qui n'est pas la valeur attendue", listitem);
				}
		}
	return 0;
}