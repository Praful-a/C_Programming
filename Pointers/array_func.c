#include<stdio.h>
/*int SumOfElements(int A[], int size) {
	int i, sum = 0;
	for (i = 0; i < size; i++) {
		sum += A[i];
	}
	return sum;
}

int main() {
	int A[] = {1, 2, 3, 4, 5};
	int size = sizeof(A) / sizeof(A[0]);
	int total = SumOfElements(A, size);
	printf("Sum of elements = %d\n", total);
	return 0;
}*/

/*
int SumOfElements(int *A, int size) {
	int i, sum = 0;
	printf("SOE - Size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
	for (i = 0; i < size; i++) {
		sum += A[i];
	}
	return sum;
}

int main() {
	int A[] = {1, 2, 3, 4, 5};
	int size = sizeof(A) / sizeof(A[0]);
	int total = SumOfElements(A, size);
	printf("Sum of elements = %d\n", total);
	printf("SOE - Size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
	return 0;
}*/



void Double(int *A, int size) {
	int i, sum = 0;
	for (i = 0; i < size; i++) {
		A[i] = 2*A[i];
	}
}

int main() {
	int A[] = {1, 2, 3, 4, 5};
	int size = sizeof(A) / sizeof(A[0]);
	int i;
	Double(A, size);
	for(i = 0; i< size; i++) {
		printf("%d ", A[i]);
	}
	return 0;
}