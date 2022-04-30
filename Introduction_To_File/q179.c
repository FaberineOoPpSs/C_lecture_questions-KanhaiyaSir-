//Wap to display contents of the file file.txt to the user
#include <stdio.h>
void main()
{
    FILE *fptr;
    char ch;
    fptr = fopen("file.txt", "r");
    printf("Contents of the file are: \n\n");
    while(1)
    {
        ch = getc(fptr);
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
    }
    fclose(fptr);
}