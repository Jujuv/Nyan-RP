#if !defined N_CHAT_INCLUDED
	#define N_CHAT_INCLUDED
#else
	#endinput
#endif

stock SendMessageToNearPlayers(playerid, message[], nameColor[], color1[], color2[], color3[])
{
	new output[250];//Chaine de carractére correspondant au message affiché au joueur
	new bool:send = false;//Le message dois t-il être envoyé ?
	
	format(output, sizeof(output), "%s%s: ", nameColor, GetPlayerName(playerid));//On incoropore le nom du joueur (avec sa couleur)
	
	foreach(new targetid : Player)
	{
		if(ProxDetector(playerid, targetid, 2.0))
			{
				strcat(output, color1);//On incopore le code couleur correspondant au "range"
				send = true;//Il est bien dans l-un des "ranges" désirés, alors on lui envoie
			}
		else if(ProxDetector(playerid, targetid, 4.0))
			{
				strcat(output, color2);
				send = true;
			}
		else if(ProxDetector(playerid, targetid, 6.0))
			{
				strcat(output, color3);
				send = true;
			}
			
		if(send)//Si il est dans un des 3 "ranges"
		{
				strcat(output, message);//on incorpore le message
				SendClientMessage(targetid, -1, output);//on le lui envoie
		}
		
	}
}
