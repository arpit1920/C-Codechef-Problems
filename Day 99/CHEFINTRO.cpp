/*
Problem: https://www.codechef.com/problems/CHFINTRO

"Every beginning has an end… and an editorial." - taran_1407
What the hell are all these interactive problems? What does flushing output mean?
So many questions… Chef explains it in an easy way: you must communicate with a
grader program, which accepts your input only if you flushed the output.
There is a contest with interactive problems where N people participate.
Each contestant has a known rating. Chef wants to know which contestants will not
forget to flush the output in interactive problems. Fortunately, he knows that
contestants with rating at least r never forget to flush their output and
contestants with rating smaller than r always forget to do it. Help Chef!

Input
The first line of the input contains two space-separated integers N and r.
Each of the following N lines contains a single integer R denoting the rating
of one contestant.

Output
For each contestant, print a single line containing the string "Good boi"
if this contestant does not forget to flush the output or "Bad boi" otherwise.

Constraints
1≤N≤1,000
1,300≤r,R≤1,501
Subtasks
Subtask #1 (100 points): original constraints

Example Input
2 1500
1499
1501

Example Output
Bad boi
Good boi

All submissions for this problem are available.
Author:	6★mgch
Editorial:	https://discuss.codechef.com/problems/CHFINTRO
Tags:	cakewalk, dec18, mgch
Date Added:	23-11-2018
Time Limit:	0.5 secs
Source Limit:	50000 Bytes
Languages:	CPP14, C, JAVA, PYTH 3.6, PYTH, CS2, ADA, PYPY, PYP3, TEXT, PAS fpc,
RUBY, PHP, NODEJS, GO, TCL, HASK, PERL, SCALA, kotlin, BASH, JS, PAS gpc, BF,
LISP sbcl, CLOJ, LUA, D, CAML, rust, ASM, FORT, FS, LISP clisp, swift, SCM guile,
PERL6, CLPS, WSPC, ERL, ICK, NICE, PRLG, ICON, PIKE, COB, SCM chicken, SCM qobi,
ST, NEM
*/

#include<iostream>
using namespace std;
int main() {
  // your code goes here
    int n,r,num;
    scanf("%d %d", &n, &r);
    for(int i=0;i<n;i++) {
        scanf("%d",&num);
        if(num>=r)
            printf("Good boi\n");
        else
            printf("Bad boi\n");
    }
    return 0;
}
