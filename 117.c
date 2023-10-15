#include <stdio.h>

int main() {
    int side1, side2, side3;

    // Get user input
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    // Check for valid sides (sum of any two sides should be greater than the third side)
    if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2) {
        // Check for equilateral
        if (side1 == side2 && side2 == side3) {
            printf("It is an equilateral triangle.\n");
        }
        // Check for isosceles
        else if (side1 == side2 || side2 == side3 || side1 == side3) {
            printf("It is an isosceles triangle.\n");
        }
        // If none of the above, it's scalene
        else {
            printf("It is a scalene triangle.\n");
        }
    } else {
        printf("Invalid input. The sides do not form a valid triangle.\n");
    }

    return 0;
}