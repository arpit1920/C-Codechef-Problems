/*

Write a program to obtain a number (N) from the user and
display whether the number is a one digit number, 2 digit number,
3 digit number or more than 3 digit number

Input:
First line will contain the number N,

Output:
Print "1" if N is a 1 digit number.
Print "2" if N is a 2 digit number.
Print "3" if N is a 3 digit number.
Print "More than 3 digits" if N has more than 3 digits.

Constraints
0=N=1000000

Sample Input:
9

Sample Output:
1

*/

#include <iostream>
#include<cmath>
using namespace std;
int main() {
	// your code goes here
	int a;
	long int n;
	cin>>n;
	a=log10(n)+1;
	if(a==1)
	cout<<"1";
	else if(a==2)
	cout<<"2";
	else if(a==3)
	cout<<"3";
	else
	cout<<"More than 3 digits";
	return 0;
}
