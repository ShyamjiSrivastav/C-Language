/*Write a program to ask user about the cost price and selling price of banana per 
dozen.Calculate the profit or loss earned upon selling 25 bananas.*/
#include<stdio.h>
int main()
{
    float cp,sp;
    float cp_25,sp_25,pro_los;
    printf("Enter the Cost price of banana per dozen = ");
    scanf("%f",&cp);
    printf("Enter the selling price of banana per dozen = ");
    scanf("%f",&sp);
    cp_25=cp/12*25;
    sp_25=sp/12*25;
    pro_los=sp_25-cp_25;
    printf("The profit or loss = %.2f",pro_los);
    return 0;

}