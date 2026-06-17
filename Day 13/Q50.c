#include <stdio.h>

int main() {
    int arr[10], i, sum = 0;
    float average;

    // Input array elements
    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Calculate average
    average = (float)sum / 10;

    // Display result
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}