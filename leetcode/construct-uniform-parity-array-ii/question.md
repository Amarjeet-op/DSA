<div align="center">

# Construct Uniform Parity Array II

![LeetCode](https://img.shields.io/badge/LeetCode-3876-FFA116?style=for-the-badge&logo=leetcode&logoColor=white) ![Difficulty](https://img.shields.io/badge/Difficulty-Medium-FFC01E?style=for-the-badge) ![Topics](https://img.shields.io/badge/Topics-Array%2C%20Math-6366F1?style=for-the-badge)

**[`↗ Open on LeetCode`](https://leetcode.com/problems/construct-uniform-parity-array-ii/)** · `construct-uniform-parity-array-ii` · `3876`

</div>

---

> **Topics:** `Array` · `Math`

## 📝 Description

You are given an array `nums1` of `n` **distinct** integers.

You want to construct another array `nums2` of length `n` such that the elements in `nums2` are either **all odd or all even**.

For each index `i`, you must choose **exactly one** of the following (in any order):

	- `nums2[i] = nums1[i]`​​​​​​​

	- `nums2[i] = nums1[i] - nums1[j]`, for an index `j != i`, such that `nums1[i] - nums1[j] >= 1`

Return `true` if it is possible to construct such an array, otherwise return `false`.



**Example 1:**

**Input:** nums1 = [1,4,7]

**Output:** true

**Explanation:**​​​​​​​​​​​​​​

	- Set `nums2[0] = nums1[0] = 1`.

	- Set `nums2[1] = nums1[1] - nums1[0] = 4 - 1 = 3`.

	- Set `nums2[2] = nums1[2] = 7`.

	- `nums2 = [1, 3, 7]`, and all elements are odd. Thus, the answer is `true`.

**Example 2:**

**Input:** nums1 = [2,3]

**Output:** false

**Explanation:**

It is not possible to construct `nums2` such that all elements have the same parity. Thus, the answer is `false`.

**Example 3:**

**Input:** nums1 = [4,6]

**Output:** true

**Explanation:**

	- Set `nums2[0] = nums1[0] = 4`.

	- Set `nums2[1] = nums1[1] = 6`.

	- `nums2 = [4, 6]`, and all elements are even. Thus, the answer is `true`.



**Constraints:**

	- `1 <= n == nums1.length <= 10^5`

	- `1 <= nums1[i] <= 10^9`

	- `nums1` consists of distinct integers.

## 💡 Hints

<details><summary><b>Hint 1</b></summary>

Try fixing the parity to either all even or all odd.

</details>

<details><summary><b>Hint 2</b></summary>

Use the smallest odd/even element if a subtraction is needed to match the chosen parity.

</details>

---
<div align="center">

**Solution & HTML preview:** open [`question.html`](./question.html) for a fully styled, colorful view!

*Saved via LeetCode → GitHub Saver • 9/3/2026, 9:52:58 AM*

</div>
