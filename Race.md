#### Problem

tag: DS, DP, geometry

You are in a race. Not the olympic kind, but a Doodle Jump race. There're $n$ platforms, each located at $(x_i, y_i)$. You can only stand on a platform or jump from one platform to another. When bouncing on a platform, you can jump to any point above the platform bounded by a half-square of side length $2a$. More rigorously, you can jump from $(x_0,y_0)$ to any point $(x,y)$ such that $x\in [x_0-a, x_0+a], y\in [y_0, y_0+a]$. A trophy is located at $(x_n, y_n)$. You start from $(x_1, y_1)$ and want to get to the trophy with the least possible number of jumps. What is the least possible number of jumps needed?

#### Solution

Sweep from $y=y_1$ to $y=y_t$. Compute a $dp$ that tracks the number of jumps used. In computing the DP, we need to use two pointer + segment tree to track the old DP values. Intended solution is about $O(n\log(n))$. 

