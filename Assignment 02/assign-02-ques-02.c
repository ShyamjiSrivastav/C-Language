//Write a program to calculate the circumference of a circle
#include<stdio.h>
int main()
{
    float r,circum;
    printf("Enter the radius of circle = ");
    scanf("%f",&r);
    circum=2*3.14*r;
    printf("The circumference of the circle of radius %.2f = %.2f",r,circum);
    return 0;
}