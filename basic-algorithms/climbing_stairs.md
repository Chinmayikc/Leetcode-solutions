# Climbing Stairs

- Difficulty: Easy
- LeetCode: https://leetcode.com/problems/climbing-stairs/
- Solution: [climbing_stairs.py](climbing_stairs.py)

## Approach

Use the Fibonacci recurrence: ways(n) = ways(n - 1) + ways(n - 2). Keep only the previous two values instead of a full table.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes and Edge Cases

One step has exactly one way. The initialization also handles the smallest valid input without a special branch.
