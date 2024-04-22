#include <stdio.h>

int biggest3() {
    float num1, num2, num3;

    // Input three numbers from user
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    // Assuming num1 is the largest initially
    float largest = num1;

    // Checking if num2 is greater than current largest
    if (num2 > largest) {
        largest = num2;
    }

    // Checking if num3 is greater than current largest
    if (num3 > largest) {
        largest = num3;
    }

    // Displaying the largest number
    printf("Largest number is %.2f\n", largest);

    // return 0;
}

