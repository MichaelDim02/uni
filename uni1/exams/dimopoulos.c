#include <stdio.h>
#include <stdlib.h>

struct Employee {
	int am;
	char full_name[50];
	int tmima;
	double sal;
	double bonus;
	int years;
	double tm;
} yp[13];

void
setTelikosMisthos(struct Employee SEmpl[])
{
	int i;
	for(i=0; i<14; i++) {
		yp[i].tm = yp[i].sal + (double)4 * (double)yp[i].years + yp[i].bonus;
		printf("%lf\n", yp[i].tm);
	}
}

void
esorting(struct Employee SEmpl[]) {
	int temp;
	int i, j;
	for (i =0; i < 13 -1; i++) {
		for(j=0; j < 13 - i - 1; j++) {
			if (SEmpl[j].am > SEmpl[j + 1].am){
				temp = SEmpl[j].am;
				SEmpl[j].am = SEmpl[j + 1].am;
				SEmpl[j + 1].am = temp;
			}
		}
	}
}

int
main()
{
	int i;
	int am;
	struct Employee SEmpl[13];
	for(i=0; i<14; i++) {
		printf("Dwse AM ypal %d\n",i);
		scanf("%d",&yp[i].am);	

		printf("Dwse onoma ypal %d\n",i);
		scanf("%s",&yp[i].full_name);	
		do {
			printf("Dwse tmima ypal %d\n",i);
			scanf("%d",&yp[i].tmima);	
		} while (yp[i].tmima > 4 || yp[i].tmima < 1);
		printf("Dwse salary ypal %d\n",i);
		scanf("%lf",&yp[i].sal);	
		printf("Dwse bonus ypal %d\n",i);
		scanf("%lf",&yp[i].bonus);	
		printf("Dwse xronia erg. ypal %d\n",i);
		scanf("%d",&yp[i].years);	

		SEmpl[i] = yp[i];
	}
	
	setTelikosMisthos(SEmpl);

	int choice;
	do {
		int input_am;
		printf("\n\nDwse enan am: ");
		scanf("%d", &input_am);

		int index;
		int found = 0;
		i = 0;
		while(i<14 && found == 0) {
			if (input_am == yp[i].am) {
				index = i;
				found = 1;	
			}
			i++;
		}
		if (found == 1) {
			printf("O ergazomenos vrethike stin thesi %d\n", index);
		} else {
			printf("O ergazomenos den vrethike\n");
		}

		do {
			printf("\nThelete na epanalavete tin anazitisi?");
			scanf("%d", &choice);
		} while (choice != 1 && choice != 0);
	} while (choice == 1);

	esorting(SEmpl);
	for (i=0; i<14; i++){
		printf("AM:%d\nName:%s\nTM:%lf\n", yp[i].am, yp[i].full_name, yp[i].tm);
	}
	return 0;
}
