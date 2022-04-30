// Problem: WAP to read the records from the file std.txt & display the record that has the maximum average marks.
// Input: Reads from std.txt file record containing roll no, name, marks1 & marks2
// Output: Display the record of student with maximum average marks.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main() {
    FILE *fptr;
    int ch, rollno, trollno, tm1, tm2, m1, m2;
    char tname[20], name[20];
    float avg_marks, least = 0;

    fptr = fopen("std_q188.txt", "r");

    if(fptr == NULL){
        printf("Error opening the file!");
        exit(1);
    }
    printf("Rollno      Name        Average Marks\n");
    while(1) {
        ch = fscanf(fptr, "%d %s %d %d", &trollno, tname, &tm1, &tm2);
        avg_marks = (tm1 + tm2) / 2.0;
        if(ch == EOF)
            break;
        else if(avg_marks > least) {
            least = avg_marks;
            m1 = tm1;
            m2 = tm2;
            rollno = trollno;
            strcpy(name, tname);
        }
        printf("%d\t\t%s\t\t%d", rollno, name, least);
        fclose(fptr);
    }    

}