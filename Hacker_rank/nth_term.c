#include<stdio.h>
int find_nth_term(int, int, int, int);

int find_nth_term(int n, int a, int b, int c)
{
	int sum;
	while(n != 0)
	{
		sum = a + b + c;
		b = a;
		c = b;
		a = sum;
	}
	return sum;
}

int main()
{
	int n, a, b, c;
	scanf("%d %d %d %d", &n, &a, &b, &c);
	int ans = find_nth_term(n, a, b, c);

	printf("%d", ans);
	return 0;
}