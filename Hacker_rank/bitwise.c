#include<stdio.h>
int main()
{
	for(int i=1; i<=5;i++)
	{
		// printf("%d\n", i && 4);
		printf("%d\n", i || 4);
		// printf("%d\n", i ^ 4);
	}
	return 0;
}