//Write a program to take a three digit number from the user and rotate its digit
//by one position towards right 

#include<stdio.h>

int main()
{
    int num,rot_num,first,second,third;
    printf("Enter a three digit number = ");
    scanf("%d",&num);
    third=num%10;
    num=num/10;
    second=num%10;
    first=num/10;
    

    rot_num=third*100+first*10+second;
    printf("The rotate number is = %d",rot_num);
    return 0;


}