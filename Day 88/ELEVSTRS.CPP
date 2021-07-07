/*
Problem: https://www.codechef.com/problems/ELEVSTRS

Chef has been working in a restaurant which has N floors.
He wants to minimise the time it takes him to go from the N-th floor to ground floor.
He can either take the elevator or the stairs.
The stairs are at an angle of 45 degrees and Chef's velocity is V1 m/s
when taking the stairs down. The elevator on the other hand moves with a velocity V2 m/s.
Whenever an elevator is called, it always starts from ground floor and goes
to N-th floor where it collects Chef (collecting takes no time), and makes its
way down to the ground floor with Chef in it.
The elevator covers a total distance equal to N meters when going from N-th floor
to ground floor or vice versa, while the length of the stairs is N∗2–√ because
the stairs is at angle 45 degrees.
Chef has enlisted your help to decide whether he should use stairs or
the elevator to minimise his travel time. Can you help him out?

Input
The first line contains a single integer T, the number of test cases.
Each test case is described by a single line containing three space-separated
integers N, V1, V2.

Output
For each test case, output a single line with string Elevator or Stairs,
denoting the answer to the problem.

Constraints
1≤T≤1000
1≤N,V1,V2≤100

Example Input:
3
5 10 15
2 10 14
7 14 10

Example Output:
Elevator
Stairs
Stairs

All submissions for this problem are available.
Author:	melnik
Tester:	6★kingofnumbers
Editorial:	https://discuss.codechef.com/problems/ELEVSTRS
Tags:	cakewalk, cook85, math, melnik
Date Added:	17-08-2017
Time Limit:	1 secs
Source Limit:	50000 Bytes
Languages:	CPP14, C, JAVA, PYTH 3.6, PYTH, CS2, ADA, PYPY, PYP3, TEXT, PAS
fpc, RUBY, PHP, NODEJS, GO, TCL, HASK, PERL, SCALA, kotlin, BASH, JS, PAS gpc,
BF, LISP sbcl, CLOJ, LUA, D, CAML, rust, ASM, FORT, FS, LISP clisp, swift,
SCM guile, PERL6, CLPS, WSPC, ERL, ICK, NICE, PRLG, ICON, PIKE, SCM chicken,
SCM qobi, ST, NEM

*/

#include <bits/stdc++.h>
using namespace std;
int main() {
  // your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		float N,v,w;
		cin>>N>>v>>w;
		if((N*sqrt(2))/v < (2*N)/w){
			cout<<"Stairs"<<endl;
		}
		else {
			cout<<"Elevator"<<endl;
		}
	}
	return 0;
}
