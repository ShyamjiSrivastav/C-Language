//Write a program to input a three digit number and display the sum of the digits.

#include<stdio.h>
int main()
{
    int num,r,sum=0,num1;
    printf("Enter three digits number = ");
    scanf("%d",&num);
    num1=num;
    while(num!=0)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;
    }
    printf("The sum of the digits of %d is %d",num1,sum);
    return 0;
}