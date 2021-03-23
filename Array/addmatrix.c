#include<stdio.h>
int main()
{      
	int i=0,j=0;    
	int mat1[3][3], mat2[3][3], res[3][3];
	printf("Enter the 1 matrix elements: \n");       
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d", &mat1[i][j]);
		}
	}
	printf("\nEnter teh second matrix elements: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d", &mat2[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(int k=0;k<3;k++)
			{
				res[i][j] += mat1[i][k]*mat2[k][j];
			}
		}
	}
	printf("\nPrinting first matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ", mat1[i][j]);
			if(j == 3-1)
			{
				printf("\n");
			}
		}
	}  
	printf("\nPrinting second matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ", mat2[i][j]);
			if(j == 3-1)
			{
				printf("\n");
			}
		}
	}  
	printf("\nmultiplication of two matrices: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ", res[i][j]);
			if(j == 3-1)
			{
				printf("\n");
			}
		}
	}  
	return 0;  
}