# solutions
Contains solutions to programming problems implemented in C++/JS
N-Queens Problem:
The task is to place N Queens on a chessboard of size N\*N such that no queen is attacked by another queen. Solution is to traverse the board rowwise or columnwise finding an unattacked postion for the queen to placed, placing the queen and recursively doing the same till you manage to place N queens or reach a point where you cannot place another queen. In case you cannot place a queen you backtrack and remove the last queen you placed and put it in another unattacked position(if present) and then proceed.

Spiral Order Matrix:
The task is to take a matrix of M rows and N Columns and print the output if the matrix is traversed spirally starting from (0,0) and moving right,down,left and up. My approach is to start at a hypothetical position (0,-1) and maintain the number of free columns left and number of free rows left. Whenever we traverse a row by moving right or left by the number of free columns we decrease the number of free rows by 1. Similarly whenever we traverse a column by moving down or up by the number of free rows we reduce the number of free columns by 1. We keep moving till either the number of free rows or free columns becomes 0

