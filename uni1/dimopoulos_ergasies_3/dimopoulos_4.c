#include <stdio.h>
#include <stdlib.h>

/*
        Όνομα: Μιχαήλ Κωνσταντίνος
        Επώνυμο: Δημόπουλος
        Τμήμα: Ε2
        Εργασία: 4
        Ημερομηνία: 7/11
*/

main() {
	int a,b,diff,cent;
	double final;

	printf("Give the two initial ratings (1-100): ");
	scanf("%d %d", &a, &b);

	diff = abs(a-b);	
	if (diff < 20) {
		cent = (a+b)/2;	
	} else {
		int c;
		printf("Give me the third rating (1-100): ");
		scanf("%d", &c);
		cent = (a+b+c)/3;
	}
	
	final = (double)cent / (double)5;
	printf("CENT: %d/100\nFINAL: %lf\n",cent, final);
}
