#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gpassword(int length, char password[])
{
    char lower[] = "abcdefghijklmnopqrstuvwxyz";
    char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char digits[] = "0123456789";
    char special[] = "!@#$%^&*()-_=+[]{}|;:',.<>/?";

    srand(time(0));

    password[0] = lower[rand() % 26];
    password[1] = upper[rand() % 26];
    password[2] = digits[rand() % 10];
    password[3] = special[rand() % 31];

    for (int i = 4; i < length; i++) {
        int choice = rand() % 4;
        switch (choice) {
        case 0:
            password[i] = lower[rand() % 26];
            break;
        case 1:
            password[i] = digits[rand() % 10];
            break;
        case 2:
            password[i] = special[rand() % 31];
            break;
        case 3:
            password[i] = upper[rand() % 26];
            break;
        }
    }
    password[length] = '\0';
}

int main()
{
    int length;
    printf("\nN: ");
    scanf("%d", &length);

    if (length < 6) {
        printf("Password length must be at least 6.\n");
        return 1;
    }

    char password[length + 1];
    gpassword(length, password);

    printf("\nPassword = %s\n", password);

    return 0;
}
