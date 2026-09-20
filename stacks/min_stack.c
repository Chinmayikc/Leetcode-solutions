#include <assert.h>
#include <stdio.h>

#define MAX_SIZE 10000

typedef struct {
    int values[MAX_SIZE];
    int minimums[MAX_SIZE];
    int size;
} MinStack;

void push(MinStack *stack, int value) {
    stack->values[stack->size] = value;
    stack->minimums[stack->size] = stack->size == 0 || value < stack->minimums[stack->size - 1]
        ? value : stack->minimums[stack->size - 1];
    stack->size++;
}

int pop(MinStack *stack) {
    return stack->values[--stack->size];
}

int top(const MinStack *stack) {
    return stack->values[stack->size - 1];
}

int get_min(const MinStack *stack) {
    return stack->minimums[stack->size - 1];
}

int main(void) {
    MinStack stack = {0};
    push(&stack, -2);
    push(&stack, 0);
    push(&stack, -3);
    assert(get_min(&stack) == -3);
    pop(&stack);
    assert(top(&stack) == 0 && get_min(&stack) == -2);

    MinStack duplicate_minimum = {0};
    push(&duplicate_minimum, 2);
    push(&duplicate_minimum, 2);
    pop(&duplicate_minimum);
    assert(get_min(&duplicate_minimum) == 2);
    puts("Min Stack: 2 tests passed");
    return 0;
}
