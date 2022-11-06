//Finding Duplicates in a string

#include <stdio.h>

// ASCII Code for 'a' == 97
// Using "Hashing", aka not really hash tables
// This function will only work for lower case alphabets
// Time Complexity: O(n)
void duplicates(char * s) {

    int ht[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
        ht[s[i] - 97]++;

    for (int i = 0; i < 26; i++) {
        if (ht[i] > 1)
            printf("There are %d elements of letter %c\n", ht[i], i+97);
    }
}

int main() {
    char s[] = "findiiing";
    duplicates(s);

    return 0;
}
