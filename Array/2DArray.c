/* Two Dimensional Array in C
The two-dimensional array can be defined as an array of arrays. The 2D array is organized
as matrices which can be represented as the collection of rows and columns. however, 2D arrays
are created to implement a relational database lookalike data structure. It provides ease of
holding tha bulk of data at once which can be passed to any number of functions wherever required.
*/

/* Declaration of two dimensional Array
Syntax
data_type array_name[rows][columns];

int twodimen[4][3];
*/

/* Two dimensional array  */
/*
#include<stdio.h>  
int main(){      
int i=0,j=0;    
int arr[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};     
//traversing 2D array    
for(i=0;i<4;i++){    
 for(j=0;j<3;j++){    
   printf("arr[%d] [%d] = %d \n",i,j,arr[i][j]);    
 }//end of j    
}//end of i    
return 0;  
}		*/

/* Sorting elements in a matrix and printing it */
#include<stdio.h>
int main()
{
	int arr[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter a[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n Printing the elements....\n");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr[i][j]);
		}
	}
	return 0;
} 