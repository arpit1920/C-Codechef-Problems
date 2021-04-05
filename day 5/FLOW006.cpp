/*
You're given an integer N. Write a program to calculate the sum of all the digits of N.

Input
The first line contains an integer T, the total number of testcases. Then follow T lines, each line contains an integer N.

Output
For each test case, calculate the sum of digits of N, and display it in a new line.

Example
Input
3
12345
31203
2123
Output
15
9
8

*/

#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	while(n--)
	{
	    int sum = 0;
	    int num;
	    cin>>num;
	    while(num!=0)
	    {
	        sum+=num%10;
	        num/=10;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
