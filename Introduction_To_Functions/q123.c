//Problem: WAP to accept a positive integer value from the user to display their sum of digits by
//          using function.
//Input: Positive integer value
//Output: Sum of digits of the integer 

#include <stdio.h>
void main() {
    int num, sum;
    int sum_digits(int);                                 //declaring the funct.
    printf("Enter the +ve integer:\n");
    scanf("%d", &num);
    printf("Sum of digits = %d", sum_digits(num));      //Calling the funct.
}
int sum_digits(int num) {                               //defining the funct.
    int sum = 0, i = num, d;
    while(i != 0) {
        d = i % 10;
        sum += d;
        i = i / 10;
    }
    return sum;
}