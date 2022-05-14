//Problem: WAP to accept a valid month number form the user & display that
//Input: A valid month number
//Output: Display the month number

//Two ways to write the program
//Uncomment to run the program
//Method 1-- brute method
/*
#include <stdio.h>
void main() {
    int month_no, temp = 0;
    do {
        printf("Enter a valid month number: ");
        scanf("%d", &month_no);
        if(month_no < 1 || month_no > 12)
            printf("Pls enter a valid month number");
        else
            break;
        temp++;
    }while(temp!= 0);
    printf("Month number is = %d", month_no);
}
*/

//Method 2 -- efficient method
/*
#include <stdio.h>
void main() {
    int month_no;
    do {
        printf("Enter valid month number: ");
        scanf("%d", & month_no);
    }while(month_no < 1 || month_no > 12);
    printf("Valid month number is = %d", month_no);
}
*/