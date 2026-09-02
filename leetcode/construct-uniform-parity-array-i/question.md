<div align="center">

# Construct Uniform Parity Array I

![LeetCode](https://img.shields.io/badge/LeetCode-3875-FFA116?style=for-the-badge&logo=leetcode&logoColor=white) ![Difficulty](https://img.shields.io/badge/Difficulty-Easy-00AF9B?style=for-the-badge) ![Topics](https://img.shields.io/badge/Topics-Array%2C%20Math-6366F1?style=for-the-badge)

**[`↗ Open on LeetCode`](https://leetcode.com/problems/construct-uniform-parity-array-i/)** · `construct-uniform-parity-array-i` · `3875`

</div>

---

> **Topics:** `Array` · `Math`

## 📝 Description

You are given an array `nums1` of `n` **distinct** integers.

You want to construct another array `nums2` of length `n` such that the elements in `nums2` are either **all odd or all even**.

For each index `i`, you must choose **exactly one** of the following (in any order):

	- `nums2[i] = nums1[i]`

	- `nums2[i] = nums1[i] - nums1[j]`, for an index `j != i`

Return `true` if it is possible to construct such an array, otherwise, return `false`.



**Example 1:**

**Input:** nums1 = [2,3]

**Output:** true

**Explanation:**

	- Choose `nums2[0] = nums1[0] - nums1[1] = 2 - 3 = -1`.

	- Choose `nums2[1] = nums1[1] = 3`.

	- `nums2 = [-1, 3]`, and both elements are odd. Thus, the answer is `true`​​​​​​​.

**Example 2:**

**Input:** nums1 = [4,6]

**Output:** true

**Explanation:**​​​​​​​

	- Choose `nums2[0] = nums1[0] = 4`.

	- Choose `nums2[1] = nums1[1] = 6`.

	- `nums2 = [4, 6]`, and all elements are even. Thus, the answer is `true`.



**Constraints:**

	- `1 <= n == nums1.length <= 100`

	- `1 <= nums1[i] <= 100`

	- `nums1` consists of distinct integers.

## 💡 Hints

<details><summary><b>Hint 1</b></summary>

There is only one possible answer.

</details>

---
<div align="center">

**Solution & HTML preview:** open [`question.html`](./question.html) for a fully styled, colorful view!

*Saved via LeetCode → GitHub Saver • 9/3/2026, 12:48:47 AM*

</div>
