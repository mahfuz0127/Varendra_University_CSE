#include <stdio.h>
int main()
{
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("\nInverted Left half pyramid pattern:\n\n");
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows; j++)
        {
            if (j >= i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
