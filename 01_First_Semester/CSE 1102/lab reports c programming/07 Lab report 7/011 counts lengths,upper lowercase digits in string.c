#include <stdio.h>

int main()
{
    char str[100];
    int i, upper = 0, lower = 0, digit = 0, space=0, length=0;

    // Input string
    printf("Enter a sentence:");
    gets(str);

    // fgets(str, sizeof(str), stdin);
    // str[strcspn(str, "\n")] = '\0';

    // Calculating length of the string
    for (i = 0; str[i]!='\0'; i++)
    {
        // Counting uppercase letters
        if (str[i] >= 'A' && str[i] <= 'Z')
            upper++;
        // Counting lowercase letters
        else if (str[i] >= 'a' && str[i] <= 'z')
            lower++;
        // Counting digits
        else if (str[i] >= '0' && str[i] <= '9')
            digit++;
        // Counting special charc
        else if(str[i] == 32)
            space++;
    }

    // Output results
    printf("\nLength of the string: %d\n", i);
    printf("\nUppercase letters count: %d\n", upper);
    printf("\nLowercase letters count: %d\n", lower);
    printf("\nDigits count: %d\n", digit);
    printf("\nSpace: %d\n", space);

    return 0;
}
