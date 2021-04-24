/*
Consider a currency system in which there are notes of six denominations,
namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100.
If the sum of Rs. N is input,
write a program to computer smallest number of notes that will combine to give Rs. N.

Input
The first line contains an integer T, total number of testcases.
Then follow T lines, each line contains an integer N.

Output
For each test case, display the smallest number of notes that will combine to give N, in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000

Example
Input
3
1200
500
242

Output
12
5
7
*/
#include <iostream>
using namespace std;
int main() {
	// your code starts here
	int t,n;
	cin>>t;
	int totalnotes;
	int a,b,c,d,e,f;
	int r1,r2,r3,r4,r5,r6;
	while(t>0) {
	    cin>>n;
	    r1=n%100;
	    a=n/100;
	    r2=r1%50;
	    b=r1/50;
	    r3=r2%10;
	    c=r2/10;
	    r4=r3%5;
	    d=r3/5;
	    r5=r4%2;
	    e=r4/2;
	    r6=r5%1;
	    f=r5/1;
	    totalnotes=a+b+c+d+e+f;
	    cout<<totalnotes<<endl;
	    t--;
	}
	return 0;
}
