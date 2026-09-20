# LeetCode Solutions

**Name:** chinmayi KC  
**Roll number:** R25EF063  
**Activity:** Solve, test, document, and version-control eight LeetCode problems across arrays and strings, basic algorithms, stacks, and linked lists.

## Table of Contents

- [Arrays and Strings](#arrays-and-strings)
  - [Two Sum](arrays-strings/two_sum.md)
  - [Valid Anagram](arrays-strings/valid_anagram.md)
- [Basic Algorithms](#basic-algorithms)
  - [Binary Search](basic-algorithms/binary_search.md)
  - [Climbing Stairs](basic-algorithms/climbing_stairs.md)
- [Stacks](#stacks)
  - [Valid Parentheses](stacks/valid_parentheses.md)
  - [Min Stack](stacks/min_stack.md)
- [Linked Lists](#linked-lists)
  - [Reverse Linked List](linked-lists/reverse_linked_list.md)
  - [Merge Two Sorted Lists](linked-lists/merge_two_sorted_lists.md)
- [Progress Tracker](PROGRESS.md)
- [Submission Evidence](screenshots/README.md)

## Arrays and Strings

Solutions: [Two Sum](arrays-strings/two_sum.c) and [Valid Anagram](arrays-strings/valid_anagram.c).

## Basic Algorithms

Solutions: [Binary Search](basic-algorithms/binary_search.c) and [Climbing Stairs](basic-algorithms/climbing_stairs.c).

## Stacks

Solutions: [Valid Parentheses](stacks/valid_parentheses.c) and [Min Stack](stacks/min_stack.c).

## Linked Lists

Solutions: [Reverse Linked List](linked-lists/reverse_linked_list.c) and [Merge Two Sorted Lists](linked-lists/merge_two_sorted_lists.c).

## Local Verification

Each C file contains two assertions: one typical case and one edge case. Compile and run all solutions from the repository root with:

```powershell
$build = Join-Path $PWD '.build'; New-Item -ItemType Directory -Force $build | Out-Null
Get-ChildItem -Recurse -Filter *.c | ForEach-Object { $exe = Join-Path $build $_.BaseName; gcc -std=c11 -Wall -Wextra -pedantic $_.FullName -o $exe; & $exe }
```

## GitHub

Repository name: `leetcode-solutions`

Repository URL: https://github.com/Chinmayikc/Leetcode-solutions
