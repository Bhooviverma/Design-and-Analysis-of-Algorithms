//Write a program to shift all zero at end in an array
// 1. Write normal code

#include <stdio.h>

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = 5;

    int temp[5];
    int j = 0;

    // Copy non-zero elements
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            temp[j] = arr[i];
            j++;
        }
    }

    // Add zeros at the end
    while (j < n) {
        temp[j] = 0;
        j++;
    }

    // Print result
    for (int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}
