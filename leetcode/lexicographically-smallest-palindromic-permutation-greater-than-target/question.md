<div align="center">

# Lexicographically Smallest Palindromic Permutation Greater Than Target

![LeetCode](https://img.shields.io/badge/LeetCode-3734-FFA116?style=for-the-badge&logo=leetcode&logoColor=white) ![Difficulty](https://img.shields.io/badge/Difficulty-Hard-FF375F?style=for-the-badge) ![Topics](https://img.shields.io/badge/Topics-Two%20Pointers%2C%20String%2C%20Enumeration-6366F1?style=for-the-badge)

**[`↗ Open on LeetCode`](https://leetcode.com/problems/lexicographically-smallest-palindromic-permutation-greater-than-target/)** · `lexicographically-smallest-palindromic-permutation-greater-than-target` · `3734`

</div>

---

> **Topics:** `Two Pointers` · `String` · `Enumeration`

## 📝 Description

You are given two strings `s` and `target`, each of length `n`, consisting of lowercase English letters.

Return the **lexicographically smallest string** that is **both** a **palindromic permutation** of `s` and **strictly** greater than `target`. If no such permutation exists, return an empty string.



**Example 1:**

**Input:** s = "baba", target = "abba"

**Output:** "baab"

**Explanation:**

	- The palindromic permutations of `s` (in lexicographical order) are `"abba"` and `"baab"`.

	- The lexicographically smallest permutation that is strictly greater than `target` is `"baab"`.

**Example 2:**

**Input:** s = "baba", target = "bbaa"

**Output:** ""

**Explanation:**

	- The palindromic permutations of `s` (in lexicographical order) are `"abba"` and `"baab"`.

	- None of them is lexicographically strictly greater than `target`. Therefore, the answer is `""`.

**Example 3:**

**Input:** s = "abc", target = "abb"

**Output:** ""

**Explanation:**

`s` has no palindromic permutations. Therefore, the answer is `""`.

**Example 4:**

**Input:** s = "aac", target = "abb"

**Output:** "aca"

**Explanation:**

	- The only palindromic permutation of `s` is `"aca"`.

	- `"aca"` is strictly greater than `target`. Therefore, the answer is `"aca"`.



**Constraints:**

	- `1 <= n == s.length == target.length <= 300`

	- `s` and `target` consist of only lowercase English letters.

## 💡 Hints

<details><summary><b>Hint 1</b></summary>

A palindromic permutation exists only if at most one character has an odd count (for odd-length strings) or all counts are even (for even-length strings).

</details>

<details><summary><b>Hint 2</b></summary>

Focus on constructing the first half of the palindrome. The second half is determined by mirroring.

</details>

<details><summary><b>Hint 3</b></summary>

To be lexicographically greater than target, the first half must be greater than or equal to target's first half, with careful handling of the middle character for odd-length strings.

</details>

<details><summary><b>Hint 4</b></summary>

Use a backtracking approach or greedy selection for each position in the first half, trying the smallest available character that can still produce a valid palindrome.

</details>

<details><summary><b>Hint 5</b></summary>

After building the first half, mirror it (and add the middle character if needed) to form the full palindrome and verify it is strictly greater than target.

</details>

---
<div align="center">

**Solution & HTML preview:** open [`question.html`](./question.html) for a fully styled, colorful view!

*Saved via LeetCode → GitHub Saver • 8/28/2026, 3:07:42 PM*

</div>
