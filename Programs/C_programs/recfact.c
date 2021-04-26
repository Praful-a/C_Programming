#include<stdio.h>
long double fact(int);

long double fact(int n) {
	if (n == 0 || n == 1) 
	{
		return 1;
	}
	else 
	{
		return n * fact(n - 1);
	}
}

int main() {
	int n;
	printf("Enter the number to find factorial: ");
	scanf("%d", &n);
	printf("%Lf" , fact(n));
	return 0;
}