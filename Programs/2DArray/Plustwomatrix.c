/* Taking array elements from user and printing two matrixes  */
/*
#include<stdio.h>
int main()
{
	int mat1[100][100], mat2[100][100];
	int i,j;
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
	printf("\n\n Printing first matrix: ");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ", mat1[i][j]);
		}
		printf("\n");
	}
	printf("\n Printing second matrix: ");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ", mat2[i][j]);
		}
		printf("\n");
	}
	return 0;
}			*/

/* Plus two matrixes */
/*
#include<stdio.h>
int main()
{
	int mat1[100][100], mat2[100][100], mat3[100][100];
	int i,j;
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
	printf("\n Adding two matrixes! \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			mat3[i][j] = mat1[i][j]+mat2[i][j];
			printf("%d ", mat3[i][j]);
		}
		printf("\n");
	}
	return 0;
}		*/
/*
#include<stdio.h>
int plusTowMatrix(int,int,int [][50],int [][50]);
int plusTowMatrix(int row, int col, int mat1[50][50], int mat2[50][50])
{
	int mat3[50][50];
	int i, j;
	printf("\n Adding two matrixes! \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			mat3[i][j] = mat1[i][j]+mat2[i][j];
			printf("%d", mat3[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int mat1[100][100], mat2[100][100];
	int i,j;
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
	plusTowMatrix(row,col,mat1,mat2);
	return 0;
}	*/