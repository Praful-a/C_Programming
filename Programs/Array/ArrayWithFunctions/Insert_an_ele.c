#include<stdio.h>
#define SIZE 100
int insertElement(int, int [], int, int);
int insertElement(int n, int arr[], int loc, int ele)
{
	int i;
	//Creating space at the specified location
	for(i=n;i>=loc;i--)
	{
		arr[i] = arr[i-1];
	}
	n++;
	arr[loc-1] = ele;

	//Print out the result of insertion
	for(i=0;i<n;i++)
		printf(" %d ", arr[i]);
}
int main()
{
	int n, i;
	int arr[SIZE];
	int l, e;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("Enter %d element: ", i);
		scanf("%d", &arr[i]);
	}
	printf("\nThe element you want to insert: ");
	scanf("%d", &e);
	printf("\n Enter the location where you want to insert: ");
	scanf("%d", &l);
	insertElement(n, arr, l, e);
	return 0;
}