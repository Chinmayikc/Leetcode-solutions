#include <assert.h>
#include <stdio.h>

int binary_search(const int values[], int length, int target) {
    int low = 0;
    int high = length - 1;

    while (low <= high) {
        int middle = low + (high - low) / 2;

        if (values[middle] == target) {
            return middle;
        }
        if (values[middle] < target) {
            low = middle + 1;
        } else {
            high = middle - 1;
        }
    }

    return -1;
}

int main(void) {
    const int sorted_values[] = {-1, 0, 3, 5, 9, 12};

    /* Typical case: the target is present. */
    assert(binary_search(sorted_values, 6, 9) == 4);

    /* Edge case: an empty array has no target. */
    assert(binary_search(NULL, 0, 5) == -1);

    puts("Binary Search: 2 tests passed");
    return 0;
}
