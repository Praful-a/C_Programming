/* Infinite Loop in C
What is infinite loop?
An inifinite loop is looping construct that does not terminate the loop and executes
the loop forever. It is also called an indefinite loop or an endless loop. It either
produces a continuous output or no output.

When to use an infinite loop

An infinite loop is useful for those applications that accept the user input and
generate the output continously until the user exits from the application manually.
In the following situations, this type of loop can be used:
	-> All operating systems run in an inifinite loop as it does not exit after performing
	some task. It comes out of an infinite loop only when the user manually shuts down the system.
	->All the servers run in an infinite loop as the server responds to all the client requests. 
	It comes out of an indefinite loop only when the administrator shuts down the server manually.
	->All the games also run in an infinite loop. The game will accept the user requests until 
	the user exits from the game.

We can create an infinite loop through various loop structures. The following are the loop structures
through which we will define the infinite loop;

	-> for loop
	-> while loop
	-> do-while loop
	-> go to statement
	-> C macros
*/

/* for infinite loop */
/*
#include<stdio.h>
int main()
{
	for(;;)
	{
		printf("Hello World!");
	}
	return 0;
}		*/


/* while loop infinite Loop   */
/* 
#include <stdio.h>
int main()
{
	int i=0;
	while(1)
	{
		i++;
		printf("i is: %d", i);
	}
	return 0;
}

/* do while loop  */
/*
do 
{
	//body of the loop
}while(1);

/* goto statement  */
/*
infinite_loop;
//body statements;
goto infinite_loop;
}  */

/* Macros  */
/*
#include<stdio.h>
#define infinite for(;;)
int main()
{
	infinite
	{
		printf("hello");
	}
	return 0;
}	*/

/* using break statement we can come out from infinite loop 	*/

/*#include<stdio.h>
int main()
{
	char ch;
	while(1)
	{
		ch=getchar();
		if(ch=='n')
		{
			break;
		}
		printf("Hello");
	}
	return 0;
}		*/

/* We should examine the semicolons carefully. Sometimes we put the semicolon at the wrong place,
 which leads to the infinite loop. */
/*
#include<stdio.h>
int main()
{
	int i=1;
	while(i<=10);
	{
		printf("%d", i);
		i++;
	}
	return 0;
}	*/

/* In the above code, we put the semicolon after the condition
of the while loop which leads to the infinite loop. Due to this
semicolon, the internal body of the while loop will not execute. */

/* We should check the logical conditions carefully. Sometimes by mistake
we place the assignment operator (=) instead of a relational operator (= =). */
/*
#include<stdio.h>
int main()
{
	char ch='n';
	while(ch='y')
	{
		printf("hello");
	}
	return 0;
}	*/
/* In the above code, we use the assignment operator (ch='y')
which leads to the execution of loop infinite number of times. */

/* We use the wrong loop condition which causes the loop to be 
executed indefinitely. */
/*
#include<stdio.h>
int main()
{
	for(int i=1;i>=1;i++)
	{
		printf("hello");
	}
	return 0;
}	*/


/* The above code will execute the 'for loop' infinite number of 
times. As we put the condition (i>=1), which will always be true
for every condition, it means that "hello" will be printed infinitely. */

/* We should be careful when we are using the break keyword in the nested
loop because it will terminate the execution of the nearest loop, not the 
entire loop.  */
/*
#include<stdio.h>
int main()
{
	while(1)
	{
		for(int i=1;i<=10;i++)
		{
			if(i%2==0)
			{
				break;
			}
		}
	}
	return 0;
}		*/
/* In the above code, the while loop will be executed an infinite number of 
times as we use the break keyword in an inner loop. This break keyword
will bring the control out of the inner loop, not from the outer loop.*/

/* We should be very careful when we are using the floating-point value inside
the loop as we cannot underestimate the floating-point errors.  */

#include<stdio.h>
int main()
{
	float x=3.0;
	while(x!=4.0)
	{
		printf("x = %f\n", x);
		x+=0.1;
	}
	return 0;
}		

/* In the above code, the loop will run infinite times as the computer represents
a floating-point value as a real value. The computer will represent the value of 4.0
as 3.999999 or 4.000001, so the condition (x!=4.0) will never be false. The solution
to this problem is to write the condition as (k<=4.0).  */