<div align="center">

# Count Commas in Range II

![LeetCode](https://img.shields.io/badge/LeetCode-3871-FFA116?style=for-the-badge&logo=leetcode&logoColor=white) ![Difficulty](https://img.shields.io/badge/Difficulty-Medium-FFC01E?style=for-the-badge) ![Topics](https://img.shields.io/badge/Topics-Math-6366F1?style=for-the-badge)

**[`↗ Open on LeetCode`](https://leetcode.com/problems/count-commas-in-range-ii/)** · `count-commas-in-range-ii` · `3871`

</div>

---

> **Topics:** `Math`

## 📝 Description

You are given an integer `n`.

Return the **total** number of commas used when writing all integers from `[1, n]` (inclusive) in **standard** number formatting.

In **standard** formatting:

	- A comma is inserted after **every three** digits from the right.

	- Numbers with **fewer** than 4 digits contain no commas.



**Example 1:**

**Input:** n = 1002

**Output:** 3

**Explanation:**

The numbers `"1,000"`, `"1,001"`, and `"1,002"` each contain one comma, giving a total of 3.

**Example 2:**

**Input:** n = 998

**Output:** 0

**Explanation:**

**​​​​​​​**All numbers from 1 to 998 have fewer than four digits. Therefore, no commas are used.



**Constraints:**

	- `1 <= n <= 10^15`

## 💡 Hints

<details><summary><b>Hint 1</b></summary>

Count the numbers in each comma group (1-3 digits, 4-6 digits, 7-9 digits, ...) and multiply by how many commas each number in that group has.

</details>

---
<div align="center">

**Solution & HTML preview:** open [`question.html`](./question.html) for a fully styled, colorful view!

*Saved via LeetCode → GitHub Saver • 9/9/2026, 10:41:57 AM*

</div>
