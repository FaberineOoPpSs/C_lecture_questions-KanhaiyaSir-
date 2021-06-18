//Wap to accept the name of source and destination file from the user and coy th
//at information from source to destination file
#include <stdio.h>
#include <stdlib.h>
void main()
{
	FILE *fptr1, *fptr2;
	char ch, fname[20];
	printf("Enter the source file name:\n");
	scanf("%s", fname);
	fptr1 = fopen(fname, "r");
	if (fptr1 == NULL)
	{
		printf("No file found");	
		exit(1);
	}
	printf("Enter the destination file name:\n");
	scanf("%s",fname);
	fptr2 = fopen(fname, "w");
	while(1)
	{
		ch = getc(fptr1);
		if (ch == EOF)
		{
			break;
		}
		putc(ch, fptr2);
	}
	printf("File copied to destination");
	fclose(fptr1);
	fclose(fptr2);
}
