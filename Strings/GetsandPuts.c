/* gets() function:-
The gets() function enables the user to enter some character followed by the enter key.
All the character entered by the user get stored in a character array. The null character
is added to the array to make it a string. The gets() allows the user to enter the spce-separated
strings. It returns the string entered by the user.  */
/*
#include<stdio.h>
int main()
{
	char s[30];
	printf("Enter the string? ");
	gets(s);
	printf("You entered %s",s);
}		*/		

/* The gets() function is risky to use since it doesn't perform any array bound checking and keep
reading the characters until the new line (enter) is encountered. It suffers from buffer overflow,
which can be avoided by using fgets(). The fgets() makes sure that not more than the maximum limit
of characters are read. Consider the following example.  */
/*
#include<stdio.h>
int main()
{
	char str[20];
	printf("Enter the string? ");
	fgets(str, 20, stdin);
	printf("%s", str);
	return 0;
}			*/


/* puts() function:-
The puts() function is very much similar to printf() function. The puts() function is used to print the string
on the console which is previously read by using gets() or scanf() function. The puts() function returns an
integer value representing the number of characters being printed on the console. Since, it prints an additional
newline character with the string, which moves the cursor to the new line on the console, The integer value returned
by puts() will always be equal to the number of characters present in the string plus 1.

Declaration: int puts(char[])   */

#include<stdio.h>
#include<string.h>
int main()
{
	char name[50];
	printf("Enter your name: ");
	gets(name);  //reads string from user
	printf("Your name is: ");
	puts(name);  //displays string
	return 0;
}		