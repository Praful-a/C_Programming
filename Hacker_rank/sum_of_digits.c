#include<stdio.h>
int main()
{
	int n, rem, sum=0;
	scanf("%d", &n);
	if(n >= 10000 && n <= 99999)
	{
		while(n!=0)
		{
			rem = n%10;
			sum += rem;
			n /= 10;
		}
	}
	printf("%d", sum);
	return 0;
}