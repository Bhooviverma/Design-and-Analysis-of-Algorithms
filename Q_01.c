#include <stdio.h>

int main() {
    int n, digit;
    int count[10] = {0};

    printf("Enter the number: ");
    scanf("%d", &n);

    // Count frequency of each digit
    while (n > 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    // Find the missing digit
    for (digit = 0; digit <= 9; digit++) {
        if (count[digit] == 0) {
            printf("Missing digit: %d\n", digit);
            break;
        }
    }

    return 0;
}
