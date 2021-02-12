/* C program to search an element in array */
#include<stdio.h>
#define SIZE 100
int searchEle(int, int [], int);
int searchEle(int size,int arr[], int ele)
{
	int i;
	printf("The array elements are: ");
	for(i=0;i<size;i++)
		printf(" %d ", arr[i]);
	for(i=0;i<size;i++)
	{
		if(arr[i] == ele)
		{
			printf("\n The element location is: %d", i);
		}
	}
}

int main()
{
	int n, i, e;
	int array[SIZE];
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("Enter %d element: ", i);
		scanf("%d", &array[i]);
	}
	printf("Enter the element to search location: ");
	scanf("%d", &e);
	searchEle(n, array, e);
	return 0;
}