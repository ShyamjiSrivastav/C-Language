//Program to calculate the area of rectangle. Data given by users
#include<stdio.h>
int main()
{
    float l,b;
    printf("Enter the length of rectangle = ");
    scanf("%f",&l);
    printf("Enter the breath of rectangle = ");
    scanf("%f",&b);
    printf("Area of rectangle = %.2f",l*b);
    return 0;
}