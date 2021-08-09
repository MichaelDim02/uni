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
	int age, c, type, cost;
	printf("Provide the age of the driver, the volume & type of vehicle.\n");
	scanf("%d %d %d", &age, &c, &type, &cost);

	// Υπολογισμός κόστους
	if(type == 0) {
		if (c <= 125)
			cost = 100;
		else
			cost = 140;
	} else if (type == 1) {
		if (c <= 1400)
			cost = 400;
		else if (c <= 1800) 
			cost = 500;
		else
			cost = 700;
	} else {
		printf("Please provide vehicle type.\n");
		exit(0);
	}

	// 10% αν ο οδηγός είναι <24
	if (age <= 24) {
		cost = cost + cost * 10 / 100;
	}
	
	// Εντολή εξόδου
	printf("COST : %d\n", cost);
}
