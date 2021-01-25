/* Recursion is used to calculate the factorial of a number */
/*
#include<stdio.h>
int fact(int);
int main()
{
	int n,f;
	printf("Enter the number whose factorial you want to calculate?");
	scanf("%d",&n);
	f = fact(n);
	printf("factorial = %d",f);
	return 0;
}
int fact(int num)
{
	if (num==0)
	{
		return 1;
	}
	else if (num==1)
	{
		return 1;
	}
	else
	{
		return num*fact(num-1);
	}
}	*/

/* Fibonacci series using recursion  */
/*
#include<stdio.h>  
int fibonacci(int);  
int main ()  
{  
    int n,f;  
    printf("Enter the value of n?");  
    scanf("%d",&n);  
    f = fibonacci(n);  
    printf("%d",f);  
    return 0;
}  
int fibonacci (int n)  
{  
    if (n==0)  
    {  
    return 0;  
    }  
    else if (n == 1)  
    {  
        return 1;   
    }  
    else  
    {  
        return fibonacci(n-1)+fibonacci(n-2);  
    }  
} 		*/

#include <stdio.h>
int display(int);

int display(int n)
{
	if(n==0)
		return 0; // terminating condition
	else
	{
		printf("%d ", n);
		return display(n-1);  //recursive call
	}
} 
int main()
{
	display(5);
	return 0;
}