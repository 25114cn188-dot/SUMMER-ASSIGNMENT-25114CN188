#include <stdio.h>

int findMissing(int arr[], int size, int n) {
    int totalSum = n * (n + 1) / 2;
    int arraySum = 0;

    for (int i = 0; i < size; i++) {
        arraySum += arr[i];
    }

    return totalSum - arraySum;
}

int main() {
    int arr[] = {1, 2, 3, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = 6;

    printf("Missing number is: %d\n", findMissing(arr, size, n));

    return 0;
}