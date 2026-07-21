// area of circle triangle rectangle with function

#include <stdio.h>

float calculateCircleArea(float radius) {
    return 3.14 * radius * radius;
}

float calculateTriangleArea(float base, float height) {
    return 0.5 * base * height;
}

float calculateRectangleArea(float length, float width) {
    return length * width;
}

int main() {
    int choice;
    float radius, base, height, length, width, area;

    printf("\nChoose a shape to calculate the area:\n\n");
    printf("1. Circle\n");
    printf("2. Triangle\n");
    printf("3. Rectangle\n\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("\nEnter the radius of the circle: ");
            scanf("%f", &radius);
            area = calculateCircleArea(radius);
            printf("The area of the circle is: %.2f\n\n", area);
            break;
        case 2:
            printf("\nEnter the base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = calculateTriangleArea(base, height);
            printf("The area of the triangle is: %.2f\n\n", area);
            break;
        case 3:
            printf("\nEnter the length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            area = calculateRectangleArea(length, width);
            printf("The area of the rectangle is: %.2f\n\n", area);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
