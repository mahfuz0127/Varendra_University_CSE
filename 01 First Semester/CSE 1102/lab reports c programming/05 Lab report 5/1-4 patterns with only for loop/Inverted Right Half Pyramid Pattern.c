#include <stdio.h>
int main()
{
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("\nInverted Right half pyramid pattern:\n\n");

    for (i = 0; i < rows; i++)
    {

        for (j = 0; j < rows - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

