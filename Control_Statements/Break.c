/*Break Statement:-
The break is a keyword in C which is used to bring the program control out of the loop
break statement is used inside loops or switch statement. The break statement breaks the
loop one by one, in the case of nested loops, it breaks the inner loop 
first and then proceeds to outer loops. The break statement in C can be
used in the following two scenarous:

1. With switch case
2. With loop

Syntax:
//loop or switch case
break; 
*/
/*
#include<stdio.h>  
#include<stdlib.h>  
int main ()  
{  
    int i;  
    for(i = 0; i<10; i++)  
    {  
        printf("%d ",i);  
        if(i == 5)  
        break;  
    }  
    printf("came outside of loop i = %d",i);     
    return 0;
}  */

/* C break statement with switch case  */
/*
#include<stdio.h>
int main()
{
	int i=5;
	switch(i)
	{
		case 5:
			printf("%d is the value of i", i);
		break;
		default:
			printf("The value is not given by user.");
		break;
	}
	return 0;
}		*/

/* C break statement with the nexted loop  */
/*
#include<stdio.h>
int main()
{
	int i=1, j=1;  //initializing a local variable
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("%d %d\n",i,j);
			if(i==2 && j==2)
			{
				break; //will break loop of j only
			}
		} // end of for loop
	}
	return 0;
}	*/
/* As you can see in the ouput on the console, 2 3 is not printed because
there is a break statement after printing i==2 and j==2. But 3 1, 3 2 and 3 3
are printed because the break statement is used to break inner loop only.  */

/* Break statement with while loop  */
/*
#include<stdio.h>
int main()
{
	int i=0;
	while(1)
	{
		printf("%d ", i);
		i++;
		if(i==10)
			break;
	}
	printf("Came out of while loop");
}		*/

/* Break statement with do-while loop  */
/*
#include<stdio.h>
int main()
{
	int n=2,i,choice;
	do
	{
		i=1;
		while(i<=10)
		{
			printf("%d X %d = %d\n",n,i,n*i);
			i++;
		}
		printf("do you want to continue with table of %d, press any num or press 0 value to break.", n+1);
		scanf("%d", &choice);
		if(choice==0)
		{
			break;
		}
		n++;
	}while(1);
}		*/

/* More programs with break statement  */

/* Without using break statement */
/*
#include<stdio.h>
int findElement(int arr[], int size, int key)
{	int count = 0;
	//loop to traverse array and search for key
	for(int i=0;i<size;i++, count++)
	{
		if(arr[i] == key)
		{
			printf("Element found at position: %d\n", (i+1));			
		}
	}
	printf("Iteration goes to %d times.", count);
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};

	// no of elements
	int n = 6;

	// key to be searched
	int key = 3;

	// Calling function to find the key
	findElement(arr, n, key);
	return 0;
}		*/


/* Using Break statement  */
/*
#include<stdio.h>
int findElement(int arr[], int size, int key)
{	int count = 0;
	//loop to traverse array and search for key
	for(int i=0;i<size;i++, count++)
	{
		if(arr[i] == key)
		{
			printf("Element found at position: %d\n", (i+1));
			
			//using break to terminate loop execution
			break;
		}
	}
	printf("Iteration goes to %d times.", count);
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};

	// no of elements
	int n = 6;

	// key to be searched
	int key = 3;

	// Calling function to find the key
	findElement(arr, n, key);
	return 0;
}		*/

// C program to illustrate
// using break statement
// in Nested loops

#include<stdio.h>
int main()
{
	// nested for loops with break statement
	// at inner loop
	for(int i=0;i<5;i++)
	{
		for(int j=1;j<=10;j++)
		{
			if(j>3)
				break;
			else
				printf("*");
		}
		printf("\n");
	}
	return 0;
}