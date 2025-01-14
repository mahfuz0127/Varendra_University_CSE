#include <stdio.h>

int main()
{
    int term;
    float sum = 0.0;

    printf("Enter n-th terms: ");
    scanf("%d", &term);
    printf("\nThe series is : 1");

    for (int i = 1; i <= term; i++)
    {
        if(i>1)
            printf("1/%d",i);

        if(i<term)
            printf(" + ");

        sum += 1.0 / i;
    }

    printf("\n\nThe sum of the series is: %.3f\n", sum);

    return 0;
}
