/*
Write a program to find the factorial value of any number entered by the user.

Input
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains an integer N.

Output
For each test case, display the factorial of the given number N in a new line.

Constraints
1 ≤ T ≤ 1000
0 ≤ N ≤ 20

Example
Input
3
3
4
5

Output
6
24
120
*/

#include <iostream>
using namespace std;
int fact(int n) {
    if (n==0) {
        return 1;
    }
    else {
        return n*fact (n-1);
    }
}
int main() {
	int t;
	cin>>t;
	while (t--) {
	    int n;
	    cin>>n;
	    cout<<fact(n)<<endl;
	}
	return 0;
}
