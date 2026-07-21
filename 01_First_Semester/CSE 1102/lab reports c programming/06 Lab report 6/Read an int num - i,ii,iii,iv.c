#include <stdio.h>

int main()
{
    int num, originalNum, remainder, count = 0, sum = 0, reverse = 0;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    originalNum = num;

    // Counting digits, calculating sum and reversing the number
    while (num != 0)
    {
        remainder = num % 10;
        num /= 10;
        count++;
        sum += remainder;
        reverse = reverse * 10 + remainder;
    }

    printf("\nCount of digits: %d\n", count);
    printf("Sum of digits: %d\n", sum);
    printf("Reverse of the number: %d\n", reverse);

    // Checking for palindrome
    if (originalNum == reverse)
        printf("The number %d is a palindrome number.\n",originalNum);
    else
        printf("The number %d is not a palindrome number.\n",originalNum);

    return 0;
}
