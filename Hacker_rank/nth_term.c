#include<stdio.h>
int find_nth_term(int, int, int, int);

int find_nth_term(int n, int a, int b, int c)
{
	if(n<=1)
		return n;
	return find_nth_term(n-a) + find_nth_term(n-b) + find_nth_term(n-c);
	
}

int main()
{
	int n, a, b, c;
	scanf("%d %d %d %d", &n, &a, &b, &c);
	int ans = find_nth_term(n, a, b, c);

	printf("%d", ans);
	return 0;
}