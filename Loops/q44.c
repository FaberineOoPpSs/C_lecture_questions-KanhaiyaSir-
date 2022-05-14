//Problem: WAP to accept a positive integer value from the user and display there most significant digit
//Input: A positive integer
//Output: Most significant digit of that integer
//eg 85: 8 is the most significant digit
//   1753: 1 is the most significant digit

#include <stdio.h>
void main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    while(num >= 10)
        num = num / 10;
    printf("The most significant digit is: %d", num);
}