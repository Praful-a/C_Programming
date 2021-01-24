/* Goto Statement
The goto statement is known as jump statement in C. As the name suggests, goto is
used to transfer the program control to a predefined label. The goto statement can 
be used to repeat some part of the code for a particular condition. It can also be 
ued to break the multiple loops which can't be done by using a single break statement
However, using goto is avoided these days since it makes the program less readable and 
complecated.
Syntax:
label:
// some part of the code;
goto label;
 */

/* Example */
/*
#include<stdio.h>
int main()
{
	int num,i=1;
	printf("Enter the number whose table you want to print?");
	scanf("%d",&num);
	table:
	printf("%d x %d = %d\n",num,i,num*i);
	i++;
	if(i<=10)
		goto table;
	return 0;
}	*/

/*
#include<stdio.h>
#include<string.h>
int main()
{
	int i=1;
	char name[30];
	printf("Enter you name: ");
	gets(name);
	iterate:
	printf("%s\n", name);
	i++;
	if(i<=5)
		goto iterate;
	return 0;
}		*/
/*
#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=0;i<10;i++)
	{
		for(j=0;j<5;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%d %d %d\n",i,j,k);
				if(j == 3)
				{
					goto out;
				}
			}
		}
	}
	out:
	printf("Came out of the loop");
	return 0;
}		*/
