/* strlen() function 
The strlen() function returns the length of the given string. It doesn't
count null character '\0'. */
/*
#include<stdio.h>
#include<string.h>
int main()
{
	char ch[20] = {'P', 'r', 'a', 'f', 'u', 'l', 'D', 'u', 'b', 'e', 'y', '\0'};
	printf("Length of the string is: %d", strlen(ch));
	return 0;
}		*/

/* Copy String: strcpy()
The strcpy(destination, source) function copies the source string in destination. */
/*
#include<stdio.h>
#include<string.h>
int main()
{
	char ch[20] = {'P', 'r', 'a', 'f', 'u', 'l', 'D', 'u', 'b', 'e', 'y', '\0'};
	char ch2[20];
	strcpy(ch2, ch);
	printf("Value of second string is: %s", ch2);
	return 0;
}		*/

/* String Concatenation: strcat() 
The strcat(first_string, second_string) function concatenates two strings and result
is returned to first_string. */

#include<stdio.h>
#include<string.h>
int main()
{
	char ch[10]={'h','e','l','l','o','\0'};
	char ch2[10]={' ','w', 'o', 'r','l', 'd','\0'};
	strcat(ch,ch2);
	printf("Value of first string is: %s",ch);
	return 0;
}