//Write a program to calculate size of a character constant.

#include<stdio.h>
int main()
{
    char ch;
    int x;
    printf("Enter any character constant = ");
    scanf("%c",&ch);
    x=sizeof(ch);
    printf("The size of the %c is %d",ch,x);
    return 0;
}