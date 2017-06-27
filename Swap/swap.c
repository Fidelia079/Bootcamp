#include <stdio.h>

void swap(int *one, int *two) {
	int temp = *one;
	*one = *two;
	*two = temp;
//	printf("Added a=%d, b=%d\n", one, two);
}

int main() {
	int a = 5;
	int b = 10;

	printf("a=%d, b=%d\n", a, b);

	swap(&a, &b);

	printf("a=%d, b=%d\n", a, b);

	return 0;
}
