#include <stdio.h>

int main() {
    int arr[10], i;
    int largest, smallest;

    // Input array elements
    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume first element is largest and smallest
    largest = smallest = arr[0];

    // Find largest and smallest
    for(i = 1; i < 10; i++) {
        if(arr[i] > largest)
            largest = arr[i];

        if(arr[i] < smallest)
            smallest = arr[i];
    }

    // Display results
    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}