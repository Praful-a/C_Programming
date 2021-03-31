#include<stdio.h>

void stringCopy(char[], char[]);    // function prototype declaration

int main()
{   
    char aj[100], mj[100];
    printf("\n\nEnter 1st string: ");
    gets(aj);
    stringCopy(aj, mj); // function call
    printf("\n\nThe copied string is: %s\n\n", mj);
    return 0;
}

void stringCopy(char a[], char b[]) // function definition
{
    int i = 0;
    while(a[i] != '\0')
    {
        b[i] = a[i];
        i++;
    }
    b[i] ='\0';    // most important step
}