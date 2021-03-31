#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE * file;
    char path[100];
    char ch;
    int characters, words, lines, tabs;
    /* Open source files in 'r' mode */
    file = fopen("file.txt", "r");
    /* Check if file opened successfully */
    if (file == NULL)
    {
        printf("\nUnable to open file.\n");
        printf("Please check if file exists and you have read privilege.\n");
        exit(1);
    }
    /*
     * Logic to count characters, words and lines.
     */
    characters = words = lines = tabs = 0;
    while ((ch = fgetc(file)) != EOF)
    {
        characters++;
        /* Check new line */
        if (ch == '\n' || ch == '\0')
            lines++;
        /* Check words */
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;
        if (ch == '\t')
          tabs++;
    }
    /* Increment words and lines for last word */
    if (characters > 0)
    {
        words++;
        lines++;
    }
    /* Print file statistics */
    printf("\n");
    printf("Total characters = %d\n", characters);
    printf("Total words      = %d\n", words);
    printf("Total lines      = %d\n", lines);
    printf("Total tabs      = %d\n", tabs);
    /* Close files to release resources */
    fclose(file);
    return 0;
}