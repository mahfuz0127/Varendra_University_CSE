#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));

    int i, j, ARRAY_SIZE, temp;
    printf("Enter array size : ");
    scanf("%d",&ARRAY_SIZE);

    int array[ARRAY_SIZE];

    for (i = 0; i < ARRAY_SIZE; i++)
    {
        array[i] = rand()%100; // here rand()%* is not fixed you can change this range as your will.
    }

    //printf("Random numbers in the array:\n");
    printf("\nRandom numbers in the array: ");
    for (i = 0; i < ARRAY_SIZE; i++)
    {
        //printf("array[%3d] = %3d\n",i,array[i]);
        printf("%d ",array[i]);
    }
    printf("\n");

    // Sorting the array in ascending order using bubble sort
    for (i = 0; i < ARRAY_SIZE - 1; i++)
    {
        for (j = 0; j < ARRAY_SIZE - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                // Swap arr[j] and arr[j+1]
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    // Displaying the sorted array
    printf("\nSorted array in ascending order: ");
    for (i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
