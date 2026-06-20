#include <stdio.h>
#include <string.h>

char firstNonRepeating(char str[]) {
    int count[256] = {0};

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }

    // Find first character with frequency 1
    for (int i = 0; str[i] != '\0'; i++) {
        if (count[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }

    return '\0'; // No non-repeating character found
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    char result = firstNonRepeating(str);

    if (result != '\0')
        printf("First non-repeating character: %c\n", result);
    else
        printf("No non-repeating character found.\n");

    return 0;
}