/* Writing File : fputc() function
The fputc() function is used to write a single character into file.
It outputs a character to a stream.

Syntax:
int fputc(int c, FILE *stream)
*/
/*
#include<stdio.h>
int main()
{
	FILE *fp;
	fp = fopen("file1.txt", "w"); //opening file
	fputc('a', fp); //writing single character into file
	fclose(fp); //closing file
}		*/

/* Reading File : fgetc() function
The fgetc() function returns a single character from the file. It gets
a character from the stream. It returns EOF at the end of file.

Syntax:
int fgetc(FILE *stream) */

#include<stdio.h>
int main()
{
	FILE *fp;
	char c;
	fp = fopen("file1.txt", "r");
	while((c=fgetc(fp)!=EOF))
	{
		printf("%c", c);
	}
	fclose(fp);

}