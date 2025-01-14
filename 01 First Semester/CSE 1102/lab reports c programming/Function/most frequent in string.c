#include <stdio.h>
#include <string.h>

char findMostFrequent(char *str) {
    int count[] = {0};
    int len = strlen(str);
    int maxCount = 0;
    char result;


    for (int i = 0; i < len; i++) {
        count[str[i]]++;
        if (count[str[i]] > maxCount) {
            maxCount = count[str[i]];
            result = str[i];
        }
    }
     printf("The most frequent character in the string is '%c' appears %d times\n",result,maxCount);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

     findMostFrequent(&str);

    return 0;
}
