#include <stdio.h>

int main() {
    int n;

    printf("Enter number of temperatures: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter temperatures: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n == 0) {
        printf("Longest increasing streak: 0\n");
        return 0;
    }

    int current = 1;
    int longest = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            current++;
        } else {
            current = 1;
        }

        if (current > longest) {
            longest = current;
        }
    }

    printf("Longest increasing streak: %d\n", longest);

    return 0;
}
