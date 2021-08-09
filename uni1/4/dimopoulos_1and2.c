#include <stdlib.h>
#include <stdio.h>

/*
        Όνομα: Μιχαήλ Κωνσταντίνος
        Επώνυμο: Δημόπουλος
        Τμήμα: Ε2
        Εργασία: 1 & 2 (Τέταρτη παράδοση)
        Ημερομηνία: 11/11
*/

main() {
	/* Άσκηση 1 */
	int day;
	printf("Give me a numer from 1 to 7: ");
	scanf("%d", &day);
	if (day == 1)
		printf("The first day of the week is Monday\n");
	else if (day == 2)
		printf("The second day of the week is Tuesday\n");
	else if (day == 3)
		printf("The third day of the week is Wednesday\n");
	else if (day == 4)
		printf("The fourth day of the week is Thursday\n");
	else if (day == 5)
		printf("The fifth day of the week is Friday\n");
	else if (day == 6)
		printf("The sixth day of the week is Saturday\n");
	else if (day == 7)
		printf("The seventh day of the week is Sunday\n");
	else
		printf("Wrong number\n");

	/* Άσκηση 2 */
	int x;
	printf("Dose enan akeraio MH ARNHTIKO arithmo gia to x : ");
	scanf("%d", &x);
	switch(x) {
		case 0: printf("x = 0\n");
			break;
		case 1:
		case 3:
		case 5:	printf("x = perittos\n");
			break;
		case 2:
		case 4:	printf("x = artios\n");
			break;
		default:
			printf("x > 5\n");
	}
}

