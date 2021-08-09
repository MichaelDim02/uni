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
	/* Εισαγωγή δεδομένων */
	int destination;
	double w, cost;
	printf("Provide destination, weight (in g):");
	scanf("%d %lf", &destination, &w);

	/* Υπολογισμός κόστους */
	if (destination == 0) {
		if (w <= 500.0) 
			cost = 2.0;
		else if (w <= 1000.0)
			cost = 3.5;
		else
			cost = 4.6;
	} else if (destination == 1) {
		if (w <= 500.0) 
			cost = 4.8;
		else if (w <= 1000.0)
			cost = 7.2;
		else
			cost = 11.5;
	} else {
		printf("Please provide a proper destination number (0 for locally, 1 for abroad)\n");
		exit(0);
	}

	/* Εντολή εξόδου */
	printf("COST: %lf\n", cost);
}
