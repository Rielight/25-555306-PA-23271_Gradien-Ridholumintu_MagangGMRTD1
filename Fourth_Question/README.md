# Question 4 - Valid Robot Room Commands

## Description

In this problem, a robot receives a sequence containing the characters `(` and `)`. The character `(` means the robot enters a room. The character `)` means the robot exits a room. A command sequence is valid if the robot never tries to exit when it is not inside a room, and after all commands are completed, the robot returns to its original position outside all rooms. The goal is to print `YES` if the command sequence is valid and `NO` if it is not valid.

## My Approach

We use a variable called `insideRoom` to keep track of the robot's current position. When the program finds `(`, increase `insideRoom` by 1 because the robot enters a room. When the program finds `)`, decrease `insideRoom` by 1 because the robot exits a room. After every command, we check whether `insideRoom` becomes negative. If it becomes negative, it means the robot tried to exit even though it was not inside a room. In this case, the command sequence is invalid and we stop checking.

After checking all commands, we also make sure that `insideRoom` is equal to 0. If it is not 0, it means the robot is still inside a room after all commands have finished. If none of these problems occur, the sequence is valid and the program prints `YES`. Otherwise, it prints `NO`.