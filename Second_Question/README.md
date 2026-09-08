# Question 2 - Robot Battery and Missions

## Description

In this problem, a robot needs to complete `n` missions in order. The robot starts with a full battery with a maximum capacity of `C`. Each mission requires a certain amount of energy. Before starting a mission, the robot may charge its battery by `R` energy units. However, the robot can only charge at most `K` times, and the battery cannot go above its maximum capacity `C`.

The robot cannot skip a mission. If it does not have enough energy to complete the current mission, it cannot continue to the next mission. The goal is to find the maximum number of missions that the robot can complete.

## My Approach

We start by setting the robot's current energy to `C` because the battery is full at the beginning. We also keep track of how many times the robot has charged and how many missions have been completed. For every mission, we first check whether the robot is still allowed to charge. If there are charges remaining and adding `R` energy does not make the battery exceed `C`, We charge the battery immediately. 

After that, we check whether the robot has enough energy for the current mission. If the energy is enough, we subtract the mission's required energy and increase the number of completed missions. If the energy is not enough, we stop the loop.

Finally, the number of missions that were successfully completed is then printed.