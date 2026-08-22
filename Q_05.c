#include <stdio.h>

int main() {
    int n, ones = 0, zeros = 0;
    int maxConsecutive = 0, currentConsecutive = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n;

    // Special case for 0
    if (temp == 0) {
        zeros = 1;
    }

    while (temp > 0) {
        if (temp % 2 == 1) {
            ones++;
            currentConsecutive++;

            if (currentConsecutive > maxConsecutive)
                maxConsecutive = currentConsecutive;
        } else {
            zeros++;
            currentConsecutive = 0;
        }

        temp = temp / 2;
    }

    printf("Number of 1s = %d\n", ones);
    printf("Number of 0s = %d\n", zeros);
    printf("Maximum consecutive 1s = %d\n", maxConsecutive);

    return 0;
}
