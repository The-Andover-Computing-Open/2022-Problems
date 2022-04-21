# Anti-Gravity Boots

Yifan is trying to escape Michael. In front of him, there are a series of rocks, some on the ceiling, others on the floor. If he touches one, he dies. While running, he can jump over one rock, or he can turn on his anti-gravity boots which instantenously flips his orientation, allowing him to walk on the ceiling, but faced with the same problems as before. His anti-gravity boots can be activated as much as Yifan wants. Note: the anti-gravity boots will flip Yifan, but during this period Yifan will not move forward any blocks. 

Given the track ahead of him, return 'Yes' if Yifan will make it past all of these rocks, and 'No' otherwise.

Input Format:
N - Rocks on the ceiling
a0, a1,... aN, the location of the rocks on the ceiling
M - Rocks on the floor
b0, b1,..., bN, the location of the rocks on the floor

# Michael's Star Trek Wall

Michael's wall is covered with rectangular Star Trek posters. His goal is to one day cover his entire wall, but he's a little short. Fortunately, he has enough pieces of tape to move four of his posters to new places. 

Given the location of his existing posters, return 'Yes' if Michael if can cover his entire wall by moving 5 posters, and 'No' otherwise.

Input Format:
N - Number of posters
a0, a1, a2, a3 describing (a0, a1), the upper left corner, and (a2, a3), the lower right corner, of the posters on the 100 x 100 wall

# Rlash Coyale

Yifan has created a new game called Rlash Coyale, in which cards attempt to destroy each other and, ultimately, the king towers.

One interesting mechanic is that pieces can only see a certain area around them. Knights can only see pieces within a 3 meter radius, archers can only see pieces within a 4 meter x 4 meter square centered at their current location, and dragons, most peculiar of them all, can only see in "E" shape. 

For example, if a dragon is on row 2, column 2, it can only see the following squares (O is its current location, E indicates sight)

XXEEE
XXEXX
XXOEE
XXEXX
XXXEE

Given the current board, the current card, and the location of the opposing players, return 'Yes' if the card can see all of the opposing players, and 'No' otherwise.

Input format:
N - Size of nxn board
x0, x1 - location of card
a - type of card (0==knight, 1==archer, 2==dragon)
M - number of opposing players
ai, bi - location of ith opposing card

# Arnav's Bulking Season 

It's bulking season for Arnav, and he's trying to eat as much as he can for as he can. Given the number of restaraunts, the additional fees each charges, and the calorie count and price of their signature item, return the most calories he can eat under D dollars.

Input format:
D - his budget
N - number of restaraunts
Mi - number of items in a restaraunt
ci, pi - calorie count and price of an item

# Pattern Finding

Given a pattern, find how many of the words in a list follow the pattern.

The pattern:
- a letter just represents the letter
- * means that any letter can be at this position
- ! means that the letter following in the pattern may or may not be used in the pattern

Input Format:
pattern
N - number of words
si - the word