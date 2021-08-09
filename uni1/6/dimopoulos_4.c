#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 *      Όνομα: Μιχαήλ Κωνσταντίνος
 *      Επώνυμο: Δημόπουλος
 *      Τμήμα: Ε2
 *      Εργασία: 1,2,3 (έκτη παράδοση)
 *      Ημερομηνία: 26/11
 */

/*
 *  Συνάρτηση για έβρεση παραγωντικόυ
 *  για την εργασία #4
 *
 */

int findParagontiko(int n) {
	int npar;
	if ( n==1 || n ==0 ) {
		npar = 1;
	} else {
		npar = 1;
		for (int i=2; i <= n; i++) {
			npar = npar * i;
		}
	}
	return npar;
}

/* 
 * Συνάρτηση για διάκριση πρώτων 
 * για την εργασία #4
 *
 */

bool isProtos(int n) {
	bool protos = true;
	for (int i=2; i <= n/2; i++) {
		if (n%i == 0)
			protos = false;
	}
	return protos;
}

main() {
	/* Εισαγωγή δεδομένων για τις εργασίες 1, 2 */
	int n, npar,i;
	printf("Dwse enan akeraio (0-10): ");
	scanf("%d",&n);

	/* ~~~~~~~~~~~~~~~1~~~~~~~~~~~~~~~ */
	/* Υπολογίζει το n παραγωντικό */
	if ( n==1 || n ==0 ) {
		npar = 1;
	} else {
		npar = 1;
		for (int i=2; i <= n; i++) {
			npar = npar * i;
		}
	}
	/* Εξαγωγή δεδομένων */
	printf("%d! = %d\n", n, npar);


	/* ~~~~~~~~~~~~~~~2~~~~~~~~~~~~~~~ */
	/* Ίδια με την 1 χωρίς το if/else statement */
	npar = 1;
	for (int i=2; i <= n; i++) {
		npar = npar * i;
	}
	/* Εξαγωγή */
	printf("%d! = %d - No if/else\n", n, npar);
	
	/* ~~~~~~~~~~~~~~4.A~~~~~~~~~~~~~~ */
	printf("%d! = %d - function call\n", n, findParagontiko(n));


	/* ~~~~~~~~~~~~~~~3~~~~~~~~~~~~~~~
	 Βρίσκει αν ένας αριθμός είναι πρώτος  */
	printf("\nDwse enan akeraio (2-100): ");
	scanf("%d", &n);

	/* Υλοποίηση του αλγορίθμου */
	bool protos = true;
	for (int i=2; i <= n/2; i++) {
		if (n%i == 0)
			protos = false;
	}

	/* Εξαγωγή δεδομένων αναλόγως το αποτέλεσμα */	
	if (protos == true)
		printf("O %d einai prwtos.\n", n);
	else
		printf("O %d den einai prwtos.\n", n);

	/* ~~~~~~~~~~~~~~4.A~~~~~~~~~~~~~~ */
	if (isProtos(n) == true)
		printf("O %d einai prwtos. - function call\n", n);
	else
		printf("O %d den einai prwtos. - function call\n", n);
}
