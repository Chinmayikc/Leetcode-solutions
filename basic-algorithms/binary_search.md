# Binary Search

- Difficulty: Easy
- LeetCode: https://leetcode.com/problems/binary-search/
- Solution: [binary_search.py](binary_search.py)

## Approach

Maintain a search interval in the sorted input. Compare the middle value with the target and discard the half that cannot contain it.

## Complexity

- Time: O(log n)
- Space: O(1)

## Notes and Edge Cases

An empty list returns -1. The loop condition includes a single-element interval.
