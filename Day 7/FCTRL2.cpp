/*
Input
An integer t, 1<=t<=100, denoting the number of testcases, followed by t lines, each containing a single integer n, 1<=n<=100.

Output
For each integer n given at input, display a line with the value of n!

Example
Sample input:
4
1
2
5
3

Sample output:

1
2
120
6
*/

#include <iostream>
using namespace std;
int main() {
    int t, i, fact;
    cin>>t;
    for(i=1; i<t; i++) {
        fact = fact*i;
    }
    cout<<fact<<endl;
	return 0;
}
