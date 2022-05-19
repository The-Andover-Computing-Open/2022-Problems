#### Problem:

tag: DP

Yifan is going hiking at Andover's premier mountain. The tour guide has given him two schedules, defined as a list of times and trails, in one 12:00 pm to 11:59 pm period:

Schedule 1:
12:00 Trail A
01:00 Trail C
04:00 Trail C
08:00 Trail B
09:00 Trail C

Schedule 2:
12:00 Trail A
03:00 Trail D
05:00 Trail B
08:00 Trail C
09:00 Trail D

Of course, Yifan is a master hiker, so he wants more of a challenge. After a rigorous amount of research, Yifan has concluded that the following sequence is the hardest:

Trail A, Trail B, Trail C

If Yifan can switch trails as he desires, what is the minimum number of times Yifan has to switch between schedules to complete his desired sequence?

#### Solution:

DP across trails.

Create a list storing the schedule as pairs (time, trail, and schedule 1 or 2). Sort by time. Do a DP, where a state is defined as dp[i][j][k] = the minimum number of times Yifan has to switch between schedules to complete j trails by time i if he's currently on schedule k. Transitions are intuitive and depend on k.

Sort, dp on all times,

Inspiration: https://www.acmicpc.net/problem/2602
