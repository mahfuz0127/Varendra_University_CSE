#include <stdio.h>

int main()
{
    char sentence[1000];
    int count[26] = {0}; // Array to store counts for each character
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Iterate through each character in the sentence
    for(int i = 0; sentence[i] != '\0'; i++)
    {
        // Increment the count for the corresponding alphabet
        if(sentence[i] >= 'A' && sentence[i] <= 'Z')
            count[sentence[i] - 'A']++;
        else if(sentence[i] >= 'a' && sentence[i] <= 'z')
            count[sentence[i] - 'a']++;
    }

    // Print the counts for each alphabet
    for(int i = 0; i < 26; i++)
    {
        if(count[i]!=0)
        printf("'%c' or '%c' appears %d times\n", 'A' + i, 'a' + i, count[i]);
    }


    return 0;
}
