#include<stdio.h>
int main()
{
	int a, b, i;
	char arr[9] = {'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight'};
	scanf("%d", &a);
	for(i=a; i<9; i++)
	{
		printf("%[^\n]*c", arr[i]);
	}
	return 0;
}


