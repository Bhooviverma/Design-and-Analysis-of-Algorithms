//Longest Palindromic Substring: Find the longest contiguous palindrome within a string.

#include <stdio.h>
#include <string.h>

int isPalindrome(char s[], int start, int end) {
    while (start < end) {
        if (s[start] != s[end])
            return 0;

        start++;
        end--;
    }
    return 1;
}

void longestPalindrome(char s[]) {
    int n = strlen(s);
    int maxLen = 0;
    int startIndex = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {

            if (isPalindrome(s, i, j)) {
                int len = j - i + 1;

                if (len > maxLen) {
                    maxLen = len;
                    startIndex = i;
                }
            }
        }
    }

    printf("Longest Palindromic Substring: ");

    for (int i = startIndex; i < startIndex + maxLen; i++)
        printf("%c", s[i]);

    printf("\n");
}

int main() {
    char s[] = "babad";

    longestPalindrome(s);

    return 0;
}
