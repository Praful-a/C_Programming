#include<stdio.h>
#define SIZE 10
int main()
{
	int i, j;
	float mat[SIZE][SIZE] = {{1.1, 0, 0, 0, 0, 0, 0.5},
							{0, 1.9, 0, 0, 0, 0, 0.5},
							{0, 0, 2.6, 0, 0, 0, 0.5},
							{0, 0, 7.8, 0.6, 0, 0, 0},
							{0, 0, 0, 1.5, 0, 0, 0},
							{0, 0, 0, 0, 2.7, 0, 0},
							{1.6, 0, 0, 0, 0.4, 0, 0},
							{0, 0, 0, 0, 0, 0.9, 1.7},
						};

	printf("Printing the matrix: \n");
	for(i=0;i<SIZE;i++)
	{
		for (j=0;j<SIZE;j++)
		{
			if (mat[i][j] != 0)
				printf("%.1f ", mat[i][j]);
		}
	}
	return 0;
}