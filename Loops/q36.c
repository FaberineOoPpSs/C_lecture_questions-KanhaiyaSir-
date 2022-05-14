//Problem: WAP to dipaly the series of natural numbers b/w numbers given by users
//Input: Start value & end value b/w which natural numbers has to be printed
//Output: Natural numbers eg. 1 to 5: 1, 2, 3, 4, 5

#include <stdio.h>
void main() {
    int start_num, end_num, inc;
    inc = start_num;
    printf("Enter starting & value: ");
    scanf("%d%d", &start_num, &end_num);
    do {
        printf("%d", inc);
        inc++;
    }while(inc <= end_num);
}