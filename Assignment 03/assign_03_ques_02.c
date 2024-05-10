//Write a program to calculate size of a real constant

#include<stdio.h>
int main()
{
    float r;
    int x;
    printf("Enter the any real constant = ");
    scanf("%f",&r);
    x=sizeof(r);
    printf("The size of %f is %d is ",r,x);
    return 0;
}