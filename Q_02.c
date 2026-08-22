#include <stdio.h>

int main() {
    long long num;
    int sum = 0;
    int missing;

    printf("Enter the number: ");
    scanf("%lld", &num);

    // Find sum of all digits present
    while (num > 0) {
        sum = sum + (num % 10);
        num = num / 10;
    }

    // Sum of digits from 0 to 9 = 45
    missing = 45 - sum;

    printf("Missing digit: %d\n", missing);

    return 0;
}
