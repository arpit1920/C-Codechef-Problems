/*
Problem: https://www.codechef.com/problems/CLIPLX

It's IPL time and as usual RCB are finding it tough to qualify for playoffs.
RCB needs a minimum of X more points to qualify for playoffs in their remaining Y matches.
A win, tie and loss in a match will yield 2,1,0 points respectively to a team.
You being a true RCB supporter want to find the minimum number of matches RCB needs
to win to qualify for playoffs. It is guaranteed that RCB will qualify for playoffs
if they win all their remaining Y matches.

Input:
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, two space separated integers X,Y

Output:
For each testcase, output in a single line the minimum number of matches RCB must win to qualify for playoffs.

Constraints :
1≤T≤10000
1≤X≤100
1≤Y≤100
1≤X≤2⋅Y
S
ample Input:
2
10 5
1 5

Sample Output:
5
0

Explanation:
In first case X=10 and Y=5, so RCB needs 10 points from remaining 5 matches to qualify for playoffs.
It is only possible if they win all their remaining 5 matches.
In second case X=1 and Y=5, so RCB needs 1 points from their remaining 5 matches to qualify for playoffs.
It can be done if they tie any one of their 5 matches and lose the remaining 4. So they need to win 0 matches.

All submissions for this problem are available.
Author:	6★avijit_agarwal
Editorial:	https://discuss.codechef.com/problems/CLIPLX
Tags:	avijit_agarwal, cakewalk, cole2019
Date Added:	13-02-2019
Time Limit:	1 secs
Source Limit:	50000 Bytes
Languages:	CPP14, C, JAVA, PYTH 3.6, PYTH, CS2, ADA, PYPY, PYP3, TEXT, PAS fpc, RUBY, PHP,
NODEJS, GO, TCL, HASK, PERL, SCALA, kotlin, BASH, JS, PAS gpc, BF, LISP sbcl, CLOJ, LUA, D,
CAML, rust, ASM, FORT, FS, LISP clisp, swift, SCM guile, PERL6, CLPS, WSPC, ERL, ICK, NICE, PRLG,
ICON, PIKE, COB, SCM chicken, SCM qobi, ST, NEM
*/

#include<bits/stdc++.h>
using namespace std;
int off(int x ,int y);
void read(int t) {
    int x,y;
    int res;
    while(t-->0) {
        cin>>x>>y;
        res = off(x,y);
        cout<<res<<endl;
        }
    }
int off(int x ,int y) {
    int win;
    if(x>y) {
        win = x-y;
    }
    else {
        win = 0;
    }
    return  win;
}

int main() {
    // your code goes here
    int t;
    cin>>t;
    read(t);
    return 0;
}
