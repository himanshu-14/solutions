Contains solutions to programming problems implemented in C++/JS/Java/Python
## N-Queens Problem:
The task is to place N Queens on a chessboard of size N\*N such that no queen is attacked by another queen. Solution is to traverse the board rowwise or columnwise finding an unattacked postion for the queen to placed, placing the queen and recursively doing the same till you manage to place N queens or reach a point where you cannot place another queen. In case you cannot place a queen you backtrack and remove the last queen you placed and put it in another unattacked position(if present) and then proceed.

## Spiral Order Matrix:
The task is to take a matrix of M rows and N Columns and print the output if the matrix is traversed spirally starting from (0,0) and moving right,down,left and up. My approach is to start at a hypothetical position (0,-1) and maintain the number of free columns left and number of free rows left. Whenever we traverse a row by moving right or left by the number of free columns we decrease the number of free rows by 1. Similarly whenever we traverse a column by moving down or up by the number of free rows we reduce the number of free columns by 1. We keep moving till either the number of free rows or free columns becomes 0


## Coin Change Problem
It is a general problem of the unbounded knapsack variety similar to Rod cutting problem from Algorithms by Cormen. 
Have infinite number of coins of various denominations and need to use minimum number of total coins to form an amount.
At first glance greedy algorithm of choosing the largest denomination possible and moving to smaller denominations when we can't select the largest one anymore seems to be an algorithm 
but typical case of 1,3,4,5 to make 7 means choosing 5,1,1 which is 3 coins.
There was a better solution using 2 coins 3,4
We will recursively make the choice of choosing or not choosing a denomination. 
If we choose it then the number of coins will be 1+mincoins(amt-chosen deno)
A 2d table of size N*t+1 where each row indicates the minimum coins for making various amounts using the prefix of the array upto that index so row 0 means only coins[0] is allowed to be used
and row 1 means coins[0] and coins[1] can be used. 
Columns indicate the various sums from 0 to t(hence the number of columns are taken to be t+1 to get indexes from 0 to t)
I implemented a clean concise python solution and committed the code here which uses the same explanation as above ^^. Hope it will help some curious soul trying to decipher this dynamic programming problem.

