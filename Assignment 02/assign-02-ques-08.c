/* Program to input three character from the user and display character with
their corresponding ASCII code */
#include<stdio.h>
int main()
{
    char a,b,c;
    printf("Enter three characters = ");
    scanf("%c %c %c",&a,&b,&c);
    printf("The ASCII code for %c is %d, %c is %d and %c is %d",a,a,b,b,c,c);
    return 0;
}