/* Pointer Arithmetic in C */

/* Increment Pointer in C  */
/*
#include<stdio.h>
int main()
{
	int number = 50;
	int *p; //pointer to int
	p = &number; //stores the address of number variable
	printf("Address of p variable is %u \n", p);
	p = p+1;
	printf("After increment: Address of p variable is %u \n", p);
	return 0;
}		*/

/* Traversing an array by using pointer  */
/*
#include<stdio.h>
int main()
{
	int arr[5] = {1, 2, 3, 4, 5};
	int *p = arr;
	int i;
	printf("Printing array elements...\n");
	for(i=0;i<5;i++)
	{
		printf("%d ",*(p+i));
	}
	return 0;
}		*/

/* Decrementing Pointer in C  */
/*
#include<stdio.h>
int main()
{
	int number = 50;
	int *p; //pointer to int
	p=&number; //stores the address of number variable
	printf("Address of p variable is %u \n", p);
	p = p-1;
	printf("After decrement: Address of p variable is %u \n", p);
	return 0;
}		*/

/* Pointer Addition  */
/*
#include<stdio.h>
int main()
{
	int number=50;
	int *p;  //pointer to int
	p=&number; //stores the address of number variable
	printf("Address of p variable is %u \n", p);
	p = p+3; //adding 3 to pointer variable
	printf("After adding 3: Address of p variable is %u \n", p);
	return 0;
}		*/

/* Pointer Subtraction  */
/*
#include<stdio.h>
int main()
{
	int number=50;
	int *p; //pointer to int
	p = &number; //stores the address of number variable
	printf("Address of p variable is %u \n", p);
	p = p-3; //subtracting 3 from pointer variable
	printf("After subtracting 3: Address of p variable is %u \n", p);
	return 0;
}		*/
/*
#include<stdio.h>
int main()
{
	int i = 100;
	int *p = &i;
	int *temp;
	temp = p;
	p = p+3;
	printf("Pointer Subtraction: %d - %d = %d", p, temp, p-temp);
	return 0;
}		*/

/* Pointer to function in c  */
/*
#include<stdio.h>
int addition();
int main()
{
	int result;
	int (*ptr)();
	ptr = &addition;
	result = (*ptr)();
	printf("The sum is %d", result);
	return 0;
}
int addition()
{
	int a, b;
	printf("Enter two numbers?");
	scanf("%d %d", &a,&b);
	return a+b;
}		*/
