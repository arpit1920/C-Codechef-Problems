/*
Lapindrome is defined as a string which when split in the middle,
gives two halves having the same characters and same frequency of each character.
If there are odd number of characters in the string, we ignore the middle character and check for lapindrome.
For example gaga is a lapindrome, since the two halves ga and ga have the same characters with same frequency. Also, abccab, rotor and xyzxy are a few examples of lapindromes. Note that abbaab is NOT a lapindrome. The two halves contain the same characters but their frequencies do not match.
Your task is simple. Given a string, you need to tell if it is a lapindrome.

Input:
First line of input contains a single integer T, the number of test cases.
Each test is a single line containing a string S composed of only lowercase English alphabet.

Output:
For each test case, output on a separate line: "YES" if the string is a lapindrome and "NO" if it is not.

Constraints:
1 ≤ T ≤ 100
2 ≤ |S| ≤ 1000, where |S| denotes the length of S

Example:
Input:
6
gaga
abcde
rotor
xyzxy
abbaab
ababc

Output:
YES
NO
YES
YES
NO
NO
*/

#include<iostream>
#include<string>
using namespace std;
int main() {
    //start your code here
	int t ;
	cin >> t ;
	while(t--) {
	  string inp ;
	  cin >> inp ;
	  string s1=inp.substr(0,inp.length()/2) ;
	  string s2=inp.substr((inp.length()+1)/2) ;
	  int c1[26] ;
	  int c2[26] ;
	  for(int i=0;i<26;i++) {
	    c1[i]=0 ;
	    c2[i]=0 ;
	  }
	  for(int i=0;i<s1.length();i++) {
	    c1[s1[i]-97]++ ;
	    c2[s2[i]-97]++ ;
	  }
	  bool lapindrome=true ;
	  for(int i=0;i<26;i++) {
	    if(c1[i]!=c2[i])
	    {
	      lapindrome=false ;
	      break ;
	    }
	  }
	  if(lapindrome==false)
	    cout << "NO" << endl ;
	  else
	    cout << "YES" << endl ;
	}
	return 0;
}
