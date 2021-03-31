/* Automatic
> Automatic variables are allocated memory automatically at runtime.
> The visibility of the automatic variables is limited to the block in which they are defined.
The scope of the automatic variables is limited to the block in which they are defined.
> The automatic variables are initialized to garbage by default.
> The memory assigned to automatic variables gets freed upon exiting from the block
> The keyword used for defining automatic variables is auto.
> Every local variable is automatic in C by default.
*/

/* Example1 */
/*
#include<stdio.h>
int main()
{
	int a; //auto
	char b;
	float c;
	printf("%d %c %f",a,b,c);
	return 0;
}		*/

/* Example 2 */
/*
#include<stdio.h>
int main()
{
	int a=10, i;
	printf("%d ",++a);
	{
		int a = 20;
		for(i=0;i<3;i++)
		{
			printf("%d ", a);
		}
	}
	printf("%d ",a);
	return 0;
}		*/

/* Static 
> The variables defined as static specifier can hold their value between the multiple function calls.
> Static local variables are visible only to the function or the block in which they are defined.
> A same static variable can be declared many times but can be assigned at only one time.
> Default initial value of the static integral variable is 0 otherwise null.
> The visibility of the static global variable is limited to the file in which it has declared.
> The keyword used to define static variable is static.
*/

/* Example 1 */
/*
#include<stdio.h>
static char c;
static int i;
static float f;
static char s[100];
int main()
{
	printf("%d %d %f %s",c,i,f);
	return 0;
}		*/
/*
#include<stdio.h>
void sum()
{
	static int a = 10;
	static int b = 24;
	printf("%d %d \n",a,b);
	a++;
	b++;
}
int main()
{
	int i;
	for(i=0;i<3;i++)
	{
		sum();
	}
	return 0;
}		*/

/* Register
> The variables defined as the register is allocated the memory into the CPU registers depending upon the size of the memory remaining in the CPU.
> We can not dereference the register variables, i.e., we can not use &operator for the register variable.
> The access time of the register variables is faster than the automatic variables.
> The initial default value of the register local variables is 0.
> The register keyword is used for the variable which should be stored in the CPU register. However, it is compiler?s choice whether or not; the variables can be stored in the register.
> We can store pointers into the register, i.e., a register can store the address of a variable.
> Static variables can not be stored into the register since we can not use more than one storage specifier for the same variable.
