// A peak element is an element that is strictly greater than its neighbors. Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.
//Constraints: The complexity of your code should be O(logn)

#include <stdio.h>

int findPeakElement(int nums[], int n) {
    int low = 0;
    int high = n - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] > nums[mid + 1]) {
            // Peak exists on left side, possibly at mid
            high = mid;
        }
        else {
            // Peak exists on right side
            low = mid + 1;
        }
    }

    return low;
}

int main() {
    int nums[] = {1, 2, 3, 1};
    int n = sizeof(nums) / sizeof(nums[0]);

    int index = findPeakElement(nums, n);

    printf("Peak element: %d\n", nums[index]);
    printf("Peak index: %d\n", index);

    return 0;
}
