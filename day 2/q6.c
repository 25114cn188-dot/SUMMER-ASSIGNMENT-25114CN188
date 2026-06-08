#include <stdio.h>

int main() {
    int number, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    while(number != 0) {
        digit = number % 10;               // Get last digit
        reverse = reverse * 10 + digit;   // Build reversed number
        number = number / 10;             // Remove last digit
    }

    printf("Reversed number = %d", reverse);

    return 0;
}