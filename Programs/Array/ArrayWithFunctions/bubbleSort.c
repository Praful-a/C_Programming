#include<stdio.h>
#define SIZE 100
int bubble(int, int []);
int bubble(int n, int arr[])
{
	int i, j, temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
int main()
{
	int n, i;
	int arr[SIZE];
	printf("Enter the size of an array: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);	
	}
	
	bubble(n, arr);
	printf("The sorted array in ascending order: ");
	for(i=0;i<n;i++)
	{
		printf(" %d ", arr[i]);
	}
	return 0;
}