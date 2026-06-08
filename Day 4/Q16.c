#include <stdio.h>

int main() {
    int start, end, number, original, remainder, result;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for(number = start; number <= end; number++) {

        original = number;
        result = 0;

        while(original != 0) {
            remainder = original % 10;
            result = result + (remainder * remainder * remainder);
            original = original / 10;
        }

        if(result == number)
            printf("%d ", number);
    }

    return 0;
}