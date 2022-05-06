//Problem: WAP to accept the marks of 3 subjects of a student from the user & display their total marks
//          & average marks
//Input: Marks of 3 subjects
//Ouput: Total marks & average marks

#include <stdio.h>
void main() {
    int m1, m2, m3, total_marks;
    float avg_marks;
    
    printf("Enter the marks of subject1, subject2 & subject3: ");
    scanf("%d%d%d", &m1, &m2, &m3);

    total_marks = m1 + m2 + m3;
    avg_marks = total_marks / 3;

    printf("The total marks is: %d\n", total_marks);
    printf("The average marks is: %f", avg_marks);
}