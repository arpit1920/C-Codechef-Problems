/*
Problem: https://www.codechef.com/problems/PCJ18B

Chef has recently been playing a lot of chess in preparation for the ICCT
(International Chef Chess Tournament). Since putting in long hours is not an
easy task, Chef's mind wanders elsewhere. He starts counting the number of
squares with odd side length on his chessboard. However, Chef is not satisfied.
He wants to know the number of squares of odd side length on a
generic N∗N chessboard.

Input:
The first line will contain a single integer T, the number of test cases.
The next T lines will have a single integer N, the size of the chess board.

Output:
For each test case, print a integer denoting the number of squares with odd length.

Constraints
1≤T≤100
1≤N≤1000

Sample Input:
    2
    3
    8

Sample Output:
    10
    120

All submissions for this problem are available.
Author:	5★madhav_1999
Editorial:	https://discuss.codechef.com/problems/PCJ18B
Tags:	madhav_1999, madhav_1999, prakhar17252, proconjunior, tanmay28
Date Added:	28-07-2018
Time Limit:	1 secs
Source Limit:	50000 Bytes
Languages:	CPP14, C, JAVA, PYTH 3.6, PYTH, CS2, ADA, PYPY, PYP3, TEXT, CPP17,
PAS fpc, RUBY, PHP, NODEJS, GO, TCL, HASK, PERL, SCALA, kotlin, BASH, JS, PAS
gpc, BF, LISP sbcl, CLOJ, LUA, D, R, CAML, rust, ASM, FORT, FS, LISP clisp,
SQL, swift, SCM guile, PERL6, CLPS, WSPC, ERL, ICK, NICE, PRLG, ICON, PIKE,
COB, SCM chicken, SCM qobi, ST, NEM, SQLQ
*/

#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int N;
	cin>>N;
	while(N--){
	    int val,sum=0;
	    cin>>val;
	    for(int i=val;i>=1;i-=2){
	        sum+=i*i;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
