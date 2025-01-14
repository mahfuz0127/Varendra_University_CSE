#include<stdio.h>
int main()
{
    int i,num1,num2,EvenSum=0,OddSum=0;

    printf("Enter starting range : ");
    scanf("%d",&num1);

    printf("\nEnter ending range : ");
    scanf("%d",&num2);


    for(i=num1; i<=num2; i++)
    {
        if(i%2==0)
        {
            EvenSum = EvenSum + i;
        }
        else
            OddSum = OddSum + i;

    }
     printf("\nEven Sum between (%d - %d) : %d",num1,num2,EvenSum);
     printf("\n\nOdd Sum between (%d - %d) : %d\n",num1,num2,OddSum);

}
