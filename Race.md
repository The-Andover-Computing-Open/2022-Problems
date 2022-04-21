#### Problem

tag: DS, DP, geometry

You are in a race. Not the olympic kind, but a Doodle Jump race. There're $n$ platforms, each located at $(x_i, y_i)$. When bouncing on a platform, you can jump to any point above the platform bounded by a square of side length $a$. A trophy is located at $(x_n, y_n)$. You start from $(x_1, y_1)$ and want to get to the trophy with the least possible number of jumps. You start at the first platform. What's the least possible number of jumps?

#### Solution

Sweep from $y=y_1$ to $y=y_t$. Compute a $dp$ that tracks the number of jumps used. In computing the DP, we need to use two pointer + segment tree to track the old DP values. Intended solution is about $O(n\log(n))$. 

