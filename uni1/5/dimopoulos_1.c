#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
        Όνομα: Μιχαήλ Κωνσταντίνος
        Επώνυμο: Δημόπουλος
        Τμήμα: Ε2
        Εργασία: 1, (4η παράδοση)
        Ημερομηνία: 18/11
*/

main() {
	int num;
	printf("Give a number between 2 and 10: ");
	scanf("%d", &num);

	while (num < 2 || num > 10){
		printf("Give a number between 2 and 10: ");
		scanf("%d", &num);
	} 

	int counter = 1;
	double power = -1;

	while (power <= 100) {
		power = (double)pow(num,counter);
		printf("Dynamh = %d^%d = %lf\n",num,counter,power);
		counter++;
	}
}
