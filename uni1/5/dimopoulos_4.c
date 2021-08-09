#include <stdio.h>
#include <stdlib.h>

/*
        Όνομα: Μιχαήλ Κωνσταντίνος
        Επώνυμο: Δημόπουλος
        Τμήμα: Ε2
        Εργασία: 4, (5η παράδοση)
        Ημερομηνία: 19/11
*/

main() {
	int a,b;
	printf("Insert two numbers (a and b): ");
	scanf("%d %d",&a,&b);

	printf("\na*b=%d\n\n",(a*b));

	int p=0;
	while (b>0) {
		if(b%2 !=0)
			p = p + a;
		printf("a=%d, b=%d, p=%d\n", a,b,p);
		a = a*2;
		b = b/2;
	}
	printf("\np = %d\n",p);
}
