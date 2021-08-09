#include <stdio.h>
#include <stdlib.h>

/*
	Μιχαήλ Κωνσταντίνος Δημόπουλος
	Δομημένος προγραμματισμός
	Εργασία #2
*/

main() {
	/* Εισαγωγή βημάτων */
	printf("Distance: ");
	scanf("%d", &N);

	/* Μετατροπή από βήματα σε εκατοστά */
	long int dist_cm = N * 80;	
	
	/* Υπολογισμός km, m & cm. */
	int km = (N - N % 100000)/100000; 
	int m  = ((N%100000) - N % 10) / 100;
	int cm = N % 100000 % 100;

	/* Εμφάνιση αποτελεσμάτων */
	printf("Distance in cm: %d\n", dist_cm);
	printf("%dkm, %dm, %dcm\n", km,m,cm);
}
