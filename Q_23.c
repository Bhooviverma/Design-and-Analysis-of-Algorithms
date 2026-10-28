// Implementation of bucket sort algorithm

#include <stdio.h>

int main() {
    int arr[] = {29, 25, 3, 49, 9, 37, 21, 43};
    int n = sizeof(arr) / sizeof(arr[0]);

    int bucket[5][10] = {0};
    int count[5] = {0};

    // Put elements into buckets
    for (int i = 0; i < n; i++) {
        int index = arr[i] / 10;

        bucket[index][count[index]] = arr[i];
        count[index]++;
    }

    // Sort each bucket using insertion sort
    for (int i = 0; i < 5; i++) {
        for (int j = 1; j < count[i]; j++) {
            int key = bucket[i][j];
            int k = j - 1;

            while (k >= 0 && bucket[i][k] > key) {
                bucket[i][k + 1] = bucket[i][k];
                k--;
            }

            bucket[i][k + 1] = key;
        }
    }

    // Combine all buckets
    int k = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < count[i]; j++) {
            arr[k++] = bucket[i][j];
        }
    }

    printf("Sorted array: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
