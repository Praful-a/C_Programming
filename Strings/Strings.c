/* Strings:-
The string can be defined as the one-dimensional array of characters terminated by a null ('\0').
The caharacter array or the string is used to manipulate text such as word or sentences. Each character
in the array occupies one byte of memory, and the last caharacter must always be 0. The termination character
('\0') is important in a string since it is the only way to identify where the string ends. When we define a 
string as char s[10], the character s[10] is implicitly initialized with the null in the memory.

There are two ways to declare a string in c language.
1. By char array
2. By string literal

Lets see the example of declaring string by char array in C language.
char ch[10] = {'j', 'a', 'v', 'p', 'o', 'i', 'n', 't', '\0'};

While declaring string, size is not mandatory. So we can write the above code as given below:
char ch[10] = {'j', 'a', 'v', 'p', 'o', 'i', 'n', 't', '\0'};

We can also define the string by the string literal in C language. For example:
char ch[]="javatpoint";
In such case, '\0' will be appended at the end of the string by the compiler

Difference between char array and string literal

There are two main difference between char array and literal.

> We need to add the null character '\0' at the end of the array by ourself whereas, it is append internally
  by the compiler in the case of the character array.
> The string literal cannot be reassigned to another set of characters whereas, we can reassign the characters
  of the array.
*/

/* Example  */
/*
#include<stdio.h>
#include<string.h>
int main()
{
	char ch[11]={'j','a','v','a','t','p','o','i','n','t','\0'};
	char ch2[11] = "javatpoint";
	printf("Char Array Value is: %s\n", ch);
	printf("String Literal Value is: %s\n", ch2);
	return 0;
}		*/

/* Traversing String
Hence, there are two ways to traverse a string.
> By using the length of string
> By using the null character.

/* Using the length of string
Let's see an example of counting the number of vowels in a string. */
/*
#include<stdio.h>
int main()
{
	char s[110] = "This is amazing";
	int i = 0;
	int count = 0;
	while(i<11)
	{
		if(s[i]=='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i]=='o')
		{
			count++;
		}
		i++;
	}
	printf("The number of vowels %d", count);
	return 0;
}		*/

/* Accepting string as the input  */
/*
#include<stdio.h>
int main()
{
	char s[20];
	printf("Enter the string?");
	scanf("%s",s);
	printf("You entered %s",s);
	return 0;
}		*/

/* The above code will not give the string if the user enter with space seprated. 
so we have to use instead of scanf("%s",s), scanf("%[^\ns",s) which intructs the compiler
to store the string s while the new line (\n) is encountered.  */
/*
#include<stdio.h>
int main()
{
	char s[20];
	printf("Enter the string?");
	scanf("%[^\n]",s);
	printf("You entered %s", s);
	return 0;
}	*/

	