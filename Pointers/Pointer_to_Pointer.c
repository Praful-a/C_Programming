/* Double Pointer (Pointer to Pointer)
As we know that, a pointer is used to store the address of a variable in C.
Pointer reduces the access time of a variale. However, In C, we can also define
a pointer to store the address of another pointer. Such pointer is known as double
pointer (Pointer to Pointer). The first pointer is used to store the address of a 
variable whereas the second pointer is used to store the address of the first pointer.

Syntax of declaring a double pointer is:
int **p; // pointer to a pointer which is pointing to an integer.
*/
/*
#include<stdio.h>
int main()
{
	int a = 10;
	int *p;
	int **pp;
	p = &a; // pointer p is pointing to the address of a
	pp = &p;  // pinter pp is a double pointer pointing the address of pointer p
	printf("address of a: %x\n", p); // Address of a will be printed
	printf("Address of p: %x\n", pp); // Address of p will be printed
	printf("Value stored at p: %d\n", *p); // value stored at the address contained by the p i.e 10 will be printed
	printf("Value stored at pp: %d\n", **pp); // value stored at the address contained by the pp ie 10 will be printed 
}		*/
/*
#include<stdio.h>
int main()
{
	int number = 50;
	int *p; //pointer to int
	int **p2; //pointer to pointer
	p = &number; //stores the address of number variable
	p2 = &p;
	printf("Address of number variable is %x \n", &number);
	printf("Address of p variable is %d \n", p);
	printf("Value of *p variable is %d \n", *p);
	printf("Address of p2 variable is %x \n", p2);
	printf("Value of **p2 variable is %d \n", **p2);
	return 0;
}		*/

#include<stdio.h>
int main()
{
	int a[10] = {100, 206, 300, 409, 509, 601}; //Line 1
	int *p[] = {a, a+1, a+2, a+3, a+4, a+5}; //Line 2
	int **pp = p; //Line 3
	pp++;   //Line 4
	printf("%d %d %d\n", pp-p,*pp - a, **pp);   //Line 5
	*pp++;  //Line 6
	printf("%d %d %d\n", pp-p,*pp-a,**p);  //Line 7
	++*pp;  //Line 8
	printf("%d %d %d\n", pp-p,*pp - a, **pp);  //Line 9
	++**pp;  //Line 10
	printf("%d %d %d\n", pp-p, *pp - a, **pp);  //Line 11
	return 0;
}