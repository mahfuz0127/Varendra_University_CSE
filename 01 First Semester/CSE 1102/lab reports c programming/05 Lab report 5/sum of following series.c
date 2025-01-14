#include<stdio.h>
int main()
{
    int i,n, term=2, sum=0;

    printf("Enter the number of terms : ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        sum = sum+term;
        term = term * 2;
    }

    printf("\nSum of the series : %d\n",sum);
}
