#include <stdio.h>

int main() {
    int number, original, remainder, result = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while(original != 0) {
        remainder = original % 10;
        result = result + (remainder * remainder * remainder);
        original = original / 10;
    }

    if(result == number)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}