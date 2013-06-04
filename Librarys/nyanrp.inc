#if !defined N_MAIN_INCLUDED
	#define N_MAIN_INCLUDED
#else
	#error La bibliotheque NyanRP ne dois être incluse qu une seul fois !
#endif

/*
Tweaks
*/
#define MODE_NAME Nyan-RP //Macro necessaire à l utilisation de YSI
#define FDLG_USE_YSI_HOOK //Configure FDLG pour utiliser la méthode "Y Hook" de YSI

/*
YSI
*/
#include <YSI\y_stringhash>
#include <YSI\y_users>
#include <YSI\y_uvar>
#include <YSI\y_commands>

/*
Autres bibliotheques
*/
#include <fdialog>//Inclusion de FDLG
#include <djson>

/*
Nyan-RP
*/
#include <nyanrp\n_tweaks>
#include <nyanrp\n_colors>
#include <nyanrp\n_users>
#include <nyanrp\n_dialogs>
#include <nyanrp\n_strings>
#include <nyanrp\n_pos>
#include <nyanrp\n_chat>
#include <nyanrp\n_admins>
#include <nyanrp\n_vehicles>
#include <nyanrp\n_cmds>


