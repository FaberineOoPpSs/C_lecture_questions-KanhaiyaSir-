//Problem: WAP to accept the principal amount, rate of interest and time form the user & find out simple
//          interest
//Input: Principal amount, rate of interest and time as numerical values
//Outpu: Total amount

#include <stdio.h>
void main() {
    float rate, amount, time, simpInt;
    float simple_interest(float, float, float);     //declaring the funct.
    printf("Enter principal amount, rate of interest and time:\n");
    scanf("%f%f%f", &amount, &rate, &time);
    simpInt = simple_interest(amount, rate, time); //calling the funct. 
    printf("Simple interest is = %f", simpInt);
}

float simple_interest(float a, float r, float t) {  //defining the funct.
    return (a * r * t) / 100;
}