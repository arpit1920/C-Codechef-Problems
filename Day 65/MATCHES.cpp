/*
Problem: https://www.codechef.com/problems/MATCHES

Chef's son Chefu found some matches in the kitchen and
he immediately starting playing with them.The first thing Chefu wanted to do was
to calculate the result of his homework — the sum of A and B,
and write it using matches. Help Chefu and tell him the number of matches
needed to write the result.

Input
The first line of the input contains a single integer T denoting
the number of test cases. The description of T test cases follows.
The first and only line of each test case contains
two space-separated integers A and B.

Output
For each test case, print a single line containing one integer —
the number of matches needed to write the result (A+B).

Constraints
1≤T≤1,000
1≤A,B≤106

Example Input
3
123 234
10101 1010
4 4

Example Output
13
10
7

Explanation
Example case 1: The result is 357. We need 5 matches to write the digit 3, 5
matches to write the digit 5 and 3 matches to write the digit 7.
Example case 2: The result is 11111. We need 2 matches to write each digit 1,
which is 2⋅5=10 matches in total.
*/
#include <iostream>
using namespace std;
int find(int n){
  // your code goes here
    int r, s=0;
    int a[10]={6,2,5,5,4,5,6,3,7,6};
    while(n != 0){
      r=n%10;
	    n=n/10;
	    s=s+a[r];
	}
	return s;
}
int main() {
	int t, a, b, n;
	cin>>t;
	while(t--){
    cin>>a>>b;
    n=a+b;
	    cout<<find(n)<<endl;
	}
	return 0;
}
