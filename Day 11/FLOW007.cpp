/*
Given an Integer N, write a program to reverse it.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output
For each test case, display the reverse of the given number N, in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000

Example

Input
4
12345
31203
2123
2300

Output
54321
30213
3212
32
*/

#include <iostream>
using namespace std;
int main() {
    int a,c=0,b=0,r;
    cin>>c;
    while(c--) {
        cin>>a;
        while(a) {
        b=a%10;
        r=(r*10)+b;
        a=a/10;
        }
        b=0;
         cout<<r<<"\n";
         r=0;
    }
}
