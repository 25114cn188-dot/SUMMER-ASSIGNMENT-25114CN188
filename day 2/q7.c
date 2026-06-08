#include <stdio.h>

int main() {
    int number, digit, product = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    while(number != 0) {
        digit = number % 10;      // Get last digit
        product = product * digit; // Multiply digit
        number = number / 10;     // Remove last digit
    }

    printf("Product of digits = %d", product);

    return 0;
}