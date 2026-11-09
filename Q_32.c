// Find unique triplets in an array whose sum is 0.
// Example : array is 
// 2 0 3 -2 -1 0 1
// Output is -1 0 1
  
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void threeSum(int arr[], int n) {
    qsort(arr, n, sizeof(int), compare);

    for (int i = 0; i < n - 2; i++) {

        // Skip duplicate first elements
        if (i > 0 && arr[i] == arr[i - 1])
            continue;

        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];

            if (sum == 0) {
                printf("%d %d %d\n",
                       arr[i], arr[left], arr[right]);

                left++;
                right--;

                // Skip duplicates
                while (left < right &&
                       arr[left] == arr[left - 1])
                    left++;

                while (left < right &&
                       arr[right] == arr[right + 1])
                    right--;
            }
            else if (sum < 0) {
                left++;
            }
            else {
                right--;
            }
        }
    }
}

int main() {
    int arr[] = {2, 0, 3, -2, -1, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    threeSum(arr, n);

    return 0;
}
