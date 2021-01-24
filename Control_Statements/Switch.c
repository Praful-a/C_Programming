/*Switch:- The switch statement in c is an alternate of if-else-if ladder
statement which allows us to execute multiple operations for the different possible
values of a single variable called switch variable.	
Syntax:
switch(expression){
	case value1:
	//code to be executed;
	break; //optional
	case value2:
	//code to be executed;
	break; // optional
	.....

	default:
	// code to be executed if all cases are not matched;
}   
Rules:
1) The switch expression must be of an integer or character type.
2) The case value must be an integer or character contant.
3) The case value can be used only inside the switch statement.
4) The break statement in switch is not must. It is optional. If there is no break
statement found in the case, all the cases will be executed present after the matched
case. It is known as fall through the sate of C switch statement.
Examples: We are assuming that there are following variables.
int x,y,z;
char a,b;
float f;

Valid switch    	Invalid			Valid  			Invalid
					switch
===============================================================					    		 		
switch(x)			switch(f)		case 3;			Case 2.5;
switch(x>y)			switch(x+2.5)	case 'a';		case x;
switch(a+b-2)						case 1+2;		case x+2;
switch(func(x,y))					case 'x'>'y';	case 1,2,3;
 */
/*
#include<stdio.h>
int main()
{
	int number=0;
	printf("Enter a number: ");
	scanf("%d", &number);
	switch(number)
	{
		case 10:
		printf("number is equals to 10");
		break;
		case 50:
		printf("number is equals to 50");
		break;
		case 100:
		printf("number is equals to 100");
		break;
		default:
		printf("number is not equals to 10, 50 and 100");
	}
	return 0;
}		*/
/*
#include <stdio.h>
int main()
{
	int x = 10, y = 5;
	switch(x>y && x+y>0)
	{
		case 1:
		printf("hi");
		break;
		case 0:
		printf("bye");
		break;
		default:
		printf("Hello bye");
	}
	return 0;
}		*/
/*
#include <stdio.h>
int main()
{
	int number = 0;
	printf("Enter a number: ");
	scanf("%d", &number);

	switch(number)
	{
		case 10:
		printf("number is equals to 10\n");
		case 50:
		printf("number is equals to 50\n");
		case 100:
		printf("number is equals to 100\n");
		default:
		printf("number is not equals to 10, 50, 100");
	}
	return 0;
}		*/

// Nested switch case statement
/*
#include <stdio.h>
int main()
{
	int i = 10;
	int j = 20;
	switch(i) 
	{
		case 10:
			printf("The value of i evaluated in outer switch: %d\n", i);
		case 20:
			switch(j)
			{
				case 20:
				printf("The value of j evaluated in nested switch: %d\n", j);
			}
	}
	printf("Exact value of i is: %d \n", i);
	printf("Exact value of j is : %d\n", j);

	return 0;
}	*/

#include <stdio.h>
int main()
{
	int n1 = 10, n2 =11;
	// n1 > n2 (10>11) is false so using
	// logical operator '>', n1 > n2 produces 0
	// (0 means false, 1 means true) So, case 0
	// is executed as 10 > 11 is false. Here we
	// have used type cast to convert boolean to int,
	// to avoid warning.
	/*
	switch((int)(n1 > n2))
	{
		case 0:
			printf("%d is the largest\n", n2);
			break;
		default:
			printf("%d is the largest\n", n1);
	}	*/

	// n1 < n2 (10 < 11) is true so using logical
	// operator '<', n1 < n2 produces 1 (1 means true,
	// 0 means false) So, default is executed as we
	// don't have case 1 to be executed.

	switch((int)(n1 < n2))
	{
		case 1:
			printf("%d is the largest\n", n1);
		default:
			printf("%d is the largest\n", n2);
	}
	return 0;
}