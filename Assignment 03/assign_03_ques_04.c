// Write a program to print the unit digit of given number 

#include<stdio.h>
int main()
{
    int num,r;
    printf("Enter a number = ");
    scanf("%d",&num);
    r=num%10;
    printf("The unit digit of %d is %d",num,r);
    return 0;
}