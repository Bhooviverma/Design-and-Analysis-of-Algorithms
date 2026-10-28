//Write a program to print the longest substring without repeating a character.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int maxLen = 0, start = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    int n = strlen(str);

    for (int i = 0; i < n; i++) {
        int visited[256] = {0};
        int len = 0;

        for (int j = i; j < n; j++) {
            if (visited[(unsigned char)str[j]] == 1)
                break;

            visited[(unsigned char)str[j]] = 1;
            len++;
        }

        if (len > maxLen) {
            maxLen = len;
            start = i;
        }
    }

    printf("Longest substring: ");

    for (int i = start; i < start + maxLen; i++) {
        printf("%c", str[i]);
    }

    printf("\nLength: %d\n", maxLen);

    return 0;
}
