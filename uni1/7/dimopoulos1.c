#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void fillpin(int n, int pi[]);
void showpin(int n, int pi[]);
int findThesiMax(int n, int pi[]);
int findThesiMin(int n, int pi[]);
void swapPin(int i, int j, int p[], int n);
int countAvg(int n, int pi[]);
void searchPThesiNum(int num, int n, int pi[]);
void bubbleDesc(int n, int pi[]);
int binarysearchPThesiNum(int arxi, int peras, int pi[], int num);

/*
        Όνομα: Μιχαήλ Κωνσταντίνος
        Επώνυμο: Δημόπουλος
        Τμήμα: Ε2
        Εργασία: 1, (7/8η παράδοση)
*/

int main () {
	int n;
	do {
		printf("Give an integer > 5: ");
		scanf("%d", &n);
	} while (n < 6);

	// fill array 
	int pi[n];
	fillpin(n,pi);

	// display array
	printf("\nPinakas:\n");
	showpin(n,pi);

	// Min & max
	int max_index = findThesiMax(n,pi);
	printf("\nMax index: %d\nMax value: %d", max_index,pi[max_index]);

	int min_index = findThesiMin(n,pi);
	printf("\n\nMin index: %d\nMin value: %d\n", min_index,pi[min_index]);

	// above average
	printf("\n%d numbers are above average.\n\nGive an integer: ", countAvg(n, pi));

	// normal search
	int num;
	scanf("%d", &num);

	searchPThesiNum(num,num,pi);

	// Binary search
	bubbleDesc(n,pi);
	printf("\nBinary-search\nGive an integer: ");
	scanf("%d", &num);

	int arxi = 0;
	int peras = n-1;
	int bin_result = binarysearchPThesiNum(arxi, peras, pi, num);

	if (bin_result == -1) {
		printf("Not found\n");
	} else {
		printf("Found in position %d\n",bin_result);
	}

	// random index swap
	printf("Random index swap:\n");
	int index = rand()%(n-1);
	int index_plus_1 = index + 1;
	swapPin(index, index_plus_1, pi, n);
	return 0;
}

// gemsima listas
void fillpin(int n, int pi[]) {
	for (int i = 0; i < n; i++) {
		pi[i] = (rand() % 10)+1;	
	}
}

// emfanisi listas
void showpin(int n, int pi[]) {
	for (int i = 0; i < n; i++) {
		printf("%d", pi[i]);
	}
	printf("\n");
}

// evresi megistou
int findThesiMax(int n, int pi[]){
	int max = pi[0];
	int max_index = 0;

	for(int i=0; i < n; i++) {
		if (pi[i] >= max) {
			max = pi[i];
			max_index = i;
		}
	}
	return max_index;
}

// evresi elaxistou
int findThesiMin(int n, int pi[]){
	int min = pi[0];
	int min_index = 0;

	for(int i=0; i > n; i++) {
		if (pi[i] >= min) {
			min = pi[i];
			min_index = i;
		}
	}
	return min_index;
}


// swap
void swapPin(int i, int j, int pi[], int n){
	int temp;
	temp = pi[i];
	pi[i] = pi[j];
	pi[j] = temp;
	showpin(n, pi);
}


// average
int countAvg(int n, int pi[]) {
	int sum = 0;
	for (int i=0; i<n; i++) {
		sum = sum + pi[i];
	} 

	double avg = (double)sum / (double)n;

	int count_above_avg = 0;
	for (int i=0; i<n; i++){
		if((double)pi[i] > avg) {
			count_above_avg = count_above_avg + 1;
		}
	}
	return count_above_avg;
} 


// basic search
void searchPThesiNum(int num, int n, int pi[]){
	int num_index;
	bool found = false;
	int i = 0;
	while (i<=n && found == false) {
		if (num == pi[i]) {
			found = true;
			num_index = i;
		}	
		i++;
	}
	if (found == true)
		printf("Found in position %d\n", num_index);
	else
		printf("Not found\n");
} 

// Bubblesort
void bubbleDesc(int n, int pi[]) {
	int i=2;
	int temp;

	for(i=n-2;i>=0;i--){
		for(int j = 0; j <= i; j++){	
			if (pi[j] < pi[j+1]){
				temp = pi[j];
				pi[j] = pi[j+1];
				pi[j+1] = temp;
			}
		}		
	}

	printf("\nSorted array:\n");
	showpin(n, pi);
}

// Binary search
int binarysearchPThesiNum(int arxi, int peras, int pi[], int num){
	while (arxi <= peras) {
		int mid = (arxi+peras)/2; 
		if (num==pi[mid])
			return mid;
		else if (num < pi[mid])
			peras = mid -1;
		else
			arxi = mid+1;
	}
	return -1;
}
