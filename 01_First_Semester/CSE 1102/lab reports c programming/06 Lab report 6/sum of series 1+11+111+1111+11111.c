#include <stdio.h>

int main()
{
    int i,term, multiplier,sum=0,num=0;
    printf("Enter number of terms: ");
    scanf("%d", &term);
    printf("\nEnter the multiplier: ");
    scanf("%d", &multiplier);
    printf("\nThe series is : ");

    for (i = 1; i <= term; i++)
    {
        num = num * 10 + multiplier;
        sum += num;
        printf("%d",num);

        if(i<term)
        {
            printf("+");
        }
    }

    printf("\n\nThe sum of the series is: %d\n", sum);

    return 0;
}
