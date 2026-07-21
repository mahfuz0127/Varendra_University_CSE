#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));

    int ARRAY_SIZE, i, j, prime, sum=0;
    printf("Enter array size : ");
    scanf("%d",&ARRAY_SIZE);

    int array[ARRAY_SIZE];

    for (i = 0; i < ARRAY_SIZE; i++)
    {
        array[i] = rand()%50; // here rand()%* is not fixed you can change this range as your will.
    }

    //printf("Random numbers in the array:\n");
    printf("\nRandom numbers in the array: ");
    for (i = 0; i < ARRAY_SIZE; i++)
    {
        //printf("array[%3d] = %3d\n",i,array[i]);
        printf("%d  ",array[i]);
    }
    printf("\n\n");

    printf("Prime numbers are : ");
    for (i = 0; i < ARRAY_SIZE; i++)
    {
        prime = 1;
        for (j = 2; j <= array[i]/2; j++)
        {
            if (array[i] % j == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime && array[i] > 1)
        {
            printf("%d ",array[i]);
            sum += array[i];
        }
    }
    printf("\n\n");

    printf("Sum of prime numbers in the array: %d\n", sum);

    return 0;
}
