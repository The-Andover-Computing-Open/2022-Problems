### P1 (Easy)

You and your friends are playing wordle. You are given $n$ $(1\le n \le 5)$ five-character words that your friends guessed. Find the lexicographically smallest string among all the possible answers. (The answer **DOES NOT** have to be an actual word!) 

Solution: Simulation. One way to solve is go through all the combinations and judge whether the word is possible.

### P2 (Easy)

Gunga have a permutation $p_1,p_2,\dots,p_n$ of length $n$ . He generates a sequence $A_1,A_2,\dots,A_n$ such that $A_i$ is either the minimum or the maximum number among $p_1,p_2,\dots,p_i$ . Given the sequence $A_1,A_2,\dots,A_n$ , can you recover the original permutation?

### P3 (Medium)

Yifan changes his computer's password once a week, and he has a list of $n$ different passwords. Every time he changes his password, he choose $1$ out of the other $n-1$ passwords randomly. However, there's a $1/m$ chance that he forget changing it. What is the probability that he uses one of the first $k$ passwords on his list in the $T$th week? Answer mod $10^9+7$ .

$1\le n,m,k\le 10^9,1\le T\le 10^{18}$ .

Solution: Math.

### P4 (Medium)

Michael has an array of $n$ integers. Find how many pairs $(i,j)$ are there that satisfies $1\le i\le n,1\le j\le n,i\ne j$ and $a_i$ is a multiple of $a_j$ .

$1\le n\le 2\times10^5,1\le a_i\le 5\times10^5$ .

Solution: Number Theory. For each $a_i$ we can find its divisors in $O(\sqrt{a_i})$ time, 

### P5 (Medium)

https://www.luogu.com.cn/problem/P8107 

https://www.luogu.com.cn/problem/P8088

### P6 (Hard)

https://www.luogu.com.cn/problem/P8108

https://www.luogu.com.cn/problem/P3226

### P1 (Easy)

You are given an integer array $A$ of length $N$ , Find the number of ordered pair $(x,y,z)$ such that $A_x\times A_y = A_z$ .

 $-10000\le A_i\le 10000,1\le N\le 100$ .

Solution: bash.

### P2 (Easy)

There is a Co-Presidential Election coming up in Andover Academy. There are $n$ students of $2$ types that haven't voted yet. Assume that there are only two candidates and they have $A,B$ votes currently.

- For type $1$ , the students will vote for the one with more votes.
- For type $2$, the student will vote for the one with fewer votes.
- If both candidates have the same vote, both types of students can vote for anyone they want.

What's the maximum possible number of votes candidate $1$ can get?

### P3 (Medium)

Initially, Gunga has a sequence of $n$ integers $A_1,A_2,\dots,A_n$ . For every subsegments in $A$ , he then calculates the sum of all its elements. There are a total of $\frac{n(n+1)}{2}$ subsegments, for example when $n=3$ , the subsegments are: $(A_1),(A_2),(A_3),(A_1,A_2),(A_2,A_3),(A_1,A_2,A_3)$ . Gunga then puts all the results into a sequence $B$ . Unfortunately, he forgot the initial sequence and the relations between each element in $B$ and the subsegments in $A$ . Now you are given the array $B$ , can you help him recover the initial sequence?

$1\le n \le 1000,1\le B_i\le 10^9$ .

Solution:

First, we can sort the sequence $B$ . Since it contains the sum of any subsegments in $A$ , we know that every element in $A$ is also in $B$ . Next we try finding all the special elements.

It's clear that $A_1$ is the minimum element in $B$ , and $A_2$ is the second least element in $B$ . However, $A_3$ might not be equal to $B_3$ . Why?

Because $B_3$ might be $A_1+A_2$ when it's less than $A_3$ . If $B_3=A_1+A_2$ , we will skip this as the possible answer of $A_3$ and continue to $B_4$ . By generalizing this technique to all $A_i$ we can solve the problem.

For the final solution, we solve the problem using induction. Suppose that we already know the first $k$ element of $A$ and we are now on $B_t$ .

- If $B_t$ can be expressed as some sum of subsegments of $A_1,A_2,\dots,A_k$ , continue.
- Else $B_t = A_{k+1}$ since $A_{k+1}$ is the smallest number that can appear after this.

use `std::unordered_map` in c++ to maintain the number of subsegments such that its sum equals $S$ . For further detail see the example code.

### P4 (Medium)

Michael has an array of $n$ integers. Find how many pairs $(i,j)$ are there that satisfies $1\le i\le n,1\le j\le n,i\ne j$ and $a_i$ is a multiple of $a_j$ .

$1\le n\le 2\times10^5,1\le a_i\le 5\times10^5$ .

Solution: Number Theory. For each $a_i$ we can find its divisors in $O(\sqrt{a_i})$ time, use buckets to store for the numbers of every integer then solved.



