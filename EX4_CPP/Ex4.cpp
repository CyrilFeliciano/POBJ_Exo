// Canevas Ex4  SL228_POBJ  CPP
// C. Feliciano 23.01.24

#include <iostream>
#include "Utilisateur.h"
//using namespace std;



int main (void)
{
	Utilisateur UserA, UserB, UserC;

	UserA.ChoisirForme(0);
	UserA.SaisirLesParametres();
	UserA.ExecuterLesCalculs();
	UserA.AfficherResultats();

	UserB.ChoisirForme(1);
	UserB.SaisirLesParametres();
	UserB.ExecuterLesCalculs();
	UserB.AfficherResultats();

	UserC.ChoisirForme(2);
	UserC.SaisirLesParametres();
	UserC.ExecuterLesCalculs();
	UserC.AfficherResultats();

	return 0;
}