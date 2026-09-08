# Question 1 - Balancing Items Between Boxes

## Description

In this problem, there are three boxes:
- Box 1 contains `n` items with a weight of 2 kg each.
- Box 2 contains `m` items with a weight of 1 kg each.
- Box 3 is initially empty.

The robot needs to move the items so that all three boxes have the same number of items and the same total weight. The robot also has a maximum carrying capacity of `k` kg and cannot carry mixed weight items at the same time.

The goal is to find the minimum number of loading and unloading steps needed. If the items cannot be distributed evenly, the program should output `-1`.

## My Approach

First, we check whether `n` and `m` can both be divided evenly by 3. This is necessary because each box must eventually contain the same number of 2 kg items and the same number of 1 kg items. If either value is not divisible by 3, we immediately output `-1`.

For the 2 kg items, the robot can carry k/2 items at a time. For the 1kg items, the robot can carry k items at a time. Each of the other two boxes needs one-third of the items from the original box. We calculate how many loading steps are needed to take the required items from the original box, and then calculate how many unloading steps are needed to place them into the two destination boxes. The same calculation is done separately for the 2 kg items and the 1 kg items.

The number of step is then added together and then printed.

## Note

The problem statement writes the input order as: k n m
However, upon inspecting the test case, it only give the expected results when the values are read as: n m k