/* Continue
The continue statement in C language is used to bring the program control to the beginning
of the loop. The continue statement skips some line of code inside the loop and continues
with the next iteration. It is mainly used for a condition so that we can skip some code
for a particular condition.
Syntax:
// loop statements
continue;
// Some lines of the code which is to be skipped
*/
/*
#include<stdio.h>
int main()
{
	int i=0;
	while(i!=10)
	{
		printf("%d", i);
		continue;
		i++;
	}
	return 0;
}		*/

/* Example 2  */
/*
#include<stdio.h>
int main()
{
	int i=1;  //initializing a local variable
	// starting a loop from 1 to 10
	for(i=1; i<=10;i++)
	{
		if(i==5) //if value of i is equal to 5, it will continue the loop
		{
			continue;
		}
		printf("%d \n", i);
	} //end of for loop
	return 0;
}		*/

/* C continue statement with inner loop  */

#include<stdio.h>
int main()
{
	int i=1,j=1; //initializing a local variable
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			if(i==2 && j==2)
			{
				continue; //will continue loop of j only
			}
			printf("%d %d\n", i, j);
		}
	}	// end of the loop 
	return 0;
}

