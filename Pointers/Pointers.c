/* Pointers
The pointer in C language is a variable which stores the address of another variable. This
variable can be of type int, char, array, function, or any other pointer. The size of the 
pointer depends on the architecture. However, in 32-bit architecture the size of a pointer is 
2 byte. 

int n = 10;
int *p = &n; // Variable p of type pointer is pointing to the address of the variable

Declaring a pointer
The pointer in c language can be declared using * (astrick symbol). It is also known as 
indirection pointer used to dereference a pointer.

int *a; //pointer to int
char *c; //pointer to char
*/

/* Example */
/*
#include <stdio.h>
int main()
{
	int number = 50;
	int *p;
	p = &number; //stores the address of number variable
	printf("Address of the number is %u \n", &number);
	printf("Address of p variable is %x \n", p); // p contains the address of the number
	printf("Value of p variable is %d \n", *p); // // As we know that * is used to dereference a pointer therefore if we print *p, we will get the value stored at the address contained by p.    
	return 0;
}		*/

/* Pointer to array 
int arr[10];
int *p[10]=&arr; // Variable p of type pointer is pointing to the address of an integer

Pointer to a function
void show(int);
void(*p)(int) = &display; // Pointer p is pointing to the address of a function

Pointer to structure
struct st {
	int i;
	float f;
}ref;
struct st *p = &ref;
*/

/* Address Of (&) Operator 
The address of operator '&' returns the address of a variable. But, we need to use 
%u to display the address of a variable. */
/*
#include<stdio.h>
int main()
{
	int number = 50;
	printf("Value of number %d, address of number is %u", number, &number);
	return 0;
}		*/

/* Pointer Program to swap two numbers without using the 3rd variable.  */
/*
#include<stdio.h>
int main()
{
	int a=122,b=233,*p1=&a,*p2=&b;
	printf("Before swap: *p1=%d *p2=%d", *p1, *p2);
	*p1 = *p1+*p2;
	*p2=*p1-*p2;
	*p1=*p1-*p2;
	printf("\nAfter swap: *p1=%d *p2=%d", *p1, *p2);
	return 0;
}	*/
/*
#include<stdio.h>
int main()
{
	int a=123, b=234;
	printf("Before swap: a=%d b=%d", a, b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("\nAfter swap: a=%d b=%d", a, b);
	return 0;
}		*/