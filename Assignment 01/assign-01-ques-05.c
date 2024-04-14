//Program to print the area of circle. Taking radius as input 
#include<stdio.h>
int main()
{
    float r,area;
    printf("Enter the radius of circle = ");
    scanf("%f",&r);
    area=3.14*r*r;
    printf("Area of circle %f having the radius %.2f ",area,r);
    return 0;
}