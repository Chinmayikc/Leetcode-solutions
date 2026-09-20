#include <assert.h>
#include <stdio.h>

int climb_stairs(int steps) {
    int previous = 0;
    int current = 1;
    for (int step = 0; step < steps; step++) {
        int next = previous + current;
        previous = current;
        current = next;
    }
    return current;
}

int main(void) {
    assert(climb_stairs(5) == 8);
    assert(climb_stairs(1) == 1);
    puts("Climbing Stairs: 2 tests passed");
    return 0;
}
