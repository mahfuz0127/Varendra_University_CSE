#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));

    int i, ARRAY_SIZE, evenSum=0, OddSum=0;
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

    for(i=0; i<ARRAY_SIZE; i++)
    {
        if(array[i]%2==0)
        {
            evenSum += array[i];
        }
        else
        {
            OddSum += array[i];
        }
    }
    printf("\nEvenSum of array elements : %d\n",evenSum);
    printf("\nOddSum of array elements : %d\n",OddSum);


    return 0;
}
