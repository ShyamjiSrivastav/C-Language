//Write a program to swap values of two int variable without using third variable

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two values = ");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The swapped numbers are %d and %d",a,b);
    return 0;
}