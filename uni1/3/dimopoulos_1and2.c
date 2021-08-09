#include <stdlib.h>
#include <stdio.h>

/*
        Όνομα: Μιχαήλ Κωνσταντίνος
        Επώνυμο: Δημόπουλος
        Τμήμα: Ε2
        Εργασία: 1,2 (Τρίτη παράδοση)
        Ημερομηνία: 2/11
 */

main() {
	/* εισαγωγή δεδομένων */
	int a,b,c;
	printf("Give me three numbers: ");
	scanf("%d %d %d", &a, &b, &c);

	/* αλγόριθμος διάταξης */
	if (a>b) {
		if (b>c) {
			printf("The descending order is %d,%d,%d\n",a,b,c);
		} else {
			if (a > c){
				printf("The descending order is %d,%d,%d\n",a,c,b);
			} else {
				printf("The descending order is %d,%d,%d\n",c,a,b);
			}
		}
	} else {
		if (a>c) {
			printf("The descending order is %d,%d,%d\n",b,a,c);
		} else {
			if (b>c){
				printf("The descending order is %d,%d,%d\n",b,c,a);
			} else {
				printf("The descending order is %d,%d,%d\n",c,b,a);
			}
		}
	
	}

	/* αλγόριθμος διάταξης && */
	if (a>b && b>c) {
		printf("The && descending order is %d,%d,%d\n",a,b,c);
	} else if (a>b && a>c){
		printf("The && descending order is %d,%d,%d\n",a,c,b);
	} else if (a>b && !(a>c)){
		printf("The && descending order is %d,%d,%d\n",c,a,b);
	} else if (!(a>b) && a>c){
		printf("The && descending order is %d,%d,%d\n",b,a,c);
	} else if (!(a>b) && b>c){
		printf("The && descending order is %d,%d,%d\n",b,c,a);
	} else if (!(a>b) && !(b>c)){
		printf("The && descending order is %d,%d,%d\n",c,b,a);
	}
}
