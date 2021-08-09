#include <stdio.h>
#include <stdlib.h>

/*
        Όνομα: Μιχαήλ Κωνσταντίνος
        Επώνυμο: Δημόπουλος
        Τμήμα: Ε2
        Εργασία: 3, (Τέταρτη παράδοση)
        Ημερομηνία: 12/11
*/

main() {
	int arithmosAkinhtwn, posoEisodhmatos, aforologhtoEisodhma;
	printf("Dwse poso eisodhmatos kai arithmo akinhtwn: ");
	scanf("%d %d", &posoEisodhmatos, &arithmosAkinhtwn);

	switch(arithmosAkinhtwn) {
		case 0:	aforologhtoEisodhma=12000;
			break;
		case 1: aforologhtoEisodhma=10000;
			break;
		case 2: aforologhtoEisodhma=8000;
			break;
		case 3: aforologhtoEisodhma=5000;
			break;
		default:aforologhtoEisodhma=0;
	}		
	printf("Aforologhto eisodhma: %d\n", aforologhtoEisodhma);
	
	double forologhteoEisodhma = (double)posoEisodhmatos - (double)aforologhtoEisodhma;
	double forosPouAnalogei = (double)forologhteoEisodhma * 30.0/100.0;

	printf("Forologhteo eisodhma: %lf\nForos pou analogei: %lf\n", forologhteoEisodhma, forosPouAnalogei);
}
