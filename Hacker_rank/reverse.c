#include<stdio.h>
int main()
{
	int size, i, arr[100];
	scanf("%d", &size);
	// int arr[size];
	for(i=0;i<size;i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=size;i>0;i--)
	{
		printf("%d", arr[i]);	
	}
	return 0;
}