//  display ten fruits name

#include <stdio.h>

int main()
{
    char fruits[10][20] = {"Apple", "Banana", "Orange", "Grapes", "Watermelon", "Strawberry", "Pineapple", "Mango", "Peach", "Kiwi"};

    printf("List of fruits:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%2d. %s\n", i+1, fruits[i]);
    }

    return 0;
}
