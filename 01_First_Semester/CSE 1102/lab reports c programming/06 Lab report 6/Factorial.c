#include<stdio.h>
int main()
{
    int fac,i,s=1;
    printf("Enter a number : ");
    scanf("%d",&fac);

    for(i=1; i<=fac; i++)
    {
        s=s*i;
    }
    printf("\nFactorial of %d is %d ",fac,s);

}
