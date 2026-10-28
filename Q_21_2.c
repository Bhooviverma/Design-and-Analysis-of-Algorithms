// Find the kth largest element in an array?
// 2. Without sorting

#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {3, 2, 1, 5, 6, 4};
    int n = 6, k = 2;

    int used[6] = {0};
    int ans = 0;

    for (int count = 0; count < k; count++) {

        int max = INT_MIN;
        int index = -1;

        for (int i = 0; i < n; i++) {
            if (!used[i] && arr[i] > max) {
                max = arr[i];
                index = i;
            }
        }

        ans = max;
        used[index] = 1;
    }

    printf("%dth largest element = %d\n", k, ans);

    return 0;
}
