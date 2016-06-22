# 11005---Lagrange-s-Four-Square-Theorem-
practice
Description
Lagrange's four-square theorem says that any natural number can be represented as the sum of four integer squares.
Here are some examples:
3 = 1*1 + 1*1 + 1*1 +0*0
5 = 2*2 + 1*1 + 0*0 + 0*0
14 = 3*3 + 2*2 + 1*1 + 0*0
Note that there may be more than one representation. For example, 21 can be represented in the following two ways:
21 = 3*3 + 2*2 + 2*2 + 2*2
21 = 4*4 + 2*2 + 1*1 + 0*0

Our task:
Among all of the four-square representations of a given natural number N, find the largest sum of the four integers. In the case of N=21, the answer is 9 because 3+2+2+2 is greater than 4+2+1+0.

Input
The first line contains an integer T that indicates the number of test cases. (1<=T<=40)
The next T lines are the T test cases.
Each test case provides an integer N (0<=N<=50000) for deriving the four-square representations.

Case 1: 0<=N<=200.
Case 2: 0<=N<=1000.
Case 3: 0<=N<=10000.
Case 4: 0<=N<=50000.

Output
For each test case, output the answer in a single line.

Sample Input
2
100
8888 
EOF
Sample Output
20
188 
EOF
