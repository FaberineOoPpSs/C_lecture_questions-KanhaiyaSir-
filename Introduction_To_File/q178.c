//Wap to accept some text form the user and store that text in a file file.txt
#include <stdio.h>
void main()
{
    FILE *fptr;
    char ch;
    fptr = fopen("std_q188.txt", "w");
    printf("Enter some text: \n");
    while(1)
    {
        ch = getchar();
        if (ch == EOF)
        {
            break;
        }
        fputc(ch, fptr);
    }
    fclose(fptr);
}