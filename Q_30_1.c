// In an array you have mix of positive and negative number in unsorted order. Write a program to find first missing positive number.
// Also go for optimized code.
// In both cases figure out the space and time complexity.

// normal code 

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int firstMissingPositive(int arr[], int n) {
    qsort(arr, n, sizeof(int), compare);

    int missing = 1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == missing) {
            missing++;
        }
    }

    return missing;
}

int main() {
    int arr[] = {3, 4, -1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("First missing positive: %d\n",
           firstMissingPositive(arr, n));

    return 0;
}
