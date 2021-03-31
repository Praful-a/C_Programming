/*Functions
In c, we can divide a large program into the basic building blocks known as function. The
function contains the set of porgramming statements enclosed by {}. A function can be called
multiple times to provide reusability and modularity to the C program. The function is also
known as procedureor subroutinein other programming languages.

Advantage of using function in C

There are the following advantages of C function.
1> By using functions, we can avoid rewriting same logic/code again and again in a program.
2> We can call C functions any number of times in a program and from any place in a program.
3> We can track a large C program easily when it is devided into multiple functions.
4> Reusability is the main achievement of C functions.
5> However, Function calling is always a overhead in a C program.

Function Aspects

There are three aspects of a C function.
1> Function declaration A function must be declared globally in a c program to tell the compiler
about the function name, function parameters, and return type.
2> Function call Function can be called from anywhere in the program. The parameter list must not
differ in function calling and function declaration. We must pass the same number of functions as 
it is declared in the function declaration.
3> Function definition It contains the actual statements which are to be executed. It is the most 
important aspect to which the control comes when the function is called. Here, we must notice that
only one value can be returned from the function

SN 		C  					Syntax
		Function 			
		aspects  			
======================================================
1		Function 			return_type, function_name
		declaration			(argument list);
2		Function call 		function_name(argument_list)
3		Function 			return_type	  function_name
		definition			(argument list) {function body;}
		
Syntax:
return_type function_name(data_type parameter....){
	//code to be executed
}

Types of Functions:-
There are two types of functions in C
1. Library Functions: are the functions which are declared in the C header files such as scanf(), printf()
gets(), puts(), ceil(), floor() etc.
2. User-defined functions: are the functions which are created by the C programmer, so that he/she can use
it many times. It reduces the complexity of a big program and optimizes the code.

Return Value :-

A C function may or may not return a value from the function. If you don't have to return any
value form the function, use void for the return type.
*/

/* Example */
/*
#include<stdio.h>
void hello(){
	printf("hello C");
}

int main(){
	hello();
	return 0;
}	*/
/* If you want to return any value from the function then use any data type such as int, long, 
char, etc. The return type depends on the value to be returned from the function.
*/
/*
#include<stdio.h>
int get()
{
	return 10;
}

int main()
{
	printf("The value returned by the func: %d", get());
	return 0;
}		*/

/* In the above program we are returning 10, so the return type is int. If you want to return floating
point value, you need to use float as the return type of the method */
/*
#include<stdio.h>
float get()
{
	return 10.2;
}
int main()
{
	printf("The value returned by the func: %.2f", get());
	return 0;
}		*/

/* Different aspects of function calling
A function may or may not accept any argument. It may or may not return any value. Bassed
on these facts, There are four different aspects of function calls.

i) function without arguments and without return value
II) function without arguments and with return value.
III) function with arguments and without return value.
IV) function with arguments and with return value.

/* Example for function without argument and return type  */
/*
#include<stdio.h>
void printName(); // function declaration
int main()
{
	printf("Hello, ");
	printName();		// function call
	return 0;
}
void printName()		// function definition
{
	printf("Welcome to India!");
}		*/

/* Example 2  */

#include<stdio.h>
void sum();
int main()
{
	printf("\nGoing to calculate the sum of two numbers:");
	sum();
	return 0;
}
void sum()
{
	int a,b;
	printf("\nEnter two numbers");
	scanf("%d %d", &a,&b);
	printf("The sum is %d", a+b);
}		

/* Example for function without argument and with return type value  */
/*
#include<stdio.h>
int sum();
int main()
{
	int result;
	printf("\nGoing to calculate the sum of two numbers:");
	result = sum();
	printf("%d",result);
	return 0;
}
 int sum()
 {
 	int a, b;
 	printf("\nEnter two numbers:");
 	scanf("%d %d", &a, &b);
 	return a+b;
 }		*/

/* Program to calculate the area of the square  */
/*
#include<stdio.h>
int square();
int main()
{
	printf("Going to calculate the area of the square\n");
	float area = square();
	printf("The area of the square: %f\n", area);
	return 0;
}
int square()
{
	float side;
	printf("Enter the length of the side in meters: ");
	scanf("%f", &side);
	return side * side;
}		*/

/* Example for Function with argument and without return value */
/*
#include<stdio.h>
void sum(int, int);
int  main()
{
	int a,b;
	printf("\nGoing to calculate the sum of two numbers:");
	printf("\nEnter two numbers:");
	scanf("%d %d", &a,&b);
	sum(a, b);
}
void sum(int a, int b)
{
	printf("\nThe sum of %d", a+b);
}		*/

/* Prgram to calculate the average of five numbers.  */
/*
#include<stdio.h>
void average(int, int, int, int, int);
int main()
{
	int a,b,c,d,e;
	printf("\nGoing to calculate the average of five numbers:");
	printf("\nEnter five numbers:");
	scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
	average(a,b,c,d,e);
	return 0;
}

void average(int a, int b, int c, int d, int e)
{
	float avg;
	avg = (a+b+c+d+e)/5;
	printf("The average of given five numbers: %f", avg);
}			*/

/* Example for Function with argument and with return value  */
/*
#include<stdio.h>
int sum(int, int);
int main()
{
	int a,b,result;
	printf("\nGoing to calculate the sum of two numbers:");
	printf("\nEnter two numbers:");
	scanf("%d %d", &a, &b);
	result = sum(a, b);
	printf("\n The sum is: %d", result);
	return 0;
}
int sum(int a, int b)
{
	return a+b;
}		*/

/* C function to check whether a number is even or odd  */
/*
#include<stdio.h>  
int even_odd(int);  
int main()  
{  
 int n,flag=0;  
 printf("\nGoing to check whether a number is even or odd");  
 printf("\nEnter the number: ");  
 scanf("%d",&n);  
 flag = even_odd(n);  
 if(flag == 0)  
 {  
    printf("\nThe number is odd");  
 }  
 else   
 {  
    printf("\nThe number is even");  
 }  
return 0;
}  
int even_odd(int n)  
{  
    if(n%2 == 0)  
    {  
        return 1;  
    }  
    else   
    {  
        return 0;  
    }  
} 		*/ 

