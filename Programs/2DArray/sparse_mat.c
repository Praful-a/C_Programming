// #include<stdio.h>
// #define SIZE 10
// int main()
// {
// 	int i, j;
// 	float mat[SIZE][SIZE] = {{1.1, 0, 0, 0, 0, 0, 0.5},
// 							{0, 1.9, 0, 0, 0, 0, 0.5},
// 							{0, 0, 2.6, 0, 0, 0, 0.5},
// 							{0, 0, 7.8, 0.6, 0, 0, 0},
// 							{0, 0, 0, 1.5, 0, 0, 0},
// 							{0, 0, 0, 0, 2.7, 0, 0},
// 							{1.6, 0, 0, 0, 0.4, 0, 0},
// 							{0, 0, 0, 0, 0, 0.9, 1.7},
// 						};

// 	printf("Printing the matrix: \n");
// 	for(i=0;i<SIZE;i++)
// 	{
// 		for (j=0;j<SIZE;j++)
// 		{
// 			if (mat[i][j] != 0)
// 				printf("%.1f ", mat[i][j]);
// 		}
// 	}
// 	return 0;
// }
/*  Make matrix and store row position
and column position and not zero value.*/
#include<stdio.h>
#define SIZE 10
int main()
{
	int i, j, count = 0;
	int mat[SIZE][SIZE] = {{0,0,0,3,5},
						   {0,0,5,7,0},
						   {0,0,0,0,0},
						   {0,2,6,0,0}	};
	printf("Printing the matrix: \n");
	for(i=0;i<SIZE;i++)
	{
		for (j=0;j<SIZE;j++)
		{
			if (mat[i][j] != 0)
				count++;
		}
	}
	int nonzero[3][count];
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			if(mat[i][j] != 0)
			{
				nonzero[j][i] = i;
				nonzero[j][i] = j;
				nonzero[j][i] = mat[i][j];
			}
		}
	}
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			printf("%d ", nonzero[i][j]);
		}
		printf("\n");
	}
	return 0;
}