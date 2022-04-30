// Wap to accept the name of a file from the user and display the no. of upper case vowels and lower case vowels
// available in that file
#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fptr;
    char ch;
    int upper_count = 0, lower_count = 0;
    fptr = fopen("file.txt", "r");
    if (fptr == NULL)
    {
        printf("Cannot open the file");
        exit(1);
    }
    while(1)
    {
        ch = getc(fptr);
        if (ch ==  EOF)
        {
            break;
        }
        else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            lower_count = lower_count + 1;
        }
        else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            upper_count = upper_count + 1;
        }
    }
    printf("No. of upper case vowels: %d \n No. of lower case vowels: %d\n",upper_count,lower_count);
    fclose(fptr);
}