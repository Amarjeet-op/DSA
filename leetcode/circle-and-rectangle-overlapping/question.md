<div align="center">

# Circle and Rectangle Overlapping

![LeetCode](https://img.shields.io/badge/LeetCode-1401-FFA116?style=for-the-badge&logo=leetcode&logoColor=white) ![Difficulty](https://img.shields.io/badge/Difficulty-Medium-FFC01E?style=for-the-badge) ![Topics](https://img.shields.io/badge/Topics-Math%2C%20Geometry-6366F1?style=for-the-badge)

**[`↗ Open on LeetCode`](https://leetcode.com/problems/circle-and-rectangle-overlapping/)** · `circle-and-rectangle-overlapping` · `1401`

</div>

---

> **Topics:** `Math` · `Geometry`

## 📝 Description

You are given a circle represented as `(radius, xCenter, yCenter)` and an axis-aligned rectangle represented as `(x1, y1, x2, y2)`, where `(x1, y1)` are the coordinates of the bottom-left corner, and `(x2, y2)` are the coordinates of the top-right corner of the rectangle.

Return `true`* if the circle and rectangle are overlapped otherwise return *`false`. In other words, check if there is **any** point `(x_i, y_i)` that belongs to the circle and the rectangle at the same time.



**Example 1:**

```
Input: radius = 1, xCenter = 0, yCenter = 0, x1 = 1, y1 = -1, x2 = 3, y2 = 1
Output: true
Explanation: Circle and rectangle share the point (1,0).
```

**Example 2:**

```
Input: radius = 1, xCenter = 1, yCenter = 1, x1 = 1, y1 = -3, x2 = 2, y2 = -1
Output: false
```

**Example 3:**

```
Input: radius = 1, xCenter = 0, yCenter = 0, x1 = -1, y1 = 0, x2 = 0, y2 = 1
Output: true
```



**Constraints:**

	- `1 <= radius <= 2000`

	- `-10^4 <= xCenter, yCenter <= 10^4`

	- `-10^4 <= x1 < x2 <= 10^4`

	- `-10^4 <= y1 < y2 <= 10^4`

## 💡 Hints

<details><summary><b>Hint 1</b></summary>

Locate the closest point of the square to the circle, you can then find the distance from this point to the center of the circle and check if this is less than or equal to the radius.

</details>

---
<div align="center">

**Solution & HTML preview:** open [`question.html`](./question.html) for a fully styled, colorful view!

*Saved via LeetCode → GitHub Saver • 9/19/2026, 11:00:24 AM*

</div>
