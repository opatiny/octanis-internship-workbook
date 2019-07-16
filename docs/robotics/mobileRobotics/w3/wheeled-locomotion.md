# Week 3 - Wheeled locomotion

[Home](../../../../README.md) | [Mobile Robotics](../mobileRobotics.md)

- locomotion: power of motion from place to place
- a wheel has two parameters: the **roll forward** (angular speed) and the **orientation** (to know the global position of the robot)
- a robot that moves in a plane has **three degrees of freedom** (2 translations, 1 rotation)

## Instantaneous Center of Curvature

**Def:** midpoint of the circle on which the robot moves (ICC)

A robot can have two types of movement:

- move on a circle
- move on a straight line

## Differential drive

Imagine a robot with two wheels. You can make it turn by having a **difference of rotation speed** (or translation speed) between the two wheels. Two motors required.

-> see notebook for equations

Parameters in the equations:

- $v_l$ : translation speed of left wheel
- $v_r$ : translation speed of right wheel
- $R$ : radius of the circle the robot is turning on
- $l$ : distance between the wheels
- $\omega$ : angular speed of the robot
- $\theta$ : orientation of the robot from x axis

## Ackermann drive

A robot with three wheels. The same as before with an additional front wheel that is not controlled (passive). Two motors required. Limited in the possible trajectories! -> you have to manoeuvre to get to certain points, like in a car to park

## Synchronous drive

A robot with three wheels, generally circular, all wheels have the same forward velocity. When the robot turns, all the wheels have the same angular velocity (achieved using a chain). Four motors required. Every trajectories can be followed with this kind of robot.

## XR4000 drive

A robot with four wheels that can all be turned separately. Constraint: all the wheels must move on a circle around the ICC. In certain conditions, this kind of robot can turn on the spot.
