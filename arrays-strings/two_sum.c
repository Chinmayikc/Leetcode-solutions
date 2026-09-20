#include <assert.h>
#include <stdio.h>

int *two_sum(const int numbers[], int size, int target, int result[2]) {
    for (int first = 0; first < size; first++) {
        for (int second = first + 1; second < size; second++) {
            if (numbers[first] + numbers[second] == target) {
                result[0] = first;
                result[1] = second;
                return result;
            }
        }
    }
    return NULL;
}

int main(void) {
    int result[2];
    const int typical[] = {2, 7, 11, 15};
    assert(two_sum(typical, 4, 9, result) != NULL);
    assert(result[0] == 0 && result[1] == 1);

    const int no_solution[] = {1, 2, 3};
    assert(two_sum(no_solution, 3, 10, result) == NULL);
    puts("Two Sum: 2 tests passed");
    return 0;
}
