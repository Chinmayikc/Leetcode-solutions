"""LeetCode 704: Binary Search."""
import unittest


def search(numbers, target):
    left, right = 0, len(numbers) - 1
    while left <= right:
        middle = (left + right) // 2
        if numbers[middle] == target:
            return middle
        if numbers[middle] < target:
            left = middle + 1
        else:
            right = middle - 1
    return -1


class BinarySearchTests(unittest.TestCase):
    def test_typical_case(self):
        self.assertEqual(search([-1, 0, 3, 5, 9, 12], 9), 4)

    def test_edge_case_empty_input(self):
        self.assertEqual(search([], 5), -1)


if __name__ == "__main__":
    unittest.main()
