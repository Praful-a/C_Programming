/*The if-else statement in C is used to perform the operations based on some specific condition. The operations specified in 
if block are executed if and only if the given condition is true.
Syntax:
if(expression)
	//code to be executed
*/

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
}