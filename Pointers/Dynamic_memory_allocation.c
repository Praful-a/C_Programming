/* Dynamic memory allocation  */
/* Use of malloc  */
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	int n, i;
	printf("Enter the number of integers to be entered");
	scanf("%d",&n); 
	ptr = (int *)malloc(n * sizeof(int));
	if(ptr == NULL)
	{
		printf("\n Memory not available");
		exit(1);
	}
	printf("\n Enter %d values ", n);
	for(i=0;i<n;i++)
		scanf("%d",ptr+i);
	printf("\n values are");
	for(i=0;i<n;i++)
		printf("%d",*(ptr+i));
	return 0;
}		*/

/* free() 
void free(viod *ptr) 
is used to release the memory space allocated dynamically.
*/
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	int n, i;
	printf("Enter the number of integers to be entered");
	scanf("%d",&n); 
	ptr = (int *)malloc(n * sizeof(int));
	if(ptr == NULL)
	{
		printf("\n Memory not available");
		exit(1);
	}
	printf("\n Enter %d values ", n);
	for(i=0;i<n;i++)
		scanf("%d",ptr+i);
	printf("\n values are");
	for(i=0;i<n;i++)
		printf("%d",*(ptr+i));
	
	free(ptr);

	return 0;
}		*/

/* calloc()
void *calloc(datatype number, datatype var_size)
is used to allocate multiple blocks of memory. let n=5
this allocate 5 blocks of memory, each block contain 4 bytes
after allocate the memory calloc() is initialize to 0
*/
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	int n, i;
	printf("Enter the number of integer to be entered");
	scanf("%d",&n);
	ptr = (int *)calloc(n, sizeof(int));
	if(ptr == NULL)
	{
		printf("\n memory not available");
		exit(1);
	}
	printf("\n Enter %d values ", n);
	for(i = 0;i<n;i++)
		scanf("%d", ptr+i);
	printf("\n Values are");
	for(i=0;i<n;i++)
		printf("%d",*(ptr+i));

	free(ptr);

	return 0;
}			*/

/* realloc()  
void *realloc(void *ptr, datatype newsize)
to be used to increase and decrease the memory allocated by malloc() or calloc()
if alter the size of memory block without using the old data.
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	int n, i;
	int newsize;
	printf("Enter the number of integer to be entered");
	scanf("%d",&n);
	ptr = (int *)calloc(n, sizeof(int));
	if(ptr == NULL)
	{
		printf("\n memory not available");
		exit(1);
	}
	printf("\n Enter %d values ", n);
	for(i = 0;i<n;i++)
		scanf("%d", ptr+i);
	printf("\n Values are");
	for(i=0;i<n;i++)
		printf("%d",*(ptr+i));

	printf("\nEnter the new size");
	scanf("%d",&newsize);
	ptr = (int *)realloc(ptr,newsize*sizeof(int));
	if(ptr == NULL)
	{
		printf("\n memory not available");
	}
	printf("\n enter %d number", newsize-n);
	for(i=n;i<newsize;i++)
		scanf("%d",ptr+i);

	printf("\n after increase the size values are.... ");
	for(i=0;i<newsize;i++)
		printf("\t%d",*(ptr+i));

	free(ptr);

	return 0;
}