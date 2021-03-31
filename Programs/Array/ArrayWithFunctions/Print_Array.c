/* C program to print Array elements */
#include<stdio.h>
#define SIZE 100
int printArray(int, int []);
int printArray(int size,int arr[])
{
	int i;
	printf("The array elements are: ");
	for(i=0;i<size;i++)
	{
		printf(" %d ", arr[i]);
	}
	
}

int main()
{
	int n, i;
	int array[SIZE];
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("Enter %d element: ", i);
		scanf("%d", &array[i]);
	}
	printArray(n, array);
	return 0;
}