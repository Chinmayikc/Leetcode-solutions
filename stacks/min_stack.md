# Min Stack

- Difficulty: Medium
- LeetCode: https://leetcode.com/problems/min-stack/
- Solution: [min_stack.c](min_stack.c)

## Approach

Keep a second stack containing the minimum value at every depth. Push and pop both stacks together, making `get_min` constant time.

## Complexity

- Time: O(1) for each operation
- Space: O(n)

## Notes and Edge Cases

Duplicate minimum values are stored at each relevant depth, so removing one copy preserves the correct minimum.
