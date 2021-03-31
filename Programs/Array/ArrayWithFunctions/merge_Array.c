/* C program to search an element in array */
#include<stdio.h>
#define SIZE 100
int searchEle(int, int [], int []);
int searchEle(int size,int arr1[],int arr2[])
{
	int i, j;
	int arr3[SIZE];
	printf("The array elements are: ");
	for(i=0;i<size;i++)
	{
		arr3[i] = arr1[i];
	}
	j = i;
	for(i=0;i<size;i++)
	{
		arr3[j] = arr2[i];
		j++;
	}
	for(i=0;i<j;i++)
	{
		printf(" %d ", arr3[i]);
	}
}

int main()
{
	int n, i;
	int array[SIZE];
	int array2[SIZE];
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	printf("\nEnter first array elements: ");
	for(i=0;i<n;i++)
	{
		printf("Enter %d element: ", i);
		scanf("%d", &array[i]);
	}
	printf("\nEnter second array elements: ");
	for(i=0;i<n;i++)
	{
		printf("Enter %d element: ", i);
		scanf("%d", &array2[i]);
	}
	searchEle(n, array, array2);
	return 0;
}