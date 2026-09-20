#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

bool isAnagram(char *first, char *second) {
    int counts[256] = {0};
    for (int index = 0; first[index] != '\0'; index++) {
        counts[(unsigned char) first[index]]++;
    }
    for (int index = 0; second[index] != '\0'; index++) {
        counts[(unsigned char) second[index]]--;
    }
    for (int index = 0; index < 256; index++) {
        if (counts[index] != 0) {
            return false;
        }
    }
    return true;
}

int main(void) {
    assert(isAnagram("anagram", "nagaram"));
    assert(!isAnagram("a", ""));
    puts("Valid Anagram: 2 tests passed");
    return 0;
}
