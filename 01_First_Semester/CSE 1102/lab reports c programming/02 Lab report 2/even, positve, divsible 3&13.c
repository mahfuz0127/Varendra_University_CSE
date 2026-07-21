#include <stdio.h>

int main()
{
    int x;

    // Taking input from user
    printf("Enter a Number: ");
    scanf("%d", &x);

    // Checking if the number is even or odd
    if (x % 2 == 0) {
        printf("%d is Even.\n", x);
    } else {
        printf("%d is Odd.\n", x);
    }

    // Checking if the number is positive or negative
    if (x > 0) {
        printf("%d is Positive.\n", x);
    } else if (x < 0) {
        printf("%d is Negative.\n", x);
    } else {
        printf("The Number is zero.\n");
    }

    // Checking if the number is divisible by 3 and 13
    if (x % 3 == 0 && x % 13 == 0) {
        printf("%d is divisible by both 3 and 13.\n", x);
    } else {
        printf("%d is not divisible by both 3 and 13.\n", x);
    }

    return 0;
}
