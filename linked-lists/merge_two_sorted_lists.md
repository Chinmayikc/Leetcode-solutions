# Merge Two Sorted Lists

- Difficulty: Easy
- LeetCode: https://leetcode.com/problems/merge-two-sorted-lists/
- Solution: [merge_two_sorted_lists.py](merge_two_sorted_lists.py)

## Approach

Use a sentinel node and repeatedly attach the smaller current node from the two lists. Append the remaining list after one input is exhausted.

## Complexity

- Time: O(n + m)
- Space: O(1) auxiliary space

## Notes and Edge Cases

If both lists are empty, the result is `None`. Equal values are taken from the first list first without affecting sorted order.
