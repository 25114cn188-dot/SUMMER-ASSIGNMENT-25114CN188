#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print characters
        for (int k = 0; k < i; k++) {
            printf("%c ", 'A' + k);
        }

        printf("\n");
    }

    return 0;
}