#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int findMostFrequent(int arr[], int size)
{
    int maxCount = 0;
    int maxElement = 0;

    for (int i = 0; i < size; i++) {
        int count =1;
        for (int j = i+1; j < size; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    printf("\n\nThe most frequent element in the array is %d appears %d times\n",maxElement,maxCount);
}

int main()
{

    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    srand(time(NULL));
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        arr[i]=rand()%8;
        printf("%4d",arr[i]);
    }

    findMostFrequent(arr, size);

    return 0;
}
