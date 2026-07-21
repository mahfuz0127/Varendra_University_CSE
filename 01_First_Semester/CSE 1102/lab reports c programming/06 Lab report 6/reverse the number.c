// Write a C program to reverse the number.

#include<stdio.h>
int main()
{
    int x,y,r,s=0;
    printf("Enter a number : ");
    scanf("%d",&x);
    y=x;
    while(x!=0)
    {
        r=x%10;
        x/=10;
        s=(s*10)+r;
    }
    printf("Reversed number is %d",s);

    getch();
}

