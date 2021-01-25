/* Pass a single-dimensional array to a function */
/*
#include<stdio.h>
void getarray(int arr[])
{
	printf("Elements of array are: ");
	for(int i=0;i<5;i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[5] = {45,67,34,78,90};
	getarray(arr);
	return 0;
}		*/

/* Passing array to a function as a pointer */
#include<stdio.h>
void printarray(char *arr)
{
	printf("Elements of array are: ");
	for(int i=0;i<5;i++)
	{
		printf("%c",arr[i]);
	}
}
int main()
{
	char arr[5] = {'A','B','C','D','E'};
	printarray(arr);
	return 0;
}