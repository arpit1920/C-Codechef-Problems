/*
Write a program to take a character (C) as input and check whether the given character is a vowel or a consonant.

NOTE:− Vowels are 'A', 'E', 'I', 'O', 'U'. Rest all alphabets are called consonants.

Input:
First line will contain the character C.

Output:
Print "Vowel" if the given character is a vowel, otherwise print "Consonant".

Constraints
C will be an upper case English alphabet

Sample Input:
Z

Sample Output:
Consonant
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    // your code goes here
	char c;
	cin>>c;
	if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
	    cout<<"Vowel"<<"\n";
	else if( c>='A' && c<='Z')
	    cout<<"Consonant"<<"\n";
	return 0;
}
