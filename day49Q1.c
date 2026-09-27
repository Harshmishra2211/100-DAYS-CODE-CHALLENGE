#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    int i;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Initials: ");

    for (i = 0; name[i] != '\0'; i++) {
        if (i == 0 && name[i] != ' ')
            printf("%c", toupper(name[i]));

        else if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\n')
            printf("%c", toupper(name[i + 1]));
    }

    return 0;
}