"""LeetCode 242: Valid Anagram."""
import unittest


def is_anagram(first, second):
    if len(first) != len(second):
        return False
    counts = {}
    for character in first:
        counts[character] = counts.get(character, 0) + 1
    for character in second:
        if character not in counts:
            return False
        counts[character] -= 1
        if counts[character] < 0:
            return False
    return True


class ValidAnagramTests(unittest.TestCase):
    def test_typical_case(self):
        self.assertTrue(is_anagram("anagram", "nagaram"))

    def test_edge_case_different_lengths(self):
        self.assertFalse(is_anagram("a", ""))


if __name__ == "__main__":
    unittest.main()
