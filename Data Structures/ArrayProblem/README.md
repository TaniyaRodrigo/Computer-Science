# Book Shelf Problem
A giant library has just been inaugurated this week. It can be modeled as a sequence of N
consecutive shelves with each shelf having some number of books. No, think of the following
two queries which can be performed on these shelves


            ● Change the number of books in one of the shelves.
            ● Obtain the number of books on the shelf having the kth rank within the range of shelves.

A shelf is said to have the k
th rank if its position is k when the shelves are sorted based on the
number of the books they contain, in ascending order. Can you write a program to simulate the
above queries?


Input Format

The first line contains a single integer T, denoting the number of test cases.
The first line of each test case contains an integer N denoting the number of shelves in the
library.
The next line contains N space separated integers where the ith integer represents the number
of books on the ith shelf where 1<=i<=N.
The next line contains an integer Q denoting the number of queries to be performed. Q lines
follow with each line representing a query.
Queries can be of two types:

            ● 1 x k - Update the number of books in the xth shelf to k (1 <= x <= N).
            ● 0 x y k - Find the number of books on the shelf between the shelves x and y (both inclusive) with the kth rank (1 <= x <= y <= N, 1 <= k <= y-x+1). or

