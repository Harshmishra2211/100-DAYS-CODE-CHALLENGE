#include <stdio.h>

int main() {
    int n, x;
    int total, leftSum, rightSum;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    total = n * (n + 1) / 2;

    for (x = 1; x <= n; x++) {
        leftSum = x * (x + 1) / 2;
        rightSum = total - (x * (x - 1) / 2);

        if (leftSum == rightSum) {
            printf("Pivot integer = %d\n", x);
            return 0;
        }
    }

    printf("Pivot integer = -1\n");

    return 0;
}
