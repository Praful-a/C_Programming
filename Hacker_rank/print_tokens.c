#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char *s;
	s =(char*) malloc(1024 * sizeof(char));
	scanf("%[^\n]", s);
	s =(char*) realloc(s, strlen(s) + 1);
	char * token = strtok(s, " ");
	while(token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
	return 0;
}


/*  Second way  */
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//   char string[50];
//   char words[60][60];
//   int wordNum = 0;
//   int charNum = 0;
//   int length, i, j;

//   fgets(string,sizeof(string),stdin);
//   length = strlen(string);
//   for(i = 0; i < length; i++)
//   {
//     if(!isspace(string[i]))
//     {
//       words[wordNum][charNum] = string[i];
//       charNum++;
//     }

//     else
//     {
//       words[wordNum][charNum] = '\0';
//       wordNum++;
//       charNum = 0;
//     }
//   }

//   printf("\n\n");

//   for(i = 0; i < wordNum; i++)
//   {
//     for(j = 0; words[i][j] != '\0'; j++)
//     {
// 	if(isalnum(words[i][j]))
//         printf("%c",words[i][j]);
//     }

//     printf("\n\n");
//   }

//   return 0;
// }