#include<stdio.h>
int main()
{
    int date,month,year;
    printf("Enter the Date, Month and year in dd/mm/yy formate = ");
    scanf("%d/%d/%d",&date,&month,&year);
    printf("The output formate is Day - %d, Month - %d Year - %d",date,month,year);
    return 0;

}