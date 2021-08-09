#include <stdio.h>
#include <stdlib.h>

/*
        Όνομα: Μιχαήλ Κωνσταντίνος
        Επώνυμο: Δημόπουλος
        Τμήμα: Ε2
        Εργασία: 3, (5η παράδοση)
        Ημερομηνία: 19/11
*/

main() {
	int xoritikotita;
	int epitirites;
	int s_epitiritwn = 0;
	int synolo = 0;
	int aithouses = 0;

	do {
		printf("Insert an integer number: ");
		scanf("%d",&xoritikotita);

		synolo = synolo + xoritikotita;

		if (xoritikotita < 16)
			epitirites = 1;
		else if (xoritikotita < 24)
			epitirites = 2;
		else
			epitirites = 3;

		printf("Apaitountai %d epitirites\n", epitirites);

		aithouses++;
		s_epitiritwn = s_epitiritwn + epitirites;

	} while (synolo <= 100);	

	printf("Synolo aithouswn: %d\nSynolo Epitiritwn: %d\nSynolo thesewn: %d\n", aithouses, s_epitiritwn, synolo);
}
