/*---------------------------------[Inclusion des bibliotheques]---------------------------*/
#include ".\INC\nyanrp.inc"

/*------------------------------[Prototypes de fonctions publiques]------------------------*/
forward OnPlayerFirstConnect(playerid);
forward OnPlayerConnectAgain(playerid);
forward OnPlayerLoginFail(playerid);
forward OnPlayerRegister(playerid);
forward OnPlayerLoginSucess(playerid);
forward OnPlayerCrash(playerid);
forward OnPlayerQuit(playerid);
forward OnPlayerKicked(playerid);
forward TenMinutesTimer();

/*-----------------------------------------[Callbacks]-------------------------------------------------*/
main()
{
	print("\n----------------------------------");
	print("Nyan-RP");
	print("----------------------------------\n");
}

public OnGameModeInit(){
    djson_GameModeInit();
	SetGameModeText("Nyan-RP");
	AddPlayerClass(0, 1958.3783, 1343.1572, 15.3746, 269.1425, 0, 0, 0, 0, 0, 0);
	SetTimer("TenMinutesTimer", 600000, true);//10*1000*60=600000
	return 1;}

public OnGameModeExit(){
    djson_GameModeExit();
	return 1;}

public OnPlayerRequestClass(playerid, classid){
	SpawnPlayer(playerid);
	return 1;}

public OnPlayerConnect(playerid){
	if(!Player_IsRegistered(playerid))
		OnPlayerFirstConnect(playerid);
	else
		OnPlayerConnectAgain(playerid);
	return 1;}

public OnPlayerDisconnect(playerid, reason){
	switch(reason){
		case 0:
			OnPlayerCrash(playerid);
		case 1:
			OnPlayerQuit(playerid);
		case 2:
			OnPlayerKicked(playerid);}
	return 1;}

public OnPlayerText(playerid, text[]){
	SendMessageToNearPlayers(playerid, text, CE_PURPPLE, CE_WHITE, CE_GREY, CE_BLACK);
	return 0;}

public OnPlayerClickPlayer(playerid, clickedplayerid, source){
	return 1;}

	
/*------------------------------[Callbacks ajoutees]---------------------------------*/
public OnPlayerFirstConnect(playerid){
	pInfos[playerid][aRank] = MEMBER;
	new message[220+MAX_PLAYER_NAME];
	format(message, sizeof(message), "CE_WHITE Bonjour %s !\n Bienvenue sur CE_PURPLE Nyan-RP CE_WHITE, un serveur RP qui se veux simple et amusant !\n Avant de pouvoir jouer, tu dois effectuer une rapide inscription.\nPas de panique, c'est simple et rapide !", GetPlayerName(playerid));
	ShowPlayerDialog(playerid, DIALOG_STYLE_MSGBOX, dRegisterS1, "CE_GREEN Bienvenue sur Nyan-RP !", message, "Continuer", "Quitter");}

public OnPlayerConnectAgain(playerid){
	LoginForm(playerid);}

public OnPlayerLoginFail(playerid){
	SetPVarInt(playerid, "LoginFail", ++);
	ShowPlayerDialog(playerid, DIALOG_STYLE_PASSWORD, dLogin, "Login", "Mot de passe incorrect !\nReessayez", "Login", "Annuler");}

public OnPlayerLoginSucess(playerid){
	if(pInfos[playerid][IsBanned])
		KickEx(playerid, "Ce compte a été bannis de notre serveur");}

public OnPlayerRegister(playerid){
	LoginForm(playerid);}

public OnPlayerCrash(playerid){}

public OnPlayerQuit(playerid){}

public OnPlayerKicked(playerid){}

public TenMinutesTimer(){
	AutoSavePlayersDatas();}