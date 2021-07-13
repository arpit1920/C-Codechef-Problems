/*
Problem: https://www.codechef.com/problems/PLAYPIAN

Two sisters, A and B, play the piano every day. During the day, they can play
in any order. That is, A might play first and then B, or it could be B first and
then A. But each one of them plays the piano exactly once per day.
They maintain a common log, in which they write their name whenever they play.
You are given the entries of the log, but you're not sure if it has been tampered
with or not. Your task is to figure out whether these entries could be valid or not.

Input
The first line of the input contains an integer T denoting the number of test
cases. The description of the test cases follows.
The first line of each test case contains a string s denoting the entries of the log.

Output
For each test case, output yes or no according to the answer to the problem.

Constraints
1≤T≤500
2≤|s|≤100
|s| is even

Each character of s is either 'A' or 'B'
Example Input
4
AB
ABBA
ABAABB
AA

Example Output
yes
yes
no
no

Explanation
Testcase 1: There is only one day, and both A and B have played exactly once.
So this is a valid log. Hence 'yes'.
Testcase 2: On the first day, A has played before B, and on the second day,
B has played first. Hence, this is also a valid log.
Testcase 3: On the first day, A played before B, but on the second day,
A seems to have played twice. This cannot happen, and hence this is 'no'.
All submissions for this problem are available.
Author:	admin2
Tags:	admin2
Date Added:	12-12-2018
Time Limit:	1 secs
Source Limit:	50000 Bytes
Languages:	CPP14, C, JAVA, PYTH 3.6, PYTH, CS2, ADA, PYPY, PYP3, TEXT, PAS fpc,
RUBY, PHP, NODEJS, GO, TCL, HASK, PERL, SCALA, kotlin, BASH, JS, PAS gpc, BF,
LISP sbcl, CLOJ, LUA, D, CAML, rust, ASM, FORT, FS, LISP clisp, swift, SCM guile,
PERL6, CLPS, WSPC, ERL, ICK, NICE, PRLG, ICON, PIKE, COB, SCM chicken, SCM qobi,
ST, NEM
*/

#include <iostream>
#include<string.h>
using namespace std;
int main(){
  // your code goes here
    int t;
    string s1;
    cin>>t;
    string s[t];
    for(int i=1;i<=t;i++) {
        int a=1;
        cin>>s1;
     for(int j=0;j<s1.size();j++) {
         if(s1[j]==s1[j+1]){
           a=0;
           break;
         }
         j++;
    }
    if(a==0)
        s[i]="no";
    else
        s[i]="yes";
    }
    for(int i=1;i<=t;i++) {
      cout<<s[i]<<endl;
    }
    return 0;
}
