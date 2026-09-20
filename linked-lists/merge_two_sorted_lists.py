"""LeetCode 21: Merge Two Sorted Lists."""
import unittest


class ListNode:
    def __init__(self, value=0, next_node=None):
        self.value = value
        self.next = next_node


def merge_two_lists(first, second):
    sentinel = ListNode()
    tail = sentinel
    while first and second:
        if first.value <= second.value:
            tail.next, first = first, first.next
        else:
            tail.next, second = second, second.next
        tail = tail.next
    tail.next = first or second
    return sentinel.next


def values_from(head):
    values = []
    while head:
        values.append(head.value)
        head = head.next
    return values


class MergeTwoSortedListsTests(unittest.TestCase):
    def test_typical_case(self):
        first = ListNode(1, ListNode(2, ListNode(4)))
        second = ListNode(1, ListNode(3, ListNode(4)))
        self.assertEqual(values_from(merge_two_lists(first, second)), [1, 1, 2, 3, 4, 4])

    def test_edge_case_two_empty_lists(self):
        self.assertIsNone(merge_two_lists(None, None))


if __name__ == "__main__":
    unittest.main()
