#include <stdio.h>
void main()
{
    FILE *fptr;
    int ch, i = 0;
    char fname[20];
    printf("Enter the file name: \n");
    scanf("%s", fname);
    fptr = fopen("file.txt", "r");
    while(1)
    {
        ch = fgetc(fptr);
        if (ch == EOF)
        {
            break;
        }
        else if((char)ch >= 'A' && (char)ch <= 'Z')
        {
            i = i + 1;
        }
    }
    printf("Number of upper case alphabets = %d", i);
    fclose(fptr);
}