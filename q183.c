//Wap to accept the name of a file from the user and display and number of
//spaces, tabs and nuwline character
#include <stdio.h>
#include <stdlib.h>
void main()
{
	FILE *fptr;
	int ch,s = 0, t = 0, n = 0;
	char fname[20];
	printf("Enter the file name:\n");
	scanf("%s",fname);
	fptr = fopen(fname, "r");
	if (fptr == NULL)
	{
		exit(1);
	}
	while(1)
	{
		ch = fgetc(fptr);
		if (ch == EOF)
		{
			break;
		}
		else if(ch == ' ')
		{
			s = s + 1;
		}
		else if(ch == '\t')
		{
			t = t + 1;
		}
		else if(ch =='\n')
		{
			n = n + 1;
		}
	}
	printf("No of spaces = %d\nNo of tabs = %d\nNo of newline = %d",s,t,n);
	fclose(fptr);
		
}
