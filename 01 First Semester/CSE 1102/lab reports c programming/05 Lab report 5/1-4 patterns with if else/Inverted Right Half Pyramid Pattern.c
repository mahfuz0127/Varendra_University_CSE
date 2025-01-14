#include <stdio.h>
int main()
{
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("\nInverted Right half pyramid pattern:\n\n");

    for (i = rows; i >= 1; i--)
    {
        for (j = 1; j <= rows; j++)
        {
            if (j <= i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}

