#include <assert.h>
#include <stdio.h>
#include <string.h>

int is_anagram(const char *first, const char *second) {
    if (strlen(first) != strlen(second)) {
        return 0;
    }
    int counts[256] = {0};
    for (size_t index = 0; first[index] != '\0'; index++) {
        counts[(unsigned char) first[index]]++;
        counts[(unsigned char) second[index]]--;
    }
    for (int index = 0; index < 256; index++) {
        if (counts[index] != 0) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    assert(is_anagram("anagram", "nagaram"));
    assert(!is_anagram("a", ""));
    puts("Valid Anagram: 2 tests passed");
    return 0;
}
