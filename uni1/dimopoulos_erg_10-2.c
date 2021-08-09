#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 *  ΌΝΟΜΑ: Μιχάλης Κωνσταντίνος Δημόπουλος 
 *  ΑΜ: 2020038
 *  ΤΜΗΜΑ: E2
 *  ΑΣΚΗΣΗ: 10.2
*/

/* ΞΕΧΑΣΑ ΝΑ ΤΟ ΑΝΕΒΑΣΩ  */

/*int returnThesiMaxTM(struct ypallhlos yp[], int n);
void setTMAll(struct ypallhlos yp[], int n);*/

struct ypallhlos
{
	char onoma[50];
	int am;
	int ptyxio;
	int overtime;
	double wage;
	double lwage;
} yp[50];
	
/* Γέμισμα πεδίων */
struct
ypallhlos gemismaPedion(char name[], int am, int ptyxio, int overtime, double wage)
{
	struct ypallhlos yp;
	strcpy(yp.onoma, name);
	yp.am = am;
	yp.ptyxio = ptyxio;
	yp.overtime = overtime;
	yp.wage = wage;
	return yp;
}

/* Ανταλλαγή Υπ1 και Υπ2 */
void
swapYp1Ypi2(struct ypallhlos yp[], int i, int j)
{
	struct ypallhlos temp = yp[i];
	yp[i] = yp[j];
	yp[j] = temp;
}

/* Επιστρέφει τελικό μισθό σύμφωνα με τα δεδομένα */
double
returnTM(struct ypallhlos yp)
{
	switch( yp.ptyxio )	
	{
		case 1:
			return (yp.wage + yp.overtime * 20 + 300);
			break;
		case 2:
			return (yp.wage + yp.overtime * 20 + 150);
			break; 
		case 3:
			return (yp.wage + yp.overtime * 20 + 100);
			break; 
		case 4:
			return (yp.wage + yp.overtime * 20 + 50);
			break;
		default:
			return (yp.wage +  yp.overtime * 20);
			break;		
	}
}

/* Επιστρέφει θέση τελικού μισθού */
int
returnThesiMaxTM(struct ypallhlos yp[], int n)
{
	double maxlwage = yp[0].lwage;
	int i, thesilwage=0;
	for(i = 1; i<=n-1; i++) {
		if(yp[i].lwage > maxlwage) {
			maxlwage = yp[i].lwage;
			thesilwage = i;
		}
	}
    	return thesilwage;
}

/* */
void
setTMAll(struct ypallhlos yp[], int n)
{
	int i;
	for(i = 0; i<=n-1; i++) {
		yp[i].lwage = returnTM(yp[i]);
	}	
}	

/* Εμφάνιση πεδίων */
void
emfanishPedion(struct ypallhlos yp)
{
	printf("name : %s\n", yp.onoma);
	printf("am = %d\n", yp.am);
	printf("degree = %d\n", yp.ptyxio);
	printf("ovetime = %d\n", yp.overtime);
	printf("wage = %lf\n", yp.wage);
	printf("TM = %lf\n", yp.lwage);
}

int
main()
{
	int n;
	do {
		printf("Give n<=50: ");
		scanf("%d", &n) ;
	} while (n > 50);
	
	char onoma[50];
	int am, ptyxio, overtime;
	double wage, lwage;
	
	/* Εισαγωγή δεδομένων */
	int i;
	for(i = 0; i <= n-1; i++) {
		printf("Dose onoma yp[%d]: ", i);
		scanf("%s", &onoma );
		printf("Dose AM yp[%d]: ", i);
		scanf("%d", &am );
		printf("Dose ptyxio yp[%d]: ", i);
		scanf("%d", &ptyxio );
		printf("Dose yperoria yp[%d]: ", i);
		scanf("%d", &overtime );
		printf("Dose wage yp[%d]: ", i);
		scanf("%lf", &wage );
		yp[i] = gemismaPedion(onoma, am, ptyxio, overtime, wage);
	}
	
	setTMAll(yp, n);	
	
	/* εμφάνιση */
	for(i=0; i <= n-1; i++) {
		printf("Ypallhlos yp[%d]:\n", i);
		emfanishPedion(yp[i]);
	}
	
	/* ανταλλαγή */
	int index = rand() %( n-2);
	swapYp1Ypi2(yp, index, index++);

	/* εμφάνιση μετά από ανταλλαγή */
	printf("\nAfter swap\n");
	for(i=0 ; i<= n - 1 ; i++) {
		printf("Ypallhlos yp[%d]:\n",i);
		emfanishPedion(yp[i]);
	}
	
	int thesiTM = returnThesiMaxTM(yp, n);
	
	printf("Pedia yp[%d] me max TM:\n", thesiTM);
	emfanishPedion(yp[thesiTM]);
}
