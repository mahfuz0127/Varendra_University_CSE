#include <stdio.h>

int main()
{
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("\nLeft half pyramid pattern:\n\n");

    for (i = 0; i < rows; i++)
    {
        for (j = rows; j >= 0; j--)
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
