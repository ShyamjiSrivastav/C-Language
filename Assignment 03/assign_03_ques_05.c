// Write a program to print a given number without its last digit

#include<stdio.h>
int main()
{
    int num,d;
    printf("Enter a number = ");
    scanf("%d",&num);
    d=num/10;
    printf("%d without last digit is %d",num,d);
    return 0;
}