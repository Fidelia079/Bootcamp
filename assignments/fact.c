#include <stdio.h>

long factorial(long val);

int main() {
	int i;
	printf("\tValue\tFactorial\n");
	for (i = 0; i <= 20; i++) {
		printf("\t%i\t%li\n", i, factorial(i));
	}
	return 0;
}

// create factorial function here:
