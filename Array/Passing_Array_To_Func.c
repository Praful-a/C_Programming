/* Consider the following syntax to pass an array to the function.  
There are 3 ways to declare the function which is intended to receive an array an argument.
First way:
return_type function(type arrayname[])
Second way:
return_type function(type arrayname[SIZE])
Third way:
return_type function(type *arrayname)
*/

/* C language passing an array to function example */
/*
#include<stdio.h>
int minarray(int arr[], int size)
{
	int min = arr[0];
	int i = 0;
	for(i=1;i<size;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	return min;
}
int main() {
	int min=0;
	int numbers[] = {4,5,7,3,8,9};  //declaration of array

	min=minarray(numbers,6); //passing array with size
	printf("minimum number is %d \n",min);
	return 0;
}		*/

/* C function to sort the array  */
/*
#include<stdio.h>
void Bubble_Sort(int[]);
int main()
{
	int arr[10] = {10,9,7,101,23,44,12,78,34,23};
	Bubble_Sort(arr);
	return 0;
}
void Bubble_Sort(int a[])  //array a[] points to arr.
{
	int i,j,temp;
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[j]<a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("Printing Sorted Element List...\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
}		*/

/* Returning array from function  */
#include<stdio.h>
int *Bubble_Sort(int[]);
int main()
{
	int arr[10] = {10, 9, 7, 101, 23, 44, 12, 78, 34, 23};
	int *p = Bubble_Sort(arr), i;
	printf("Printing sorted elements....\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n", *(p+i));
	}
}
int* Bubble_Sort(int a[])  //array a[] points to arr.
{
	int i,j,temp;
	for(i=0;i<10;i++)
	{
		for(j = i+1;j<10;j++)
		{
			if(a[j] < a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	return a;
}