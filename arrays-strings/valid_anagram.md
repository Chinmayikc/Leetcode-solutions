# Valid Anagram

- Difficulty: Easy
- LeetCode: https://leetcode.com/problems/valid-anagram/
- Solution: [valid_anagram.py](valid_anagram.py)

## Approach

Count characters in the first string, then decrement the counts while reading the second string. Any missing character, negative count, or length mismatch means the strings are not anagrams.

## Complexity

- Time: O(n)
- Space: O(k), where k is the number of distinct characters.

## Notes and Edge Cases

Different-length strings immediately return false. Empty strings are valid anagrams of each other.
