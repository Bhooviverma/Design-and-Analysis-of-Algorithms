#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n], ans[n];

    printf("Enter %d elements of array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Square each element and insert it at correct position
    for (int i = 0; i < n; i++) {
        int square = a[i] * a[i];
        int j = i - 1;

        while (j >= 0 && ans[j] > square) {
            ans[j + 1] = ans[j];
            j--;
        }

        ans[j + 1] = square;
    }

    printf("Squared array in sorted order: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", ans[i]);
    }

    return 0;
}
