#include <stdio.h>
#include <string.h>

void findLongestWord(char str[]) {
    int length = strlen(str);
    int maxLength = 0;
    int start = 0;
    int end = 0;
    int currentLength = 0;
    int currentStart = 0;

    for (int i = 0; i <= length; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            currentLength = i - currentStart;

            if (currentLength > maxLength) {
                maxLength = currentLength;
                start = currentStart;
                end = i - 1;
            }

            currentStart = i + 1;
        }
    }

    printf("The longest word in the string is: ");
    for (int i = start; i <= end; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline character
    str[strcspn(str, "\n")] = '\0';

    findLongestWord(str);

    return 0;
}
