#include<stdio.h>

/*int main() {
	int C[3][2][2] = {{{2, 5}, {7, 9}},
					  {{3, 4}, {6, 1}},
					  {{0, 8}, {11, 13}}};
	printf("%d %d %d %d", C, *C, C[0], &C[0][0]);
	return 0;
}*/

int func(int (*A)[3]) { // Argument : 2 - D Array of integers
	
}

int main() {
	int C[3][2][2] = {{{2, 5}, {7, 9}},
					  {{3, 4}, {6, 1}},
					  {{0, 8}, {11, 13}}};
	int A[] = {1, 2};
	int B[2][3] = {{2, 4, 6}, {5, 7, 8}};  // B returns int (*)[3];
	func(A);
	return 0;
}