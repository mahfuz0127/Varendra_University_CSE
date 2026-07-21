#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));
    int i,ARRAY_SIZE, search_element, found = 0;
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

    printf("Enter the element to search: ");
    scanf("%d", &search_element);

    for (i = 0; i < ARRAY_SIZE; i++)
    {
        if (array[i] == search_element)
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        printf("\nElement %d found at index %d\n", search_element, i);
    }
    else
    {
        printf("\nElement %d not found in the array\n", search_element);
    }

    return 0;
}
