#include <stdio.h>

int main() {
    int n, i, j, isSymmetric = 1;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter the matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(a[i][j] != a[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if(!isSymmetric)
            break;
    }

    if(isSymmetric)
        printf("The matrix is Symmetric.\n");
    else
        printf("The matrix is Not Symmetric.\n");

    return 0;
}