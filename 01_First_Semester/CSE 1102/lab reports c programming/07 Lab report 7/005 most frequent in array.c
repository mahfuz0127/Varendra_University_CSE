// most frequent element in array

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 15

int main()
{
    int array[SIZE];
    srand(time(NULL));

    printf("Array elements : ");
    for(int i=0; i<SIZE; i++)
    {
        array[i] = rand()%8;
        printf("%d  ",array[i]);
    }
    int max_element=0, max=0,temp;

    for(int i=0; i<SIZE; i++)
    {
        temp=1;
        for(int j=i+1; j<SIZE; j++)
        {
            if(array[i]==array[j])
            {
                temp++;
            }
        }
        if(temp>max)
        {
            max = temp;
            max_element = array[i];
        }
    }
    printf("\n\nMost frequent element: %d (appears %d times)\n",max_element,max);

    return 0;
}
