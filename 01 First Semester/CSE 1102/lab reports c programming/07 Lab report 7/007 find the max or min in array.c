#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));

    int i,ARRAY_SIZE, max, min, max_index, min_index;
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

    max = min = array[0];

    for (i = 0; i < ARRAY_SIZE; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            max_index = i;
        }
        if (array[i] < min)
        {
            min = array[i];
            min_index = i;
        }
    }

    printf("\nMaximum element in the array: %d (Index: %d)\n", max, max_index);
    printf("Minimum element in the array: %d (Index: %d)\n", min, min_index);


    return 0;
}
