//Program to input a character from user and print its ASCII code
#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character = ");
    scanf("%c",&c);
    printf("The ASCII code of '%c' is %d",c,c);
    return 0;
}