//Program to calculate the simple interest 
#include<stdio.h>
int main()
{
    int p;
    float r,t,si;
    printf("Enter the principal amount = ");
    scanf("%d",&p);
    printf("Enter the rate = ");
    scanf("%f",&r);
    printf("Enter the time period = ");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("Simple Interest is = %f",si);
    return 0;

}