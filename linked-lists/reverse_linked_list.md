# Reverse Linked List

- Difficulty: Easy
- LeetCode: https://leetcode.com/problems/reverse-linked-list/
- Solution: [reverse_linked_list.py](reverse_linked_list.py)

## Approach

Iterate through the list and redirect each node's next pointer to the previous node while preserving the original next node.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes and Edge Cases

An empty list returns `None`. A one-node list is unchanged.
