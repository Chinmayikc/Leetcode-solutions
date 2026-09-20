"""LeetCode 206: Reverse Linked List."""
import unittest


class ListNode:
    def __init__(self, value=0, next_node=None):
        self.value = value
        self.next = next_node


def reverse_list(head):
    previous = None
    current = head
    while current:
        next_node = current.next
        current.next = previous
        previous, current = current, next_node
    return previous


def values_from(head):
    values = []
    while head:
        values.append(head.value)
        head = head.next
    return values


class ReverseLinkedListTests(unittest.TestCase):
    def test_typical_case(self):
        head = ListNode(1, ListNode(2, ListNode(3)))
        self.assertEqual(values_from(reverse_list(head)), [3, 2, 1])

    def test_edge_case_empty_list(self):
        self.assertIsNone(reverse_list(None))


if __name__ == "__main__":
    unittest.main()
