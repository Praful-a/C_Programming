/* Call by value in C

> In call by value method, the value of the actual parameters is copied into the formal parameters.
In other words, we can say that the value of the variable is used in the function call in the call 
by value method.
> In call by value method, we can not modify the value of the actual parameter by the formal parameter.
> In call by value, different memory is allocated for actual and formal parameters since the value of 
the actual parameter is copied into the formal parameter.
> The actual parameter is the argument which is used in the function call whereas formal parameter is 
the argument which is used in the function definition.
*/
/*
#include<stdio.h>
void change(int num){
	printf("Before adding value inside function num=%d \n", num);
	num = num+100;
	printf("After adding value inside function num=%d \n", num);
}
int main()
{
	int x = 100;
	printf("Before function call x = %d \n", x);
	change(x);  // passing value in function 
	printf("After function call x = %d \n", x);
	return 0;
}		*/

/* Call by Value Example: Swapping the values of the two variables  */
/*
#include<stdio.h>
void swap(int, int); //prototype of the function
int main()
{
	int a = 10;
	int b = 20;
	printf("Before swapping the values in main a = %d, b = %d\n",a,b);  // Printing the value of a and b in main
	swap(a, b);
	printf("\nAfter swapping values in main a = %d, b = %d\n", a, b);
	return 0;
}
void swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("\nAfter swapping values in function a = %d, b = %d", a, b); // Formal parameters, a = 20, b = 10
}		*/

/* Call by reference in C
> In call by reference, the address of the variable is passed into the function call as the
actual parameter.
> The value of the actual parameters can be modified by changing the formal parameters since
the address of the actual parameters is passed.
> In call by reference, the memory allocation is similar for both formal parameters and actual parameters. All
the operations in the function are performed on the value stored at the address of the actual parameters, and 
the modified value gets stored at the same address.
*/
/*
#include<stdio.h>
void change(int *num)
{
	printf("Before adding value inside function num=%d \n",*num);
	(*num) += 100;
	printf("After adding value inside function num=%d \n", *num);
}
int main()
{
	int x = 100;
	printf("Before function call x=%d \n", x);
	change(&x); //passing reference in function
	printf("After function call x = %d \n", x);
	return 0;
}		*/

/* Call by reference Example: Swapping the values of the two variables  */
#include<stdio.h>
void swap(int *, int *);  //prototype of the function
int main()
{
	int a = 10;
	int b = 20;
	printf("Before swapping the value in main a = %d, b = %d\n",a, b); // printing the value of a and b in main
	swap(&a, &b);
	printf("\nAfter swapping values in main a = %d, b = %d \n ", a, b);
	return 0;
}
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	printf("After swapping values in function a = %d, b = %d\n",*a,*b); //Formal parameters, a=20, b = 10
}