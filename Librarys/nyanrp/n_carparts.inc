#if !defined N_CARPARTS_INCLUDED
	#define N_CARPARTS_INCLUDED
#else
	#endinput
#endif

#define Paintjob1 701
#define Paintjob2 702
#define Paintjob3 703
#define Paintjob4 704 

/*
M = Muffer
*/
enum //Enumeration des IDs des pots d'échapement (muffer) pour le tunning
{
	mNormal,
	mBig,
	mDouble,
	mHigh
}

/*
N = Nitro / NOS
*/
enum //Enumeration des IDs des kits de NOS
{
	n2,
	n5,
	n10
}

/*
TR = Tire Rims
*/
enum //Enumeration des IDs de jantes/rims
{
	trImpact,
	trAtomic,
	trAhab,
	trVirtual,
	trAcces,
	trCrossCountry,//Tout terrains
	trMega,
	trGrove,
	trTwist,
	trWires
}

/*
SP = SPoiler
*/
enum //Enumeration des IDs de spoilers/ailerons
{
	spWin,
	spChamp,
	spFury,
	spPro
}

enum //Enumeration des IDs de parechocs, juppes et toits
{
	alien,
	xflow
}
