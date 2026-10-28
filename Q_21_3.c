//Find the kth largest element in an array?
// 3. Figure out any optimal code for this problem

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {

    int pivot = arr[high];
    int i = low;

    for (int j = low; j < high; j++) {

        if (arr[j] <= pivot) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }

    swap(&arr[i], &arr[high]);

    return i;
}

int quickSelect(int arr[], int low, int high, int target) {

    if (low <= high) {

        int p = partition(arr, low, high);

        if (p == target)
            return arr[p];

        else if (p > target)
            return quickSelect(arr, low, p - 1, target);

        else
            return quickSelect(arr, p + 1, high, target);
    }

    return -1;
}

int main() {

    int arr[] = {3, 2, 1, 5, 6, 4};
    int n = 6;
    int k = 2;

    int target = n - k;

    int result = quickSelect(arr, 0, n - 1, target);

    printf("%dth largest element = %d\n", k, result);

    return 0;
}
