// Write a program to shift all zero at end in an array
// 2. Identify and understand best optimal code

#include <stdio.h>

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = 5;

    int j = 0;

    for (int i = 0; i < n; i++) {

        if (arr[i] != 0) {

            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            j++;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
