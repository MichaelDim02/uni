#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
        Όνομα: Μιχαήλ Κωνσταντίνος
        Επώνυμο: Δημόπουλος
        Τμήμα: Ε2
        Εργασία: 2, (4η παράδοση)
        Ημερομηνία: 18/11
*/

main() {
	int num;
	do {
		printf("Give a number between 2 and 10: ");
		scanf("%d", &num);
	} while (num < 2 || num > 10);

	int counter = 1;
	double power = -1;

	do {
		power = (double)pow(num,counter);
		if (power <= 100) 
			printf("Dynamh = %d^%d = %lf\n",num,counter,power);
		counter++;
		
	} while (power <= 100);
}
