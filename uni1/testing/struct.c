#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct users{
	char first_name[24];
	char last_name[24];
	int age;
	double weight;
};


int main() {
	struct users u1;
	struct users u2;

	strcpy(u1.first_name, "Michael");
	strcpy(u1.last_name, "Dimopoulos");
	u1.age = 18;
	u1.weight = 203.2;

	puts("First name:");
	puts(u1.first_name);

	return 0;
}
