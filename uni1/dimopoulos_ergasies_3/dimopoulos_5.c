#include <stdio.h>
#include <stdlib.h>

/*
        Όνομα: Μιχαήλ Κωνσταντίνος
        Επώνυμο: Δημόπουλος
        Τμήμα: Ε2
        Εργασία: 5
        Ημερομηνία: 7/11
*/

main() {
	// Εισαγωγή δεδομένων
	double sal, unisef, sos, f;
	printf("Salary: ");
	scanf("%lf", &sal);

	// Υπολογισμός ποσών 
	if (sal <= 800.0) {
		unisef = sal * 4.0 / 100.0;
		sos = sal * 5.0 / 100.0;	
	} else if (sal <= 1200.0) {
		unisef = sal * 6.0 / 100.0;
		sos = sal * 7.5 / 100.0;
	} else if (sal <= 2000) {
		unisef = sal * 8.0 / 100.0;
		sos = sal * 9.5 / 100.0;
	} else {
		unisef = sal * 11.0 / 100.0;
		sos = sal * 12.0 / 100.0;
	}
	
	f = sal - unisef - sos;

	// Εντολή εξόδου 
	printf("UNISEF : %lf\nSOS    : %lf\nSALARY : %lf\n", unisef, sos, f);
}
