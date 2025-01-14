#include <stdio.h>
int main()
{
     // 1 foot = 30.48 centimeters
    // 1 inch = 2.54 centimeters
    // 1 foot = 12 inch

    float inches,centimeters,totalInches;
    int feet;

    // Input height in centimeters
    printf("Enter your height in centimeters: ");
    scanf("%f", &centimeters);

    // Convert centimeters to inches
    totalInches = centimeters / 2.54;

    // Convert total inches to feet and remaining inches
    feet = totalInches / 12;
    inches = totalInches - (feet * 12);

    // Output the result
    printf("\nYour height is %d feet %.0f inches.\n", feet, inches);

    return 0;
}
