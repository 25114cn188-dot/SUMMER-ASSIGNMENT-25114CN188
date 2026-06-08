#include <stdio.h>

int main() {
    int number, original, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while(number != 0) {
        digit = number % 10;                 // Get last digit
        reverse = reverse * 10 + digit;     // Reverse the number
        number = number / 10;               // Remove last digit
    }

    if(original == reverse)
        printf("Palindrome number");
    else
        printf("Not a palindrome number");

    return 0;
}