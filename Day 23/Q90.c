#include <stdio.h>

char firstRepeating(char str[]) {
    int visited[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        if (visited[(unsigned char)str[i]] == 1) {
            return str[i];
        }
        visited[(unsigned char)str[i]] = 1;
    }

    return '\0'; // No repeating character found
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    char result = firstRepeating(str);

    if (result != '\0')
        printf("First repeating character: %c\n", result);
    else
        printf("No repeating character found.\n");

    return 0;
}