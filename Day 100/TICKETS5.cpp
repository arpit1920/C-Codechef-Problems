/*
Problem: https://www.codechef.com/problems/TICKETS5

Every day, Mike goes to his job by a bus, where he buys a ticket.
On the ticket, there is a letter-code that can be represented as a string of
upper-case Latin letters. Mike believes that the day will be successful in case
exactly two different letters in the code alternate. Otherwise, he believes that
the day will be unlucky. Please see note section for formal definition of
alternating code. You are given a ticket code. Please determine, whether the
day will be successful for Mike or not. Print "YES" or "NO" (without quotes)
corresponding to the situation.

Input
The first line of the input contains an integer T denoting the number of test
cases. The description of T test cases follows.
The first and only line of each test case contains a single string S denoting
the letter code on the ticket.

Output
For each test case, output a single line containing "YES" (without quotes)
in case the day will be successful and "NO" otherwise.

Note
Two letters x, y where x != y are said to be alternating in a code,
if code is of form "xyxyxy...".

Constraints
1 ≤ T ≤ 100
S consists only of upper-case Latin letters
Subtask 1 (50 points):
|S| = 2

Subtask 2 (50 points):
2 ≤ |S| ≤ 100

Example
Input:
2
ABABAB
ABC

Output:
YES
NO

All submissions for this problem are available.
Author:	sergey_adm
Tester:	3★karanaggarwal
Editorial:	https://discuss.codechef.com/problems/TICKETS5
Tags:	cakewalk, ltime23, sergey_adm
Date Added:	21-03-2015
Time Limit:	1 secs
Source Limit:	50000 Bytes
Languages:	CPP14, C, JAVA, PYTH 3.6, PYTH, CS2, ADA, PYPY, PYP3, TEXT, PAS fpc,
RUBY, PHP, NODEJS, GO, TCL, HASK, PERL, SCALA, BASH, JS, PAS gpc, BF, LISP sbcl,
CLOJ, LUA, D, CAML, ASM, FORT, FS, LISP clisp, SCM guile, PERL6, CLPS, WSPC, ERL,
ICK, NICE, PRLG, ICON, PIKE, SCM chicken, SCM qobi, ST, NEM
*/

#include <bits/stdc++.h>
# include <iostream>
using namespace std;
int main() {
  // your code goes here
    int t;
    cin>>t;
    while(t--) {
        int f = 1;
        string s;
        cin >> s;
        char c = s[0], d = s[1];
        if(c!=d) {
          if(0) {
            int a;
          }
          else {
            for (int i = 0; i < s.size(); i++) {
              if (i % 2 == 0) {
                if (s[i] != c) {
                  f = 0;
                  break;
                }
              }
              else if (s[i] != d) {
                f = 0;
                break;
              }
            }
          }
        }
        else {
          f=0;
        }
        if (f) {
            cout << "YES" << endl;
          }
        else {
            cout << "NO"<<endl;
          }
    }
}
