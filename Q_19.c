// Question 19
//Write a program to check whether a substring is an anagram of main string

#include <stdio.h>
#include <string.h>

int main() {
    char mainStr[100], subStr[100];
    int freq[256] = {0};

    printf("Enter main string: ");
    scanf("%s", mainStr);

    printf("Enter substring: ");
    scanf("%s", subStr);

    if (strlen(mainStr) != strlen(subStr)) {
        printf("Not an anagram");
        return 0;
    }

    for (int i = 0; mainStr[i] != '\0'; i++) {
        freq[mainStr[i]]++;
        freq[subStr[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not an anagram");
            return 0;
        }
    }

    printf("It is an anagram");

    return 0;
}
