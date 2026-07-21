#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    srand(time(NULL));

    int i,j,row,col;
    printf("Enter row : ");
    scanf("%d",&row);
    printf("\nEnter column : ");
    scanf("%d",&col);
    int A[row][col], B[row][col], Sum[row][col];

    // Assigning Matrix value
    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            A[i][j] = rand()%17+15;
            B[i][j] = rand()%15+33;
        }
    }

    // Printing Matrix-A
    printf("\nMatrix-A\n");
    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("%d  ",A[i][j]);
        }
        printf("\n");
    }

    // Printing Matrix-B
    printf("\nMatrix-B\n");
    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("%d  ",B[i][j]);
        }
        printf("\n");
    }

    // summation
    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\nSummation of Matrix\n");
    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("%d  ",Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
