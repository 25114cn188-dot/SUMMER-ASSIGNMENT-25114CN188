#include <stdio.h>

int main() {
    int n, temp, rem, i;
    int sum = 0, fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp > 0) {
        rem = temp % 10;

        // Find factorial of digit
        fact = 1;
        for(i = 1; i <= rem; i++) {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    // Check strong number
    if(sum == n) {
        printf("%d is a Strong Number.\n", n);
    } else {
        printf("%d is not a Strong Number.\n", n);
    }

    return 0;
}