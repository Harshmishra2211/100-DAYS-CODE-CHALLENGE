#include <stdio.h>

int main() {
    char str[100];
    int i, count[26] = {0};

    printf("Enter a string: ");
    scanf("%99s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (count[str[i] - 'a'] == 1) {
                printf("First repeating lowercase alphabet: %c", str[i]);
                return 0;
            }
            count[str[i] - 'a']++;
        }
    }

    printf("No repeating lowercase alphabet found.");

    return 0;
}