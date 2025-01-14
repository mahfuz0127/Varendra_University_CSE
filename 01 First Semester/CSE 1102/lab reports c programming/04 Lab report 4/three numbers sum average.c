#include <stdio.h>
int main()
{
    int i,num;
    float sum,average;

    for (i = 0; i < 3; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);
        printf("\n");
        sum = sum + num; // Calculating sum
    }

    average = sum / 3;

    printf("Sum = %.2f\n", sum);
    printf("\nAverage = %.2f\n", average);

    return 0;
}
