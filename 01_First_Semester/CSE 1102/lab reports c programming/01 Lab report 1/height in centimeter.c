#include <stdio.h>

// 1 foot = 30.48 centimeters
// 1 inch = 2.54 centimeters
// 1 foot = 12 inch

int main() {
    int feet, inches;

    // Input height in feet and inches
    printf("Enter your height in feet : ");
    scanf("%d", &feet);
    printf("Enter your height in inches : ");
    scanf("%d", &inches);

    // Convert height to centimeters-
    double totalInches = feet * 12 + inches;
    double centimeters = totalInches * 2.54;

    // Output the result
    printf("\nYour height is %.2f centimeters.\n", centimeters);

    return 0;
}
