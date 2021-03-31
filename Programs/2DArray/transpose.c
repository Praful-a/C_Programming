#include<stdio.h>
int main()
{
	int mat[100][100], transpose[100][100];
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
			scanf("%d", &mat[i][j]);
		}
	}
	printf("\n\n Transposing matrix: \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			transpose[j][i] = mat[i][j];
		}
	}
	printf("\n Printing transposed matrix: \n");
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			printf("%d ", transpose[i][j]);
		}
		printf("\n");
	}
	return 0;
}