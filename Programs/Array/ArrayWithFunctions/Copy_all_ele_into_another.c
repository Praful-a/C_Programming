/* C program to copy all element of an array into another */
#include<stdio.h>
#define SIZE 100
int copyArray(int, int []);
int copyArray(int size,int arr[])
{
	int i;
	int arr2[SIZE];
	printf("The first array elements are: ");
	for(i=0;i<size;i++)
		printf(" %d ", arr[i]);
	
	for(i=0;i<size;i++)
		arr2[i] = arr[i];
	printf("\nThe second array elements are: ");
	for(i=0;i<size;i++)
		printf(" %d ", arr2[i]);
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
	copyArray(n, array);
	return 0;
}