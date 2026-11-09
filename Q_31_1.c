// Find all anagrams in the string 
// 1. Code

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

void findAnagrams(char s[], char p[]) {
    int n = strlen(s);
    int m = strlen(p);

    char sortedP[m + 1];
    strcpy(sortedP, p);
    qsort(sortedP, m, sizeof(char), compare);

    for (int i = 0; i <= n - m; i++) {
        char temp[m + 1];

        strncpy(temp, s + i, m);
        temp[m] = '\0';

        qsort(temp, m, sizeof(char), compare);

        if (strcmp(temp, sortedP) == 0) {
            printf("%d ", i);
        }
    }
}

int main() {
    char s[] = "cbaebabacd";
    char p[] = "abc";

    findAnagrams(s, p);

    return 0;
}
