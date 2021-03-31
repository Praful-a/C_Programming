/* Without Using function  */
/*
#include<stdio.h>
int main()
{
	int a=0,b=1,c;
	int n, i;
	printf("Enter the number to print fibonacci series: ");
	scanf("%d", &n);
	printf("%d %d", a, b);
	for(i=2;i<=n;i++)
	{
		c = a+b;
		printf(" %d ", c);
		a = b;
		b = c;
	}
	return 0;
}		*/

/* Print fibonacci by using function */
#include<stdio.h>
void fib(int);
void fib(int size)
{
	int a=0, b= 1, c;
	int i;
	printf("%d %d ", a, b);
	for(i=2;i<size;i++)
	{
		c = a+b;
		printf("%d ", c);
		a = b;
		b = c;
	}
}

int main()
{
	int n;
	printf("Enter the number where till you want to print fibonacci series?");
	scanf("%d", &n);
	fib(n);
	return 0;
}
