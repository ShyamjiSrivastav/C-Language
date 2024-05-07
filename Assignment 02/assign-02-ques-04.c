//Write a program to calculate the volume of cubiod
#include<stdio.h>
int main()
{
    int l,b,h,vol;
    printf("Enter the length of cubiod = ");
    scanf("%d",&l);
    printf("Enter the width of cubiod = ");
    scanf("%d",&b);
    printf("Enter the height of cubiod = ");
    scanf("%d",&h);
    vol=l*b*h;
    printf("Volume of cubiod = %d",vol);
    return 0;
}