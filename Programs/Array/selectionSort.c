#include<stdio.h>
int main()
{
	int i, j, temp;
	int n;
	int arr[50];
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	printf("\nEnter the %d elements in array", n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		int pos = i;
		for(j=i+1;j<n;j++)
		{
			if(arr[pos]>arr[j])
				pos = j;
		}
		if(pos!=i)
		{
			temp = arr[i];
			arr[i] = arr[pos];
			arr[pos] = temp;
		}
	}
	printf("Sorted Arrya");
	for(i=0;i<n;i++)
		printf(" %d ", arr[i]);
	return 0;
}