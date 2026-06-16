#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print numbers
        for (int k = 1; k <= i; k++) {
            printf("%d ", k);
        }

        printf("\n");
    }

    return 0;
}