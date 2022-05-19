#### Problem

tag: DS, Sweep

In the ancient magical school of Hagwortz of Witchcraft and Wizardry, there were 4 houses: Gryffindor, Ravenclaw, Hufflepuff, and Slytherin. They played a 4-team quidditch match. There're $n$ goals scored, recorded as an array of length $n$. $0$ denotes Gryffindor scored. $1$ denotes Ravenclaw scored. $2$ for Hufflepuff. And $3$ for Slytherin. 

Hermione Grenga and Draco Molfay both want their houses (Gryffindor and Slytherin) to win the house cup, so they messed around with the score board. 

In each of Draco's operation, he increments the team-id of a range of values $[l,r]$ on the score-recording-array. If a value goes above 3, it is set back to 3. 

In each of Hermione's operation, she decrements the team-id of a range of values $[l,r]$ on the array. If a value goes below 0, it is set back to 0.

After $m$ operations, compute the score of Gryffindor minus the score of Slytherin.

#### Solution
There're two solutions:
1. The bruteforce one:
Segtree over the team-array. Each node of segtree records the number of 0s, 1s, 2s, and 3s in the range.
2. The sophisticated sweep (for more generalized case):
Segtree over the timestamps. Sweep along the team-id. Add in or take out operations as needed. The segtree should track the entire history of the fluctuation of the team-id values. Using binary search on that can give us the final team that wins. 