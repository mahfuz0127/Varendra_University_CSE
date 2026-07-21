#include<stdio.h>
int main()
{
    int days,years,months,r_days;
    printf("Enter Days : ");
    scanf("%d",&days);

    years = days / 365;
    r_days = days % 365;
    months = r_days / 30;
    r_days = r_days % 30;

    printf("\n%d Days = %d Years, %d Months, %d Days\n",days,years,months,r_days);


    return 0;
}

