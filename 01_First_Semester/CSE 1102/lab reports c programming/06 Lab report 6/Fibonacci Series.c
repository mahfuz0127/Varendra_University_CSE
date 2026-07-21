#include<stdio.h>
int main()
{
    int  term,a=-1,b=1,c,i;
    printf("Enter n-th term : ");
    scanf("%d",&term);
    printf("\nFibonacci Series : ");

    for(i=0; i<term; i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}
