#include <stdio.h>
#include <stdlib.h>

/*
	Όνομα: Μιχαήλ Κωνσταντίνος
	Επώνυμο: Δημόπουλος
	Τμήμα: Ε2
	Εργασία: ΔΜΣ Τρίτη (Τρίτη παράδοση)
	Ημερομηνία: 2/11
 */

main() {
	int age, weight, height;
	double meter_height, dms;

	printf("Age, weight, heightL");
	scanf("%d %d %d", &age, &weight, &height);

	if (age <= 18) {
		printf("You have to be above 18.");
	} else {
		meter_height = (double)height / 100;
		dms = weight /(meter_height * meter_height);
		printf("DMS: %lf\n", dms);
		if (dms < 18.5) 
			printf("Underweight\n"); // Αδύνατο άτομο
		else if (dms < 25)
			printf("Normal\n"); // Κανονικό άτομο
		else if (dms < 30)
			printf("Overweight\n"); // Βαρύ άτομο
		else
			printf("Obese\n"); //  Υπέρβαρο άτομο
	}
}
