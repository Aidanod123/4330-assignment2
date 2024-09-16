#include <stdio.h>

int main() {
    float num1, num2, product;

    // Asking for user input
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Calculating the product
    product = num1 * num2;

    // Displaying the product
    printf("The product of %.2f and %.2f is %.2f.\n", num1, num2, product);

    return 0;
}

