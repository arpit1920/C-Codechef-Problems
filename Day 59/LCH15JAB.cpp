/*
This is a very easy warm-up problem.
You are given a string. Your task is to determine whether number of occurrences of 
some character in the string is equal to the sum of the numbers of occurrences of 
other characters in the string. 

Input
The first line of the input contains an integer T denoting the number of test cases.
Each of the next T lines contains one string S consisting of lowercase latin letters.

Output
For each test case, output a single line containing "YES" 
if the string satisfies the condition given above or "NO" otherwise.

Constraints
1 = T = 1000
1 = length of S = 50
Subtasks
Subtask #1[28 points]:
S contains no more than 2 different letters.

Subtask #2[72 points]:
No additional conditions

Example
Input:
4
acab
zzqzqq
abc
kklkwwww

Output:
YES
YES
NO
YES
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int  i = 0,count=1,res=0;
	    string s;
	    cin>>s;
	    sort(s.begin(),s.end());
	    while(s[i]!='\0'){
	        if(s[i+1] == s[i])
	        count++;
	        else 
	        count = 1;
	        i++;
	        res = max(res,count);
	    }
	    if(s.length()-res == res)
	    cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	    
	    
	}
	return 0;
}

