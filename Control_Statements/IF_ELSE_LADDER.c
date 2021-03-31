/* If else-if ladder statement: In this statement if the condition ture then execute the statement defined in if block
and if condition flase then go to next else-if and check if condition true then execute the statement and at last if all 
condition are false then execute the else statement.
Syntax:
if(condition1){
// Code to be executed if condition1 is true
} else if(condition2){
// Code to be executed if condition2 is true
}
else if (condition3){
// code to be executed if condition3 is true
}
....
else{
// code to be executed if all the conditions are false
}
*/
/* lets check how to write code of if else ladder  */
/*
#include <stdio.h>
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d", &num);
	if(num == 10){
		printf("number is equal to 10.");
	}
	else if(num==50)
	{
		printf("number is equal to 50");
	}
	else if(num==100)
	{
		printf("number is equal to 100");
	}
	else{
		printf("number is not equal to 10, 50, 100");
	}
	return 0;
}		*/

/* Program to calculate the grade of the student according to the specified marks. */
/*
#include <stdio.h>
int main()
{
	int marks;
	printf("Enter your marks?");
	scanf("%d", &marks);
	if(marks > 85 && marks <= 100)
	{
		printf("Congrats! you scored grade A...");
	}
	else if(marks > 60 && marks <= 85)
	{
		printf("You scored grade B + ....");
	}
	else if(marks > 40 && marks <= 60)
	{
		printf("You scored grade B.....");
	}
	else if(marks > 30 && marks <= 40)
	{
		printf("You scored grade C....");
	}
	else 
	{
		printf("Sorry you are fail...");
	}
	return 0;
}		*/

/* Program to check greatest number between three numbers */
#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	if(a>b)
	{
		if(a>c)
		{
			printf("The highest no. is: %d", a);
		}
		else {
			printf("The highest no. is: %d", c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("The highest no. is: %d", b);
		}
		else
		{
			printf("The highest no. is: %d", c);
		}
	}
	return 0;
}
