#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
        Όνομα: Μιχαήλ Κωνσταντίνος
        Επώνυμο: Δημόπουλος
	AM: 2020038
        Τμήμα: Ε2
        Εργασία: 10

*/

#define Y1_NAME "Ioannis"
#define Y1_AM 123456
#define Y1_DEGREE 1
#define Y1_OH 3
#define Y1_SAL 900

int PASSED = 0;
int tm1;
int tm2;

struct ypallhlos {
	char name[50];
	int am;	
	int degree;
	int overtime_hours;
	int salary;
	
};

/* ανταλλάσει τα στοιχεία των δύο υπαλλήλων */
struct ypallhlos
swapYp1Yp2(struct ypallhlos *yp1, struct ypallhlos *yp2)
{
	char temp_name[50]; 
	strcpy(temp_name, yp1->name);
	strcpy(yp1->name, yp2->name);
	strcpy(yp2->name, temp_name);

	int temp0 = yp1->am;
	yp1->am = yp2->am;
	yp2->am = temp0;

	temp0 = yp1->degree;
	yp1->degree = yp2->degree;
	yp2->degree = temp0;

	temp0 = yp1->overtime_hours;
	yp1->overtime_hours = yp2->overtime_hours;
	yp2->overtime_hours = temp0;

	temp0 = yp1->salary;
	yp1->salary = yp2->salary;
	yp2->salary = temp0;

	return *yp1, *yp2;
}

/* βρίσκει τον μέγιστο τελικό μισθό */
void
findMaxTM(struct ypallhlos yp1, struct ypallhlos yp2)
{
	if (tm1 > tm2)
		printf("\n%s has a greater salary.\n",yp1.name);
	else if (tm1 < tm2)
		printf("\n%s has a greater salary.\n",yp2.name);
	else
		printf("\nThe salaries are equal.\n");
}

/* βρίσκει και επιστρέφει ΤΜ */
int
returnTMisthos(struct ypallhlos yp)
{
	int tm = yp.salary + 20 * yp.overtime_hours;

	switch(yp.degree) {
		case 1:
			return (tm+300);
		case 2:
			return (tm+150);
		case 3:
			return (tm+100);
		case 4:
			return (tm+50);
		default:
			return tm;
	};
}

/* βρίσκει και γράφει τελικό μισθό */
void
findTMisthos(struct ypallhlos yp)
{
	int tm = yp.salary + 20 * yp.overtime_hours;
	switch(yp.degree) {
		case 1:
			printf("Total Salary: %d\n",(tm+300));
			break;	
		case 2:
			printf("Total Salary: %d\n",(tm+150));
			break;
		case 3:
			printf("Total Salary: %d\n",(tm+100));
			break;
		case 4:
			printf("Total Salary: %d\n",(tm+50));
			break;
		default:
			printf("Total Salary: %d\n",tm);
	};
	tm1 = tm;
}

/* εμϕάνιση πεδίων */
void
emfanishPedion(struct ypallhlos yp)
{
	printf("NAME: %s\n", yp.name);
	printf("AM: %d\n", yp.am);
	printf("DEGREE: %d\n", yp.degree);
	printf("OVERTIME: %d\n", yp.overtime_hours);
	printf("SALARY: %d\n\n", yp.salary);

	/*
	εδώ είναι το μεγαλό σημείο "κλεψιάς" στο πρόγραμμα.
	Το πρόβλημα μου ήταν πως και οι δύο οι Υπαλ. περνούσαν
	απο την συνάρτηση εμφάνισης η οποία τους εστελνε και
	τους δύο στην ίδια συνάρτηση υπολόγισης Τελικού Μισθού.
	Δεν ήξερα πως να διαφοροποιήσω τον πρώτο υπάλληλο από
	τον δεύτερο. Τελικά απλά όρισα μια global μεταβλητή 
	την PASSED που κάνει το παρακάτω. Ξέρω πως δεν είναι
	και η καλύτερη λύση αλλά τον αλγόριθμο τον λύνει..	
	 */

	if (PASSED == 0) {
		findTMisthos(yp);
		PASSED = 1;
	} else {
		tm2 = returnTMisthos(yp);
		printf("Total Salary: %d\n", returnTMisthos(yp));
	}
}

/* Συμπληρώνει τα στοιχεία του πρώτου υπαλλήλου */
struct ypallhlos
gemismaPedion(struct ypallhlos yp, char* name, int am, int d, int oh, int sal)
{
	strcpy(yp.name, name); /* Δεν ξέρω αν μετράει, αυτά ξέρω αυτά κάνω :) */ 
	yp.am = am;
	yp.degree = d;
	yp.overtime_hours = oh;
	yp.salary = sal;

	emfanishPedion(yp);

	return yp;
}

int
main ()
{
	/* Συμπληρώνει τα στοιχεία του πρώτου υπαλλήλου */
	struct ypallhlos yp1,yp2;
	yp1 = gemismaPedion(yp1, Y1_NAME,Y1_AM,Y1_DEGREE,Y1_OH,Y1_SAL);
	
	/* Και του δεύτερου */
	printf("NAME: %s\n", yp1.name);

	char name[50];
	printf("\nYP2\nNAME: ");
	scanf("%s",&name);

	int am;
	printf("AM: ");
	scanf("%d",&am);

	int degree;
	printf("DEGREE: ");
	scanf("%d", &degree);

	int oh;
	printf("OVERTIME: ");
	scanf("%d", &oh);

	int salary;
	printf("SALARY: ");
	scanf("%d", &salary);
	printf("\n");

	yp2 = gemismaPedion(yp2, name, am, degree, oh, salary);

	/* βρίσκει τον μέγιστο τελικό μισθό */
	findMaxTM(yp1,yp2);

	/* ανταλάσσει τα στοιχεία των δύο υπαλλήλων */
	char temp_name[50]; 
	strcpy(temp_name, yp1.name);
	strcpy(yp1.name, yp2.name);
	strcpy(yp2.name, temp_name);

	int temp0 = yp1.am;
	yp1.am = yp2.am;
	yp2.am = temp0;

	temp0 = yp1.degree;
	yp1.degree = yp2.degree;
	yp2.degree = temp0;

	temp0 = yp1.overtime_hours;
	yp1.overtime_hours = yp2.overtime_hours;
	yp2.overtime_hours = temp0;

	temp0 = yp1.salary;
	yp1.salary = yp2.salary;
	yp2.salary = temp0;
	
	/* ανταλλάσει τα στοιχεία των δύο υπαλλήλων με συνάρτηση */
	swapYp1Yp2(&yp1, &yp2);
	return 0;
}
