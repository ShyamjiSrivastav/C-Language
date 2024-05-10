//Write a program to swap values of two int variable

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two values = ");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("Swapped values are %d and %d",a,b);
    return 0;
}