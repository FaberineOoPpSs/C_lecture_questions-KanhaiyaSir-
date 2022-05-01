//Problem: WAP to accept the radius of the circle from the user & find out the area of the circle.
//Input: Radius of circle
//Output: Area of circle
#include <stdio.h>
void main() {
    float radius, area;
    float area_circle(float);   //declaring the funct
    printf("Enter the radius of circle:\n");
    scanf("%f", &radius);
    area = area_circle(radius); // calling funct.
    printf("Area of circle = %f", area);
}

float area_circle(float r) {    //definition of funct.
    float a;
    a = 3.14 * r * r;
    return(a);
}
