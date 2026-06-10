#include <stdio.h>

int main() {
    int rows, i, j;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            // Print the current row number 'i'
            printf("%d ", i);
        }
        printf("\n");
    }
    
    return 0;
}#include <stdio.h>

int main() {
    int rows, i, j;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            // Print the current row number 'i'
            printf("%d ", i);
        }
        printf("\n");
    }
    
    return 0;
}