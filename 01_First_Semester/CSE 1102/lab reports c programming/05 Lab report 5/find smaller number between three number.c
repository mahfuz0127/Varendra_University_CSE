#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter three numbers : ");
    scanf("%d%d",&a,&b,&c);

    if(a<b && a<c)
    {
        printf("\n%d is the smallest number ",a);
    }
    else if(b<a && b<c)
    {
        printf("\n%d is the smallest number ",b);
    }
    else if(c<a && c<b)
    {

        printf("\n%d is the smallest number ",c);
    }
    else
    {
        printf("Invalid Input");
    }
}

