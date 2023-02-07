# 605. Can Place Flowers

## Description:

You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.

Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule.

### <u>Example 1:</u>

Input: flowerbed = [1,0,0,0,1], n = 1
Output: true

### <u>Example 2:</u>

Input: flowerbed = [1,0,0,0,1], n = 2
Output: false

### <u>Constraints:</u>

1 <= flowerbed.length <= 2 \* 104
flowerbed[i] is 0 or 1.
There are no two adjacent flowers in flowerbed.
0 <= n <= flowerbed.length

Characteristics of the solution (time and space complexity tests)
can be view here:
https://leetcode.com/problems/can-place-flowers/submissions/893220065/

Or see pictures:

![image](https://user-images.githubusercontent.com/36036315/217207494-21186c39-b665-4eef-b9db-0aa31899d254.png)

![image](https://user-images.githubusercontent.com/36036315/217207558-56b92c00-52cb-4cee-b94c-94870441606c.png)

To run tests in you environment:

1. Clone googletest:

```
cd {YourWorkSpaceFolder}
git clone https://github.com/google/googletest.git
```

2. Build:

```
cmake --build .
```

3. Run CTests:

```
ctest
```

For more informative test results use this command in powershell:

```
."{YourWorkSpaceFolder}/build/tests/FLOWERS_TESTS.exe"
```
