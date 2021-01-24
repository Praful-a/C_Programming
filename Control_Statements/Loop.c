/*Loops:- The looping simplifies the complex program into the easy ones. It enables
us to alter the flow of the program so that instead of writing the same code again and again,
we can repeat the same code for a finite number of time.

Advantages of loops in C
1) It provides code reusability.
2) Using loops, we don't need to write the same code again and again.
3) Using loops, we can traverse over the elements of data structure(array or linked list).
*/
/* Types of C loops
1> do while
2> while
3> for

do-while loop in C:-

The do-while loop continues until a given condition satisfies. It is also
called post tested loop. It is used when it is necessary to execute the loop at
once(mostly menu driven programs). 

Syntax:-
do {
	// code to be executed
}while(condition);

While :-

The while loop in c is to be used in the scenario where we don't
know the number of iteratins in advance. The block of statements is 
executed in the while loop until the condition specified in the while
loop is satisfied. It is also called a pre-tested loop.

Syntax:-
while(condition){
	//code to be executed
}

for loop :-

The for loop is used in the case where we need to execute some
part of the code until the given condition is satisfied. The for loop
is also called as a per-tested loop.
It is better to use for loop if the number of iteration is known in advance.

Syntax:-
for(initialization;condition;incr/decr){
	//code to be executed
}
*/

/* do while loop */
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char c;
	int choice, dummy;
	do {
		printf("\n1. Print Hello\n2. Print Alex\n3. Exit\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
			printf("Hello");
			break;
			case 2:
			printf("Alex");
			break;
			case 3:
			exit(0);
			break;
			default:
			printf("\nplease enter valid choice");
		}
		printf("\ndo you want to enter more?");
		scanf("%d", &dummy);
		scanf("%c", &c);
	}while(c=='y');
	return 0;
}		*/
/*
#include <stdio.h>
int main()
{
	int i=1, n=0;
	printf("Enter the number what table you want?");
	scanf("%d", &n);
	do
	{
		printf("%d * %d = %d\n", n, i, (n*i));
		i++;
	} while(i <= 10);
	return 0;
}		*/

/* Infinite do while loop
The do-while loop will run infinite times if we pass any 
non-zero value as the conditional expression.
*/
/*
#include <stdio.h>
int main()
{
	int i=1;
	do{
		printf("%d", i);
		i++;
	}while(0);
	return 0;
}	*/

/*  while */
/*
#include<stdio.h>
int main()
{
	int i=1;
	while(i<=10)
	{
		printf("%d \n", i);
		i++;
	}
	return 0;
}	*/

// printf the table of the given number 
/*
#include<stdio.h>
int main()
{
	int i=1, num=0;
	printf("Enter a number: ");
	scanf("%d", &num);
	while(i<=10)
	{
		printf("%d * %d = %d\n", num, i, (num*i));
		i++;
	}
	return 0;
}	*/
/*
#include<stdio.h>
int main()
{
	int j = 1;
	while(j+=2,j<=10)
	{
		printf("%d ", j);
	}
	printf("%d ", j);
	return 0;
}	*/
/*
/* Infinite while loop  */
/*
#include<stdio.h>
int main()
{
	int x = 10, y=2;
	while(x+y-1)
	{
		printf("%d %d", x--,y--);
	}
	return 0;
}	*/

#include<stdio.h>
int main()
{
	while(0)
	{
		printf("hello");
	}
}

	



