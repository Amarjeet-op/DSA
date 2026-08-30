<div align="center">

# Removing Minimum and Maximum From Array

![LeetCode](https://img.shields.io/badge/LeetCode-2091-FFA116?style=for-the-badge&logo=leetcode&logoColor=white) ![Difficulty](https://img.shields.io/badge/Difficulty-Medium-FFC01E?style=for-the-badge) ![Topics](https://img.shields.io/badge/Topics-Array%2C%20Greedy-6366F1?style=for-the-badge)

**[`↗ Open on LeetCode`](https://leetcode.com/problems/removing-minimum-and-maximum-from-array/)** · `removing-minimum-and-maximum-from-array` · `2091`

</div>

---

> **Topics:** `Array` · `Greedy`

## 📝 Description

You are given a **0-indexed** array of **distinct** integers `nums`.

There is an element in `nums` that has the **lowest** value and an element that has the **highest** value. We call them the **minimum** and **maximum** respectively. Your goal is to remove **both** these elements from the array.

A **deletion** is defined as either removing an element from the **front** of the array or removing an element from the **back** of the array.

Return *the **minimum** number of deletions it would take to remove **both** the minimum and maximum element from the array.*



**Example 1:**

```
Input: nums = [2,10,7,5,4,1,8,6]
Output: 5
Explanation:
The minimum element in the array is nums[5], which is 1.
The maximum element in the array is nums[1], which is 10.
We can remove both the minimum and maximum by removing 2 elements from the front and 3 elements from the back.
This results in 2 + 3 = 5 deletions, which is the minimum number possible.
```

**Example 2:**

```
Input: nums = [0,-4,19,1,8,-2,-3,5]
Output: 3
Explanation:
The minimum element in the array is nums[1], which is -4.
The maximum element in the array is nums[2], which is 19.
We can remove both the minimum and maximum by removing 3 elements from the front.
This results in only 3 deletions, which is the minimum number possible.
```

**Example 3:**

```
Input: nums = [101]
Output: 1
Explanation:
There is only one element in the array, which makes it both the minimum and maximum element.
We can remove it with 1 deletion.
```



**Constraints:**

	- `1 <= nums.length <= 10^5`

	- `-10^5 <= nums[i] <= 10^5`

	- The integers in `nums` are **distinct**.

## 💡 Hints

<details><summary><b>Hint 1</b></summary>

There can only be three scenarios for deletions such that both minimum and maximum elements are removed:

</details>

<details><summary><b>Hint 2</b></summary>

Scenario 1: Both elements are removed by only deleting from the front.

</details>

<details><summary><b>Hint 3</b></summary>

Scenario 2: Both elements are removed by only deleting from the back.

</details>

<details><summary><b>Hint 4</b></summary>

Scenario 3: Delete from the front to remove one of the elements, and delete from the back to remove the other element.

</details>

<details><summary><b>Hint 5</b></summary>

Compare which of the three scenarios results in the minimum number of moves.

</details>

---
<div align="center">

**Solution & HTML preview:** open [`question.html`](./question.html) for a fully styled, colorful view!

*Saved via LeetCode → GitHub Saver • 8/30/2026, 4:59:36 PM*

</div>
