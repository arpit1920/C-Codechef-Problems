/*
Problem: https://www.codechef.com/problems/STICKS

Chef and his little brother are playing with sticks. They have total N sticks.
Length of i-th stick is Ai. Chef asks his brother to choose any four sticks and
to make a rectangle with those sticks its sides. Chef warns his brother to not
to break any of the sticks, he has to use sticks as a whole. Also, he wants that
the rectangle formed should have the maximum possible area among all the
rectangles that Chef's brother can make.
Chef's little brother takes this challenge up and overcomes it.
Can you also do so? That is, you have to tell whether it is even possible to
create a rectangle? If yes, then you have to tell the maximum possible area
of rectangle.

Input
The first line contains a single integer T denoting the number of test-cases.
T test cases follow.
The first line of each test case contains a single integer N denoting
the number of sticks.
The second line of each test case contains N space-separated integers
A1, A2, ..., AN denoting the lengths of sticks.

Output
For each test case, output a single line containing an integer representing
the maximum possible area for rectangle or -1 if it's impossible to form any
rectangle using the available sticks.

Constraints
1 ≤ T ≤ 100
1 ≤ N ≤ 103
1 ≤ sum of N's over all test-cases in a single test file ≤ 103
1 ≤ Ai ≤ 103

Example
Input:
2
5
1 2 3 1 2
4
1 2 2 3

Output:
2
-1

Explanation
Example case 1. Chef's brother can choose sticks of lengths 1, 2, 1, 2.
He can create a rectangle with area 1 * 2 = 2.
Example case 2. It's impossible to choose 4 sticks so that they form a rectangle.

All submissions for this problem are available.
Author:	6★kingofnumbers
Tester:	6★mgch
Editorial:	https://discuss.codechef.com/problems/STICKS
Tags:	cook71, greedy, kingofnumbers, simple
Date Added:	27-05-2016
Time Limit:	1 secs
Source Limit:	50000 Bytes
Languages:	CPP14, C, JAVA, PYTH 3.6, PYTH, CS2, ADA, PYPY, PYP3, TEXT, PAS fpc,
RUBY, PHP, NODEJS, GO, TCL, HASK, PERL, SCALA, BASH, JS, PAS gpc, BF, LISP sbcl,
CLOJ, LUA, D, CAML, ASM, FORT, FS, LISP clisp, SCM guile, PERL6, CLPS, WSPC,
ERL, ICK, NICE, PRLG, ICON, PIKE, SCM chicken, SCM qobi, ST, NEM
*/

#include <iostream>
using namespace std;
int main() {
	// your code goes her
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++) {
	        cin>>arr[i];
	    }
	    int area=1,freq[1001]={0};
	    for (int i=0;i<n;i++) {
        freq[arr[i]]++;
      }
	    bool flage=false,done=false;
	    for(int i=1000;i>=0;i--) {
	        if(!flage) {
	            if(freq[i]>=2) {
	                area*=i;
	                flage =true;
	                freq[i]-=2;
	            }
	        }
	        if (flage) {
	            if(freq[i]>=2) {
	                area*=i;
	                done=true;
	                break;
	            }
	        }
	    }
	    if(done) {
        cout<<area<<endl;
      }
	    else {
        cout<<-1<<endl;
      }
	}
	return 0;
}
