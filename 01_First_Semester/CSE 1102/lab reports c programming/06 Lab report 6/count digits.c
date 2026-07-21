// Write a C program to count digits of a number

#include<stdio.h>
int main()
{
    int count = 0, num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num>=0 && num<=9)
    {
        printf("\nNumber of digits: 1\n");
        return 0;
    }

    while (num != 0)
    {
        num /= 10;
        count++;
    }

    printf("\nNumber of digits: %d\n", count);

    getch();
}
