#include <stdio.h>

int main() {
    float num1, num2, num3, average;

    // Asking for user input
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter the third number: ");
    scanf("%f", &num3);

    // Calculating the average
    average = (num1 + num2 + num3) / 3;

    // Displaying the average
    printf("The average of the three numbers is: %.2f\n", average);

    return 0;
}

