/*The if-else statement in C is used to perform the operations based on some specific condition. The operations specified in 
if block are executed if and only if the given condition is true.
Syntax:
if(expression)
	//code to be executed
*/
/* Find the number is even or not  */
/*
#include<stdio.h>
int main()
{
	int number=0;
	printf("Enter a number: ");
	scanf("%d", &number);
	if(number%2==0)
	{
		printf("%d is even number", number);
	}
	return 0;
}			*/

/* Program to find the largest number of the three.  */
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	if(a>b && a>c)
	{
		printf("%d is largest", a);
	}
	if(b>a && b>c)
	{
		printf("%d is largest", b);
	}
	if (c>a && c>b)
	{
		printf("%d is largest", c);
	}
	if (a==b && a==c)
	{
		printf("All are equal");
	}
}
