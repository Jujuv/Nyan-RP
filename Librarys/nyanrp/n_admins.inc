#if !defined N_ADMINS_INCLUDED
	#define N_ADMINS_INCLUDED
#else
	#endinput
#endif

#define Ban(%0) NYAN_Ban(%0)
#define BanEx(%0, %1) NYAN_Ban(%0, %1)

stock NYAN_Ban(userID, adminID, reason[] = "raison non-spécifié")
{
	
} 