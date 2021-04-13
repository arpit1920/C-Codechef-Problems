/*
Three numbers A, B and C are the inputs. Write a program to find second largest among them.

Input
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains three integers A, B and C.

Output
For each test case, display the second largest among A, B and C, in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ A,B,C ≤ 1000000

Example
Input
3
120 11 400
10213 312 10
10 3 450

Output
120
312
10
*/

#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int T, a,b,c;
	cin>>T;
	for (int i=0; i<T; i++) {
	    cin>>a;
	    cin>>b;
	    cin>>c;
	    if (((b>a)&&(a>c)) || ((c>a)&&(a>b))) {
	        cout<<a<<endl;
	    }
	    else if (((a>b)&&(b>c)) || ((c>b)&&(b>a))) {
	        cout<<b<<endl;
	    }
	    else {
	        cout<<c<<endl;
	    }
	}
	return 0;
}
