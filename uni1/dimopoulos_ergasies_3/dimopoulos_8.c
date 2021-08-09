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
	double kwh, cost;
	printf("Give kw/h: ");
	scanf("%lf", &kwh);

	// Υπολογισμός πληρωτέου ποσού κλιμακωτά
	if (kwh <= 200) 
		cost = 0.20 * kwh;
	else if (kwh <=1000)
		cost = 0.20 * 200 + 0.35 * (kwh-200);
	else
		cost = 0.20 * 200 + 0.35 * 800 + 0.50 * (kwh - 1000);
	// Προσθήκη παγίου
	cost = cost + 15;

	// Εξαγωγή τελικής τιμής
	printf("FINAL COST : %lf\n", cost);
}
