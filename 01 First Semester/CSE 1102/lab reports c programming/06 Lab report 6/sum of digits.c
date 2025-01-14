// Write a C program to find the sum of digits of a number.

#include<stdio.h>
int main()
{
    int x,r,s=0;
    printf("Enter a number : ");
    scanf("%d",&x);

    while(x!=0)
    {
        r=x%10;
        x/=10;
        s+=r;
    }
    printf("\nSum of the entered number is %d",s);


    getch();
}
