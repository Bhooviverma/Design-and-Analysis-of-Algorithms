// Find all anagrams in the string 
// 2. Optimized code

#include <stdio.h>
#include <string.h>

void findAnagrams(char s[], char p[]) {
    int n = strlen(s);
    int m = strlen(p);

    if (m > n)
        return;

    int pFreq[26] = {0};
    int windowFreq[26] = {0};

    // Frequency of pattern
    for (int i = 0; i < m; i++) {
        pFreq[p[i] - 'a']++;
        windowFreq[s[i] - 'a']++;
    }

    for (int i = 0; i <= n - m; i++) {

        // Compare frequencies
        int same = 1;

        for (int j = 0; j < 26; j++) {
            if (pFreq[j] != windowFreq[j]) {
                same = 0;
                break;
            }
        }

        if (same)
            printf("%d ", i);

        // Slide the window
        if (i + m < n) {
            windowFreq[s[i] - 'a']--;       // remove old
            windowFreq[s[i + m] - 'a']++;   // add new
        }
    }
}

int main() {
    char s[] = "cbaebabacd";
    char p[] = "abc";

    findAnagrams(s, p);

    return 0;
}
