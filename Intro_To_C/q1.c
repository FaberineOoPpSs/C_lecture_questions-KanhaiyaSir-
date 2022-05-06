//Problem: WAP(Write a program) to accept the length & bredth of rectangle & find out the area
//            of rectangle
//Input: Length & bredth of rectangle
//Output: Area of rectangle

#include <stdio.h>                                     //pre-processor directories
void main() {                                         //typename
    float length, breadth, area;                     //declaring variables
    printf("Enter length & bredth of rectangle: "); //prints the statement in quotes in terminal
    scanf("%f%f", &length, &breadth);              //accepts the length & bredth from terminal %f 
                                                  //specifies format of the varibales and variable is obtained using address of operator 
    area = length * breadth;                     //formula for calculating area of rectangle
    printf("Area of rectangle is: %f", area);   //prints
}