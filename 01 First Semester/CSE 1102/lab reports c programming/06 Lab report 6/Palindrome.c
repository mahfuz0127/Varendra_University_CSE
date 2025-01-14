// Write a C program to check whether a number is Palindrome or not.

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
    if(s==y)
    {
        printf("\n%d is a Palindrome Number.",s);
    }
    else
    {
        printf("\n%d is not a Palindrome Number.",s);
    }
    getch();
}
