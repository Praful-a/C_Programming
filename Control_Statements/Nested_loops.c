/*Nested Loops in C
C supports nesting of loops in C. Nesting of loops is the feature in C that allows the
looping of statements inside another loop. Let's observe an example of nesting loops in c.

Any number of loops can be defined inside another loop, there is no restriction for defining
any number of loops. The nesting level can be defined at n times. You can define any type of 
loop inside another loop; for example, you can define 'while' loop inside a 'for' loop */

/* Syntax:

Outer loop
{
	inner loop
	{
		//inner loop statements
	}
		// outer loop statements
}

Outer_loop and Inner_loop are the valid loops that can be a 'for' loop, 'while'
loop or 'do-while ' loop

Nested for loop
The nested for loop means any type of loop which is defined inside the 'for' loop

for(initialization; condiotion; update)
{
	for(initialization; condition; update)
	{
		// inner loop statements.
	}
		// outer loop statements.
}	*/

/*
#include<stdio.h>
int main()
{
	int n;// variable declaration
	printf("Enter the value of n: ");
	scanf("%d", &n);
	// Displaying the n tables.
	for(int i=1;i<=n;i++)  //outer loop
	{
		for(int j=1;j<=10;j++) //inner loop
		{
			printf("%d\t",(i*j));
		}
		printf("\n");
	}
}		*/

/* Nested while loop

The nested while loop means any type of loop which is defined inside the 'while' loop.

while(condition)
{
	while(condition)
	{
		// inner loop statements.
	}
		//outer loop statements.
}
*/
/*
#include <stdio.h>  
int main()  
{  
	int a[100][100];
   int rows;  // variable declaration  
   int columns; // variable declaration  
   int k=1; // variable initialization  
   printf("Enter the number of rows :");  // input the number of rows.  
   scanf("%d",&rows);  
   printf("\nEnter the number of columns :"); // input the number of columns.  
   scanf("%d",&columns);  
      a[rows][columns]; //2d array   
      int i=1;  
   while(i<=rows) // outer loop  
   {  
       int j=1;  
      while(j<=columns)  // inner loop  
       {  
           printf("%d\t",k);  // printing the value of k.  
           k++;   // increment counter  
           j++;  
       }  
       i++;  
       printf("\n");  
   }
   return 0;  
} 	*/

/* Nested do..while loop
The nested do..while loop means any type of loop which is defined inside the
do..while loop.	*/
/*
do
{
	do
	{
		//inner loop statements
	}while(condition);
		//outer loop statements
}while(condition);		*/

#include<stdio.h>
int main()
{
	/* printing the pattern
	********
	********
	********
	******** */
	int i=1;
	do  //outer loop
	{
		int j=1;
		do  //inner loop
		{
			printf("*");
			j++;
		}while(j<=8);
		printf("\n");
		i++;
	}while(i<=4);
	return 0;
}

