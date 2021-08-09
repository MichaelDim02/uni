#include <stdio.h>
#include <stdlib.h>

/*
 *      Όνομα: Μιχαήλ Κωνσταντίνος
 *      Επώνυμο: Δημόπουλος
 *      Τμήμα: Ε2
 *      Εργασία: 3, (έκτη παράδοση)
 *      Ημερομηνία: 26/11
 */

main() {
	int n, npar,i;
	printf("Dwse enan akeraio (0-10): ");
	scanf("%d",&n);

	npar = 1;
	for (int i=2; i <= n; i++) {
		npar = npar * i;
	}
	printf("%d! = %d\n", n, npar);
}
