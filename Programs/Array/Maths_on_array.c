/* Write the program to find sum of all elements in array and avg. */
/*
#include<stdio.h>
#define MAXSIZE 10
int main()
{
	int arr[MAXSIZE];
	int i, num;
	float avg, total=0;
	printf("Enter the value of N \n");
	scanf("%d", &num);
	for(i=0;i<num;i++)
	{
		printf("The %d element: ", i);
		scanf("%d", &arr[i]);
	}
	printf("Input array elements: ");
	for(i=0;i<num;i++)
	{
		total += arr[i];
	}
	avg = total/num;
	printf("The sum of all elements: %f", total);
	printf("\n The average of all elements: %f", avg);
	return 0;
}	*/

/*
#include<stdio.h>
#define MAXSIZE 10
int main()
{
	int arr[MAXSIZE];
	int i, num;
	float neg_val=0, pos_val=0;
	float avg, total =0;
	printf("Enter the value of N \n");
	scanf("%d", &num);
	for(i=0;i<num;i++)
	{
		printf("The %d element: ", i);
		scanf("%d", &arr[i]);
	}
	printf("Input array elements: ");
	for(i=0;i<num;i++)
	{
		if(arr[i]<0)
		{
			neg_val += arr[i];
		}
		else
		{
			pos_val+= arr[i];
		}
		total += arr[i];
	}
	avg = total/num;
	printf("The sum of all elements: %f -> %f", neg_val, pos_val);
	printf("\n The average of all elements: %f", avg);
	return 0;
}		*/

/* Calculate sum of all elements n array by using pointer */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, n, sum=0;
	int *a;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	a = (int *) malloc(n * sizeof(int));
	printf("Enter Elements of First List\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", a+i);
	}
	for(i=0;i<n;i++)
	{
		sum = sum + *(a + i);
	}
	printf("Sum of all elements in array = %d\n", sum);
}