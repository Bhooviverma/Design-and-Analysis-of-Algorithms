//Given a string s, find the length of the longest substring without duplicate characters.

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int max = 0;

    printf("Enter string: ");
    scanf("%s", s);

    int n = strlen(s);

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = i; j < n; j++) {

            int duplicate = 0;

            // Check if s[j] already appeared
            for (int k = i; k < j; k++) {
                if (s[k] == s[j]) {
                    duplicate = 1;
                    break;
                }
            }

            if (duplicate)
                break;

            count++;

            if (count > max)
                max = count;
        }
    }

    printf("Length of longest substring = %d", max);

    return 0;
}
