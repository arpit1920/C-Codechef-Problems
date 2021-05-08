/*
In a company an emplopyee is paid as under:
If his basic salary is less than Rs. 1500, then HRA = 10% of base salary and DA = 90% of basic salary.
If his salary is either equal to or above Rs. 1500,
then HRA = Rs. 500 and DA = 98% of basic salary.
If the Employee's salary is input, write a program to find his gross salary.

NOTE: Gross Salary = Basic Salary + HRA + DA

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer salary.

Output
For each test case, output the gross salary of the employee in a new line. Your answer will be considered correct if the absolute error is less than 10-2.

Constraints
1 ≤ T ≤ 1000
1 ≤ salary ≤ 100000

Example
Input
3
1203
10042
1312

Output
2406.00
20383.16
2624
*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	float a;
	cin>>n;
	for (int i=0; i<n; i++) {
	    cin>>a;
	    if (a<1500) {
	        a=a*2;
	    }
	    else {
	        a=a*1.98;
	        a=a+500;
	    }
	    cout<<fixed<<setprecision(2)<<a<<endl;
	}
	return 0;
}
