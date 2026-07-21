#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));

    int ARRAY_SIZE, i, j, temp;

    printf("Enter array size: ");
    scanf("%d", &ARRAY_SIZE);

    int array[ARRAY_SIZE];

    printf("\nElements in the array: ");
    for (i = 0; i < ARRAY_SIZE; i++)
    {
        array[i]=rand()%100;
    }

    // Bubble sort to sort the array
    for (i = 0; i < ARRAY_SIZE - 1; i++)
    {
        for (j = 0; j < ARRAY_SIZE - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                // Swap elements if they are in the wrong order
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("\nSecond Maximum Element: %d\n", array[ARRAY_SIZE - 2]);
    printf("\nSecond Minimum Element: %d\n", array[1]);

    return 0;
}
