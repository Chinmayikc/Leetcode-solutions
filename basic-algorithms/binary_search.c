#include <assert.h>
#include <stdio.h>

int search(const int numbers[], int size, int target) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (numbers[middle] == target) {
            return middle;
        }
        if (numbers[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    return -1;
}

int main(void) {
    const int typical[] = {-1, 0, 3, 5, 9, 12};
    assert(search(typical, 6, 9) == 4);
    assert(search(NULL, 0, 5) == -1);
    puts("Binary Search: 2 tests passed");
    return 0;
}
