/*
While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000.
If the quantity and price per item are input, write a program to calculate the total expenses.

Input
The first line contains an integer T, total number of test cases. Then follow T lines, each line contains integers quantity and price.

Output
For each test case, output the total expenses while purchasing items, in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ quantity,price ≤ 100000

Example

Input
3
100 120
10 20
1200 20

Output
12000.000000
200.000000
21600.000000
*/
#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while (t--) {
	    int dis=0;
	    double n,p;
	    cin>>n>>p;
	    double ans = 0;
	    if (n>1000)
	    dis = 10;
	    ans = ((n*p)-((n*p*dis)/100));
	    cout<<fixed<<setprecision(6)<<ans<<endl;
	}
	return 0;
}
