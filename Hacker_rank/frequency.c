#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	char s[20], s2[20];
	int len, i, j, count=1;
	gets(s);
	len = strlen(s);
	for(i = 0; i<len;i++)
	{
		s2[i] = s[i];
	}
	for(i=0;i<len;i++)
	{
		for(j=i+1; j<len; j++)
		{
			if(s[i] == s2[j])
				count += 1;
			
		}
		printf("%d ", count);
	}
	s2[i] = '\0';
	return 0;
}