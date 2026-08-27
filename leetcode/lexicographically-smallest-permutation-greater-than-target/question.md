<div align="center">

# Lexicographically Smallest Permutation Greater Than Target

![LeetCode](https://img.shields.io/badge/LeetCode-3720-FFA116?style=for-the-badge&logo=leetcode&logoColor=white) ![Difficulty](https://img.shields.io/badge/Difficulty-Medium-FFC01E?style=for-the-badge) ![Topics](https://img.shields.io/badge/Topics-Hash%20Table%2C%20String%2C%20Greedy%2C%20Counting%2C%20En-6366F1?style=for-the-badge)

**[`↗ Open on LeetCode`](https://leetcode.com/problems/lexicographically-smallest-permutation-greater-than-target/)** · `lexicographically-smallest-permutation-greater-than-target` · `3720`

</div>

---

> **Topics:** `Hash Table` · `String` · `Greedy` · `Counting` · `Enumeration`

## 📝 Description

You are given two strings `s` and `target`, both having length `n`, consisting of lowercase English letters.

Return the **lexicographically smallest permutation** of `s` that is **strictly** greater than `target`. If no permutation of `s` is lexicographically strictly greater than `target`, return an empty string.

A string `a` is **lexicographically strictly greater **than a string `b` (of the same length) if in the first position where `a` and `b` differ, string `a` has a letter that appears later in the alphabet than the corresponding letter in `b`.



**Example 1:**

**Input:** s = "abc", target = "bba"

**Output:** "bca"

**Explanation:**

	- The permutations of `s` (in lexicographical order) are `"abc"`, `"acb"`, `"bac"`, `"bca"`, `"cab"`, and `"cba"`.

	- The lexicographically smallest permutation that is strictly greater than `target` is `"bca"`.

**Example 2:**

**Input:** s = "leet", target = "code"

**Output:** "eelt"

**Explanation:**

	- The permutations of `s` (in lexicographical order) are `"eelt"`, `"eetl"`, `"elet"`, `"elte"`, `"etel"`, `"etle"`, `"leet"`, `"lete"`, `"ltee"`, `"teel"`, `"tele"`, and `"tlee"`.

	- The lexicographically smallest permutation that is strictly greater than `target` is `"eelt"`.

**Example 3:**

**Input:** s = "baba", target = "bbaa"

**Output:** ""

**Explanation:**

	- The permutations of `s` (in lexicographical order) are `"aabb"`, `"abab"`, `"abba"`, `"baab"`, `"baba"`, and `"bbaa"`.

	- None of them is lexicographically strictly greater than `target`. Therefore, the answer is `""`.



**Constraints:**

	- `1 <= s.length == target.length <= 300`

	- `s` and `target` consist of only lowercase English letters.

## 💡 Hints

<details><summary><b>Hint 1</b></summary>

Maintain frequency counts of `s`.

</details>

<details><summary><b>Hint 2</b></summary>

Walk left-to-right; if equal to `target[i]` is possible, take it and continue.

</details>

<details><summary><b>Hint 3</b></summary>

If not, try the smallest letter strictly greater than `target[i]`.

</details>

<details><summary><b>Hint 4</b></summary>

If neither, backtrack left to the most recent index where you matched `target` and try to bump there.

</details>

---
<div align="center">

**Solution & HTML preview:** open [`question.html`](./question.html) for a fully styled, colorful view!

*Saved via LeetCode → GitHub Saver • 8/27/2026, 11:07:57 AM*

</div>
