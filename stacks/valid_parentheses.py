"""LeetCode 20: Valid Parentheses."""
import unittest


def is_valid(expression):
    pairs = {")": "(", "]": "[", "}": "{"
    }
    opening = set(pairs.values())
    stack = []
    for character in expression:
        if character in opening:
            stack.append(character)
        elif not stack or stack.pop() != pairs.get(character):
            return False
    return not stack


class ValidParenthesesTests(unittest.TestCase):
    def test_typical_case(self):
        self.assertTrue(is_valid("()[]{}"))

    def test_edge_case_unmatched_closing_bracket(self):
        self.assertFalse(is_valid(")"))


if __name__ == "__main__":
    unittest.main()
