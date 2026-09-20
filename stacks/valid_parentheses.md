# Valid Parentheses

- Difficulty: Easy
- LeetCode: https://leetcode.com/problems/valid-parentheses/
- Solution: [valid_parentheses.c](valid_parentheses.c)

## Approach

Push opening brackets onto a stack. For each closing bracket, require the most recent opening bracket to be its matching pair.

## Complexity

- Time: O(n)
- Space: O(n)

## Notes and Edge Cases

A closing bracket with an empty stack is invalid. The final stack must be empty for the expression to be valid.
