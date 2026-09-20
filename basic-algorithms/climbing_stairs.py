"""LeetCode 70: Climbing Stairs."""
import unittest


def climb_stairs(steps):
    previous, current = 0, 1
    for _ in range(steps):
        previous, current = current, previous + current
    return current


class ClimbingStairsTests(unittest.TestCase):
    def test_typical_case(self):
        self.assertEqual(climb_stairs(5), 8)

    def test_edge_case_one_step(self):
        self.assertEqual(climb_stairs(1), 1)


if __name__ == "__main__":
    unittest.main()
