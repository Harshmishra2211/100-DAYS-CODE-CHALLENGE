#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    int i, start = 0;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            if (i > start)
                printf("%c. ", toupper(name[start]));
            start = i + 1;
        }
    }

    printf("%s", name + start);

    return 0;
}