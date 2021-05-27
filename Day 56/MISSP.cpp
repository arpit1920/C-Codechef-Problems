/*
Chef is fan of pairs and he likes all things that come in pairs.
He even has a doll collection in which the dolls come in pairs.
One day while going through his collection he found that there are odd number of dolls.
Someone had stolen a doll!!!
Help chef find which type of doll is missing.

Input
The first line contains an integer T, the number of test cases.
The first line of each test case contains an integer N, the number of dolls.
The next N lines are the types of dolls that are left.

Output
For each test case, display the type of doll that doesn't have a pair, in a new line.

Constraints
1<=T<=10
1<=N<=100000 (10^5)
0<=type<=100000

Input:
1
3
1 
2
1

Output:
2


Input:
1
5
1
1
2
2
3

Output:
3
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
	int t , n , a[n],i,j;
	cin>>t;
	while(t--) {
	    cin>>n;
	    for(i = 0; i<n ; i++) {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    for(j = 0; j<n ; j++){
	        if(a[j]==a[j+1]) {
	            j++;
			}
	            else {
	                cout<<a[j]<<endl;
	                
	            } 
	        }
	}
	return 0;
}