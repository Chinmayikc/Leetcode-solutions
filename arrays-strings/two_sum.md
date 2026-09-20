# Two Sum

- Difficulty: Easy
- LeetCode: https://leetcode.com/problems/two-sum/
- Solution: [two_sum.py](two_sum.py)

## Approach

Scan the list once while storing each value and its index in a hash map. For every value, check whether its complement has already been seen.

## Complexity

- Time: O(n)
- Space: O(n)

## Notes and Edge Cases

Returns an empty list when no pair exists. The current index is stored only after checking the complement, so an element is not reused.
