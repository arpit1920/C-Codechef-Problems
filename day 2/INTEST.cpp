/*
The purpose of this problem is to verify whether the method you are using to read input data is sufficiently
fast to handle problems branded with the enormous Input/Output warning. You are expected to be able to process at least
2.5MB of input data per second at runtime.

Input
The input begins with two positive integers n k (n, k<=107).
The next n lines of input contain one positive integer ti, not greater than 109, each.

Output
Write a single integer to output, denoting how many integers ti are divisible by k.

Input:
7 3
1
51
966369
7
9
999996
11

Output:
4
*/

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	cin >> n >> k;
	int ans = 0;
	while(n--){
	    int a;
	    cin>>a;
	    if(a%k == 0)
	    ans++;
	}
	cout << ans << "\n";
	return 0;
}
