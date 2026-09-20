# Two Sum

- Difficulty: Easy
- LeetCode: https://leetcode.com/problems/two-sum/
- Solution: [two_sum.c](two_sum.c)

## Approach

Check every pair of values and return the indices of the first pair whose sum equals the target.

## Complexity

- Time: O(n^2)
- Space: O(n)

## Notes and Edge Cases

Returns an empty list when no pair exists. The current index is stored only after checking the complement, so an element is not reused.
