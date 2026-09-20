#include <assert.h>
#include <stdio.h>
#include <string.h>

int is_valid(const char *expression) {
    char stack[10000];
    int top = 0;
    for (size_t index = 0; expression[index] != '\0'; index++) {
        char character = expression[index];
        if (character == '(' || character == '[' || character == '{') {
            stack[top++] = character;
        } else {
            if (top == 0) {
                return 0;
            }
            char opening = stack[--top];
            if ((character == ')' && opening != '(') ||
                (character == ']' && opening != '[') ||
                (character == '}' && opening != '{')) {
                return 0;
            }
        }
    }
    return top == 0;
}

int main(void) {
    assert(is_valid("()[]{}"));
    assert(!is_valid(")"));
    puts("Valid Parentheses: 2 tests passed");
    return 0;
}
