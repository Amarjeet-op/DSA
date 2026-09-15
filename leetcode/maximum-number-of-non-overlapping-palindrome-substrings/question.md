<div align="center">

# Maximum Number of Non-overlapping Palindrome Substrings

![LeetCode](https://img.shields.io/badge/LeetCode-2472-FFA116?style=for-the-badge&logo=leetcode&logoColor=white) ![Difficulty](https://img.shields.io/badge/Difficulty-Hard-FF375F?style=for-the-badge) ![Topics](https://img.shields.io/badge/Topics-Two%20Pointers%2C%20String%2C%20Dynamic%20Programmin-6366F1?style=for-the-badge)

**[`↗ Open on LeetCode`](https://leetcode.com/problems/maximum-number-of-non-overlapping-palindrome-substrings/)** · `maximum-number-of-non-overlapping-palindrome-substrings` · `2472`

</div>

---

> **Topics:** `Two Pointers` · `String` · `Dynamic Programming` · `Greedy`

## 📝 Description

You are given a string `s` and a **positive** integer `k`.

Select a set of **non-overlapping** substrings from the string `s` that satisfy the following conditions:

	- The **length** of each substring is **at least** `k`.

	- Each substring is a **palindrome**.

Return *the **maximum** number of substrings in an optimal selection*.

A **substring** is a contiguous sequence of characters within a string.



**Example 1:**

```
Input: s = "abaccdbbd", k = 3
Output: 2
Explanation: We can select the substrings underlined in s = "abaccdbbd". Both "aba" and "dbbd" are palindromes and have a length of at least k = 3.
It can be shown that we cannot find a selection with more than two valid substrings.
```

**Example 2:**

```
Input: s = "adbcda", k = 2
Output: 0
Explanation: There is no palindrome substring of length at least 2 in the string.
```



**Constraints:**

	- `1 <= k <= s.length <= 2000`

	- `s` consists of lowercase English letters.

## 💡 Hints

<details><summary><b>Hint 1</b></summary>

Try to use dynamic programming to solve the problem.

</details>

<details><summary><b>Hint 2</b></summary>

let dp[i] be the answer for the prefix s[0…i].

</details>

<details><summary><b>Hint 3</b></summary>

The final answer to the problem will be dp[n-1]. How do you compute this dp?

</details>

---
<div align="center">

**Solution & HTML preview:** open [`question.html`](./question.html) for a fully styled, colorful view!

*Saved via LeetCode → GitHub Saver • 9/15/2026, 11:22:17 AM*

</div>
