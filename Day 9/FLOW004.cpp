/*
If Give an integer N . Write a program to obtain the sum of the first and last digits of this number.

Input
The first line contains an integer T, the total number of test cases. Then follow T lines, each line contains an integer N.

Output
For each test case, display the sum of first and last digits of N in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000

Example
Input
3
1234
124894
242323

Output
5
5
5
*/

#include<iostream>
using namespace std;
int main() {
    long int t, n, temp, sum;
    cin>>t;
    for(int i=0; i<t; i++) {
        cin>>n;
        sum=n%10;
        while(n>=10) {
            n=n/10;
        }
        sum = sum+n;
        cout<<sum<<endl;
    }
    return 0;
}
