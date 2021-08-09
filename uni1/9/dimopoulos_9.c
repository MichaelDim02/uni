#include <stdio.h>
#include <stdlib.h>


/*
	Όνομα: Μιχαήλ Κωνσταντίνος Δημόπουλος
	       Michael Constantine Dimopoulos
	ΑΜ: 2020038
	Εργασία: 1, 9η παράδοση	
	Ημερομηνία: 17-12	

*/

void fillPin2d(int n, int m, int p[][n]);
void showPin2d(int n, int m, int p[][n]);
void showPinDouble1d(int n, double p[]);
double * findMeanLine(int n, int m, int p[][n], double avgLine[]);
double * findMeanCol(int n, int m, int p[][n], double avgCol[]);
int findDsum(int n, int m, int p[][n]);

int main(){
	int n;
	int max = 100;
	do {
		printf("Give integer > 5: ");
		scanf("%d", &n);
	} while (n <= 5);

	int p[n][max];
	fillPin2d(n,n,p);
	printf("\n");
	showPin2d(n,n,p);
	printf("\n");

	double avgLine[n];
	printf("AvgLine: ");
	showPinDouble1d(n, findMeanLine(n,n,p,avgLine));

	double avgCol[n];
	printf("AvgLine: ");
	showPinDouble1d(n, findMeanCol(n,n,p,avgCol));

	
	printf("Diagonal sum: %d\n", findDsum(n,n,p));
	return 0;
}

/* Αυτή η συνάρτηση γράφει τους μέσους όρους
 * στηλών και γραμμών 
 */
void showPinDouble1d(int n, double p[]){
	int i;
	for (i=0;i<=n-1;i++){
		printf("%lf ",p[i]);	
	}
	printf("\n");
}

/* Συμπληρώνει τον 2Δ πίνακα */
void fillPin2d(int n, int m, int p[][n]){
	int i, j;
	for (i=0;i<=m-1;i++){
			for (j=0;j<=n-1;j++) {
			p[i][j]=rand()%(10+1-1+1);
		}
	}
}

/* Εμφανίζει πίνακα 2Δ */
void showPin2d(int n, int m, int p[][n]){
	int i,j;
	for (i=0;i<=m-1;i++){
		for(j=0;j<=n-1;j++) {
			printf("%3d ",p[i][j]);
		}
		printf("\n");
	}
}

/* Βρίσκει τον μέσο όρο των γραμμών */
double * findMeanLine(int n, int m, int p[][n], double avgLine[]){
	int i, j;
	double sum;
	for (i=0;i<=m-1;i++) {
		sum = 0;
		for (j=0;j<=n-1;j++) {
			sum = sum + (double) p[i][j];
		} 
		avgLine[i] = sum / n;
	}
	return avgLine;
}

/* To ίδιο και σε αυτήν */
double * findMeanCol(int n, int m, int p[][n], double avgCol[]){
	int i, j;
	double sum;
	for (j=0;j<=n-1;j++) {
		sum = 0;
		for (i=0;i<=m-1;i++) {
			sum = sum + (double) p[i][j];
		} 
		avgCol[j] = sum / (double)m;
	}
	return avgCol;
}

/*  αυτή βρίσκει το άθροισμα των διαγωνίων του matrix.
 *  με δυσκόλεψε λίγο να ξεχωρίσω τα στοιχεία της
 *  δεύερης διαγωνίου, αλλα βρήκα τον τύπο-πατέντα στο
 *  web.
 */
int findDsum(int n, int m, int p[][n]) {
	int i,j;
	int sum=0;
	int sum1D=0;
	for(i=0;i<=m-1;i++){
		for(j=0;j<=n-1;j++){
			if(i==j) {
				sum = sum + p[j][i];
				sum1D = sum1D + p[j][i];
			} else if (j== n-i -1 || i == n-j-1)
				sum = sum + p[j][i];	
		}
		//printf("\n");
	}
	printf("Sum1D: %d\n", sum1D);
	return sum;
}
