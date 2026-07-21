#include <stdio.h>
#include <string.h>

int main()
{
    char str[100],  reversedstr[100];

    printf("Enter a string: ");
    gets(str);

    strcpy(reversedstr, str);
    strrev(reversedstr);

    printf("Reversed string: %s\n", reversedstr);

    // Checking if the reversed string is equal to the original string
    if (strcmp(str, reversedstr) == 0)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }


    /*char str[100], reverse;

    printf("Enter a string: ");
    scanf("%s", str);

    strrev(str);

    reverse = str;

    printf("\nReversed string: %s\n", str);

    strcmp(str, reverse);


    if (strcmp)
    {
        printf("\nThe string is a palindrome.\n");
    }
    else
    {
        printf("\nThe string is not a palindrome.\n");
    }*/

    return 0;
}
