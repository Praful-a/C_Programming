/* Program to sum of right diagonal */
/*
#include<stdio.h>
int main()
{
	int mat[100][100];
	int i,j;
	int row, col;
	int sum = 0;
	printf("Enter the size of rows: ");
	scanf("%d", &row);
	printf("\nEnter the size of column: ");
	scanf("%d", &col);
	printf("\nEnter the data of first matrix: \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d", &mat[i][j]);
			if(i==j)
				sum = sum+mat[i][j];
		}
	}
	// printf("\n\n Transposing matrix: \n");
	printf("\n Printing the matrix: \n");
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	printf("Addition of the right Diagonal elements is: %d\n", sum);
	return 0;
}			*/

#include<stdio.h>
int main()
{
	int mat[100][100];
	int i,j;
	int row, col;
	int sum = 0;
	printf("Enter the size of rows: ");
	scanf("%d", &row);
	printf("\nEnter the size of column: ");
	scanf("%d", &col);
	printf("\nEnter the data of first matrix: \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d", &mat[i][j]);
			if(j==i)
				sum = sum+mat[i][j];
		}
	}
	// printf("\n\n Transposing matrix: \n");
	printf("\n Printing the matrix: \n");
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	printf("Addition of the right Diagonal elements is: %d\n", sum);
	return 0;
}