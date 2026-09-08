# Question 3 - Opening All Lockers

## Description

In this problem, there are 8 lockers numbered from 1 to 8. Each locker contains either:
- A key for another locker, or
- `0`, which means there is no key inside.

At the beginning, we only have one master key. The master key can open any one locker for the first time. After opening a locker, we must use the key found inside it to open the next locker. The process stops if the key points to a locker that has already been opened or if the locker contains `0`. The goal is to determine whether it is possible to open all 8 lockers using only one master key at the beginning.

## My Approach

Since the master key can open any locker, we try every locker from 1 to 8 as the starting locker. For each possible starting locker, we create a string called `opened`:
`"00000000"`
Each character represents one locker. `0` means the locker has not been opened, while `1` means the locker has already been opened. We then follow the keys one by one. Before opening a locker, we check whether it has already been opened. If it has, we stop. If it has not, we mark it as opened and increase the number of opened lockers.

The `takeKey()` function is used to get the key stored inside the current locker. The function checks the locker number and returns the corresponding value from `a1` until `a8`. If one of the starting lockers allows us to open all 8 lockers, we set `possible` to `true` and print `YES`. Otherwise, we print `NO`.