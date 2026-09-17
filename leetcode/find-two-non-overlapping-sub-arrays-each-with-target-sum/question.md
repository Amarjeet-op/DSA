<div align="center">

# Find Two Non-overlapping Sub-arrays Each With Target Sum

![LeetCode](https://img.shields.io/badge/LeetCode-1477-FFA116?style=for-the-badge&logo=leetcode&logoColor=white) ![Difficulty](https://img.shields.io/badge/Difficulty-Medium-FFC01E?style=for-the-badge) ![Topics](https://img.shields.io/badge/Topics-Array%2C%20Hash%20Table%2C%20Binary%20Search%2C%20Dynami-6366F1?style=for-the-badge)

**[`↗ Open on LeetCode`](https://leetcode.com/problems/find-two-non-overlapping-sub-arrays-each-with-target-sum/)** · `find-two-non-overlapping-sub-arrays-each-with-target-sum` · `1477`

</div>

---

> **Topics:** `Array` · `Hash Table` · `Binary Search` · `Dynamic Programming` · `Sliding Window`

## 📝 Description

You are given an array of integers `arr` and an integer `target`.

You have to find **two non-overlapping sub-arrays** of `arr` each with a sum equal `target`. There can be multiple answers so you have to find an answer where the sum of the lengths of the two sub-arrays is **minimum**.

Return *the minimum sum of the lengths* of the two required sub-arrays, or return `-1` if you cannot find such two sub-arrays.



**Example 1:**

```
Input: arr = [3,2,2,4,3], target = 3
Output: 2
Explanation: Only two sub-arrays have sum = 3 ([3] and [3]). The sum of their lengths is 2.
```

**Example 2:**

```
Input: arr = [7,3,4,7], target = 7
Output: 2
Explanation: Although we have three non-overlapping sub-arrays of sum = 7 ([7], [3,4] and [7]), but we will choose the first and third sub-arrays as the sum of their lengths is 2.
```

**Example 3:**

```
Input: arr = [4,3,2,6,2,3,4], target = 6
Output: -1
Explanation: We have only one sub-array of sum = 6.
```



**Constraints:**

	- `1 <= arr.length <= 10^5`

	- `1 <= arr[i] <= 1000`

	- `1 <= target <= 10^8`

## 💡 Hints

<details><summary><b>Hint 1</b></summary>

Let's create two arrays prefix and suffix where prefix[i] is the minimum length of sub-array ends before i and has sum = k, suffix[i] is the minimum length of sub-array starting at or after i and has sum = k.

</details>

<details><summary><b>Hint 2</b></summary>

The answer we are searching for is min(prefix[i] + suffix[i]) for all values of i from 0 to n-1 where n == arr.length.

</details>

<details><summary><b>Hint 3</b></summary>

If you are still stuck with how to build prefix and suffix, you can store for each index i the length of the sub-array starts at i and has sum = k or infinity otherwise, and you can use it to build both prefix and suffix.

</details>

---
<div align="center">

**Solution & HTML preview:** open [`question.html`](./question.html) for a fully styled, colorful view!

*Saved via LeetCode → GitHub Saver • 9/17/2026, 9:49:53 AM*

</div>
