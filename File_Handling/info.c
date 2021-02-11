/*   File Handling :- 
	File handling in C enables us to create, update, read and delete
	the files stored on the local file system through our C program.
	The following operations can be performed on a file.
	i) Creation of the new File
	ii) Opening an existing file
	iii) Reading from the file
	iv) Writing to the file
	v) Deleting the file

	Functions for file Handling:-
	There are many functions in the C library to open, read, write, search
	and close the file. A list of file functions are given below:

	1> fopen()		Opens new or existing file
	2> fprintf()	write data into the file
	3> fscanf()		reads data from the file
	4> fputc()		writes a character into the file.
	5> fgetc()		reads a character from file.
	6> fgetc()		reads a character from file.
	7> fseek()		sets the file pointer to given position.
	8> fputw()		write an integer to file.
	9> ftell()		returns current position.
	10> fgetw() 	reads an integer from file.
	11> rewind()	sets the file pointer to the beginning of the file.

Opening File: fopen()
We must open a file before it can be read, write, or update. The fopen() function is used
to open a file. The syntax of the fopen() is given below.
Syntax:-
	FILE *fopen(const char *filename, const char *mode);

The fopen() function accepts two parameters:
	> The file name (string). If the file is stored at some specific location, then we must mention
	the path at which the file is stored. For example, a file name can be like
	"c://some_folder/some_file.ext".
	> The mode in which file is to be opened. It is a string.

We can use one of the following modes in the fopen() function.

mode 				Description
r 					Opens a text file in read mode
w 					Opens a text file in write mode
a 					Opens a text file in append mode
r+ 					Opens a text file in read and write mode
w+  				Opens a text file in read and write mode
a+ 					Opens a text file in read and write mode.
rb 					Opens a binary file in read mode.
wb					Opens a binary file in write mode.
ab 					Opens a binary file in append mode.
rb+ 				Opens a binary file in read and write mode.
wb+ 				Opens a binary file in read and write mode.
ab+ 				Opens a binary file in read and write mode.

The fopen function works in the following way.
> Firstly, It searches the file to be opened.
> Then, it loads the file from the disk and place it into the buffer. The buffer
is used to provide efficiency for the read operations.
> It sets up a character pointer which points to the first character to the file.
*/

#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp = fopen("file.txt", "r");
	while(1)
	{
		ch = fgetc(fp);
		if(ch == EOF)
			break;
		printf("%c", ch);
	}
	fclose(fp);
}
/* Closing File: fclose()
The fclose() function is used to close a file. The file must be closed after performing all
the operations on it. The syntax of fclose() function is given below:
int fclose(FILE *fp);