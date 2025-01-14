#include<stdio.h>
int main()
{
    int num,count=0;

    printf("Enter an integer number : ");
    scanf("%d",&num);

    printf("Factors of %d : ",num);

    for(int i = 1;i<=num; i++)
    {
        if(num % i==0)
        {
            printf("%d ",i);
            count++;
        }
    }

    printf("\nNumber of factors : %d\n",count);
}
