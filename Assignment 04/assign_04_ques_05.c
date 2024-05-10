//Write a program to input a number from the user also input a digit. Append a
//digit in number and print the resulting number.(Example - number =234  and
//digit=9 then the resulting number is 2349)

#include<stdio.h>

int main()
{
    int num,dig;
    printf("Enter the number = ");
    scanf("%d",&num);
    printf("Enter the digit you want to append = ");
    scanf("%d",&dig);
    printf("The required result is = %d",num*10+dig);
    return 0;
}