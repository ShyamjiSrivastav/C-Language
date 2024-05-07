/*Program to input an ASCII code from user and display character corresponding
to ASCII code */
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the ASCII code = ");
    scanf("%d",&a);
    printf("Character for ASCII code %d is '%c'",a,a);
    return 0;
}