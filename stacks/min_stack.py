"""LeetCode 155: Min Stack."""
import unittest


class MinStack:
    def __init__(self):
        self.values = []
        self.minimums = []

    def push(self, value):
        self.values.append(value)
        current_minimum = min(value, self.minimums[-1]) if self.minimums else value
        self.minimums.append(current_minimum)

    def pop(self):
        self.minimums.pop()
        return self.values.pop()

    def top(self):
        return self.values[-1]

    def get_min(self):
        return self.minimums[-1]


class MinStackTests(unittest.TestCase):
    def test_typical_case(self):
        stack = MinStack()
        for value in [-2, 0, -3]:
            stack.push(value)
        self.assertEqual(stack.get_min(), -3)
        stack.pop()
        self.assertEqual(stack.top(), 0)
        self.assertEqual(stack.get_min(), -2)

    def test_edge_case_duplicate_minimum(self):
        stack = MinStack()
        stack.push(2)
        stack.push(2)
        stack.pop()
        self.assertEqual(stack.get_min(), 2)


if __name__ == "__main__":
    unittest.main()
