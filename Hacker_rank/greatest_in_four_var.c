#include<stdio.h>
int max_of_four(int, int, int, int);

int max_of_four(int a, int b, int c, int d)
{
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				return a;
			}
			else
			{
				return d;
			}
		}
		else
		{
			return c;
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				return b;
			}
			else
			{
				return d;
			}
		}
		else
		{
			if(d>c)
			{
				return d;
			}
			else
			{
				return c;
			}
		}
	}
}

int main()
{
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%d", max_of_four(a, b, c, d));
	return 0;
}