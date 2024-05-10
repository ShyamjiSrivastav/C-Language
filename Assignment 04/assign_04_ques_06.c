//Assume the price of 1 USD is INR 84.23. Write a program to take the amount in 
//INR and convert in USD.

#include<stdio.h>

int main()
{
    float usd,inr;
    printf("Enter amount in INR = ");
    scanf("%f",&inr);
    usd=1/84.23*inr;
    printf("The amount in USD is %.2fusd",usd);
    return 0;
}