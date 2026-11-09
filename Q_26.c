// Study and implement the Dutch national flag algorithm.
// Identify 2-3 case study where it is applicable

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void dutchFlag(int arr[], int n) {
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high) {

        if (arr[mid] == 0) {
            swap(&arr[low], &arr[mid]);
            low++;
            mid++;
        }

        else if (arr[mid] == 1) {
            mid++;
        }

        else {
            swap(&arr[mid], &arr[high]);
            high--;
        }
    }
}

int main() {
    int arr[] = {2, 0, 2, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    dutchFlag(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

// 3 Case Studies / Applications
// 1. Task Priority Management
// 2. Student Result Classification
// 3. Quick Sort Partitioning
