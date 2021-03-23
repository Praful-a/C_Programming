#include<stdio.h>
int main()
{
	int mat1[100][100], mat2[100][100], mat3[100][100];
	int i,j,k;
	int row, col;
	printf("Enter the size of rows: ");
	scanf("%d", &row);
	printf("\nEnter the size of column: ");
	scanf("%d", &col);
	printf("\nEnter the data of first matrix: \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter first matrix ele [%d][%d]: ", i, j);
			scanf("%d", &mat1[i][j]);
		}
	}
	printf("\n Enter the data of second matrix: \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter second matrix ele [%d][%d]: ", i, j);
			scanf("%d", &mat2[i][j]);
		}
	}
	printf("\n\n Printing first matrix: \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ", mat1[i][j]);
		}
		printf("\n");
	}
	printf("\n Printing second matrix: \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ", mat2[i][j]);
		}
		printf("\n");
	}
	printf("\n Multiplying two matrixes! \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			mat3[i][j]=0;
			for(k=0;k<col;k++)
			{
				mat3[i][j] += mat1[i][k]*mat2[k][j];\
			}
			printf("%d ", mat3[i][j]);
		}
		printf("\n");
	}
	return 0;
}