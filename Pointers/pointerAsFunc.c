// Pointers as function returns

#include<stdio.h>
#include<stdlib.h>
void PrintHelloWorld() {
	printf("Hello World\n");
}

int *Add(int *a, int *b) {
	// a and b are pointer to integers local to Add
	// printf("Address of a in Add = %d\n", &a);
	// printf("Value in a of Add (address of a main) = %d\n", a);
	// printf("Value at address stored in a of Add = %d\n", *a);
	int *c = (int*) malloc(sizeof(int));
	*c = (*a) + (*b);
	return c;
}

int main() {
	int a = 2, b = 4;
	// call by value
	// int c = Add(a, b);  // Value in a of main is copied to a of Add.
						// Value in b of main is copied to b of Add.
	// call by reference
	int* ptr = Add(&a, &b);
	PrintHelloWorld();
	printf("Sum = %d\n", *ptr);
	return 0;
}