#include <stdio.h>

int main()
{
    int num, i;
    printf("Enter a positive integer number: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    for (i = 2; i < num/2; i++)
    {
        if (num % i == 0)
        {
            printf("\n%d is not a prime number.\n", num);
            return 0;
        }
    }
    printf("\n%d is a prime number.\n", num);

    return 0;
}




