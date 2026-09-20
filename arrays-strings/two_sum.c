#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
     int* result = (int*)malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }

    *returnSize = 0;
    return NULL;
}

int main(void) {
    int return_size = 0;
    int numbers[] = {2, 7, 11, 15};
    int *result = twoSum(numbers, 4, 9, &return_size);
    assert(result != NULL && return_size == 2);
    assert(result[0] == 0 && result[1] == 1);
    free(result);

    int no_solution[] = {1, 2, 3};
    result = twoSum(no_solution, 3, 10, &return_size);
    assert(result == NULL && return_size == 0);

    puts("Two Sum: 2 tests passed");
    return 0;
}
