#include <stdio.h>

int main() {
    char date[20];

    printf("Enter date (dd/04/yyyy): ");
    scanf("%s", date);

    printf("%.2s-Apr-%.4s", date, date + 6);

    return 0;
}