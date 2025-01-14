#include<stdio.h>
int main()
{
    int i,num1,num2,sum=0;

    printf("Enter starting range : ");
    scanf("%d",&num1);

    printf("\nEnter ending range : ");
    scanf("%d",&num2);


    for(i=num1; i<=num2; i++)
    {
        sum= sum + i;


    }
     printf("\nSum between (%d - %d) : %d",num1,num2,sum);


}
