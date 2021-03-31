/* If-else statement
In if-else we check the condition if condition is true then it will execute the first statement
and not then it will execute the else statement.
Syntax:
if(expression){
statement1
}
else{
statement2
}
*/

/* program to check whether a number is even of odd  */
/*
#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number: ");
	scanf("%d", &a);
	if(a%2==0)
	{
		printf("%d is an even number.", a);
	}
	else
	{
		printf("%d is odd number", a);
	}
	return 0;
}			*/

#include <stdio.h>
int main()
{
	int age;
	printf("Enter your age?");
	scanf("%d", &age);
	if(age>=18)
	{
		printf("You are eligible to vote...");
	}
	else
	{
		printf("Sorry... you can't vote'");
	}
	return 0;
}
