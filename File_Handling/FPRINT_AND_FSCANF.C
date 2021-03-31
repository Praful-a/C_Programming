/* Writing File: fprintf() functon:-
The fprintf() function is used to write set of characters into file. It
sends formatted output to a stream.
syntax:
	int fprintf(FILE *stream, const char *format[, argument, ....])

*/
/*
#include<stdio.h>
int main()
{
	FILE *fp;
	fp = fopen("file2.txt", "w"); //opening file
	fprintf(fp, "Hello file by fprintf...\n"); // Writing data into file
	fclose(fp); //closing file
	return 0;
}		*/

/* Reading File : fscanf() function:-
The fscanf() function is used to read set of characters from file. It reads a 
word from the file and reaturns EOF at the end of file.

syntax:
int fscanf(FILE *stream, const char *format[, argument, ....])
*/
/*
#include<stdio.h>
int main()
{
	FILE *fp;
	char buff[255]; //creating char array to store data of file
	fp = fopen("file2.txt", "r");
	while(fscanf(fp, " %s", buff)!=EOF)
	{
		printf("%s", buff);
	}
	fclose(fp);
}		*/

#include<stdio.h>
int main()
{
	FILE *fptr;
	int id;
	char name[30];
	float salary;
	fptr = fopen("emp.txt", "w"); 
	if(fptr == NULL)
	{
		printf("File does not exists \n");
		return 0;
	}
	printf("Enter the id\n");
	scanf("%d", &id);
	fprintf(fptr, "ID= %d\n", id);
	printf("Enter the name\n");
	scanf("%s", name);
	fprintf(fptr, "Name= %s\n", name);
	printf("Enter the salary\n");
	scanf("%f", &salary);
	fprintf(fptr, "Salary= %.2f\n", salary);
	fclose(fptr);
}