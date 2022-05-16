//Problem: WAP to accept a positive integer value from the user and display their number of digits
//Inputs: A positive integer
//Output: Number of digits

#include <stdio.h>
void main() {
    int num, i = 0;
    printf("Enter the positive integer: ");
    scanf("%d", &num);
    while(num != 0) {

        num = num / 10;
        i++;
    }
    printf("Number of digits is: %d", i);
}