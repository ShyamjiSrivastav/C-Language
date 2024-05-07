//Write a program to calculate average of three numbers given by user
#include<stdio.h>
int main()
{
    float first,second,third;
    float avg;
    printf("Enter first number = ");
    scanf("%f",&first);
    printf("Enter second number = ");
    scanf("%f",&second);
    printf("Enter third number = ");
    scanf("%f",&third);
    avg=(first+second+third)/3;
    printf("Average of three is = %f",avg);
    return 0;
}