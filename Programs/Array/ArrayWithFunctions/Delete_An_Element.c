/* Delete an Element from the specified location */
#include<stdio.h>
#define SIZE 100
int deleteAnEle(int, int [], int);
int deleteAnEle(int n, int arr[], int loc)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[loc]==arr[i])
			continue;
		else
			printf(" %d ", arr[i]);
	}
}
int main()
{
	int n, i;
	int arr[SIZE];
	int l;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("Enter %d element: ", i);
		scanf("%d", &arr[i]);
	}
	printf("\n Enter the index which element you want to delete in array: ");
	scanf("%d", &l);
	deleteAnEle(n, arr, l);
}