#include<stdio.h>
int main()
{
	int size, i, sum=0;
	scanf("%d", &size);
	int arr[size];
	for(i=0;i<size;i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0;i<size;i++)
	{
		sum += arr[i];
	}
	printf("%d", sum);
	return 0;
}