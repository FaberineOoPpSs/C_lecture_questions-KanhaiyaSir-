//Problem: WAP to accept the radius & height of a cylender from the user & find out the volume of that
//          cylender by using function.
//Input: Radius and height of cylender
//Ouput: Volume of the cylender

#include <stdio.h>
void main() {
    float radius, height, volume;
    float vol_cyl(float, float);        //declaring the funct.
    printf("Enter the radius & height of cylender:\n");
    scanf("%f%f", &radius, &height);
    volume = vol_cyl(radius, height);   //calling the funct.
    printf("Volume of cylender is = %f", volume);
}

float vol_cyl(float r, float h) {       //defining the funct.
    return 3.14 * r * r * h;
}