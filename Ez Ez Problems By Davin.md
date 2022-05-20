# Battle Ship

Battle ship is a game in which one player tries to guess the location of his opponent's ships. 

For example, suppose your board looks like this:
```
  0 1 2 3 4
0 O O O S O 
1 O S O S O 
2 O O O O O 
3 S S O O O 
4 O S O O O
```
where O represents a tile of ocean and S represents a ship. 

If your opponent guesses "3, 1", representing the tile in row 3 and column 1, they would hit a ship.

If your opponent guesses "4, 4", representing the tile in row 4 and column 4, they would miss and hit the ocaen. 

Given the state of the 5 x 5 board and the coordinates your opponent guesses, return "Yikes" if your opponent hits a ship and "Yes!" if your opponent misses.

Input Format:
The 5x5 board of Os and Ss
The coordinates

# Score Tracker

Abe and Caleb are competing to read the most books. To keep track of progress, they wrote their name on a sheet of paper everytime they finished a book. However, they now have a paper full of names but no idea of who actually won. 

Given N, the number of names on the sheet, and the N names (Abe or Caleb) on the piece of paper, calculate who won and the winner's final score.

Input Format:
N<=100
for every name,
name (a string)

# Alien Counting 

Bloo, an alien from far away, counts in a very weird way. Instead of counting from 1, 2, 3, 4, and so on, Bloo counts like 1, 3, 11, 43, and so on. 

More formally,$$a_{n}=a_{n-1}*4-1$$, where the next term is equal to the previous term multiplied by four and subtracted by 1.

Given a number, N, find the Nth number Bloo counts. 

Input Format:
N<=100

# Michael's Star Trek Wall

Rectangular Star Trek posters are hanging on Michael's wall. His goal is to one day cover the entire wall, but he's unsuccessful so far. Fortunately, he has enough pieces of tape to move one of his posters to new locations.

Given the location of his existing posters, return "Yes" if it's possible for Michael to cover the entire wall by moving one poster and "No" otherwise.

Input Format:
N - Number of posters (N<=10)
for every poster,
a0, a1, a2, a3 describing (a0, a1), the upper left corner, and (a2, a3), the lower right corner, of the posters on the 100 x 100 wall

