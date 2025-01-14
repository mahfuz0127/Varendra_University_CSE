#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));

    int i,ARRAY_SIZE;
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
        printf("%d  ",array[i]);
    }
    printf("\n");

    return 0;
}
