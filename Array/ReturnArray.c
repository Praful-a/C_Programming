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
/*
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
}		*/

/* Returning pointer pointing to the array  */
#include<stdio.h>
int *getarray()
{
	int arr[5];
	printf("Enter the elements in an array : ");
	for(int i=0;i<5;i++)
	{
		scanf("%d", &arr[i]);
	}
	return arr;
}
int main()
{
	int *n;
	n = getarray();
	printf("Elements of array are: ");
	for(int i=0;i<5;i++)
	{
		printf("%d", n[i]);
	}
	return 0;
}