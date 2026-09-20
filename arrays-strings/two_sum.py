"""LeetCode 1: Two Sum."""
import unittest


def two_sum(numbers, target):
    seen = {}
    for index, value in enumerate(numbers):
        complement = target - value
        if complement in seen:
            return [seen[complement], index]
        seen[value] = index
    return []


class TwoSumTests(unittest.TestCase):
    def test_typical_case(self):
        self.assertEqual(two_sum([2, 7, 11, 15], 9), [0, 1])

    def test_edge_case_no_solution(self):
        self.assertEqual(two_sum([1, 2, 3], 10), [])


if __name__ == "__main__":
    unittest.main()
