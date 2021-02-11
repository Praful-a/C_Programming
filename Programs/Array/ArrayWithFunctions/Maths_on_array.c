/* Write the program to find sum of all elements in array and avg. */

#include<stdio.h>
float sum(int, int []);
float avg(int, int []);
float sum(int n, int array[])
{
	int i;
	float sum = 0;
	for(i=0;i<n;i++)
	{
		sum+=array[i];
	}
	return sum;
}
float avg(float sum,int n)
{
	int i;
	float avg = 0;
	avg = sum/n;
	return avg;
}

int main()
{
	int i, n;
	int arr[100];
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("Enter %d element in array: ", i);
		scanf("%d", &arr[i]);
	}
	float total = sum(n, arr);
	printf("%.2f\n", total);
	printf("%.2f", avg(total, n));
	return 0;
}