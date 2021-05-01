/*
This Code is Contributed by Arpit Bhushan Sharma
Codechef-@koderarpit
Github - @arpit1920
Kaggle - arpit3043
Mail - arpit3043@gmail.com
Two integers A and B are the inputs. Write a program to find GCD and LCM of A and B.

Input
The first line contains an integer T, total number of testcases.
Then follow T lines, each line contains an integer A and B.

Output
Display the GCD and LCM of A and B separated by space respectively.
The answer for each test case must be displayed in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ A,B ≤ 1000000

Example
Input
3
120 140
10213 312
10 30

Output
20 840
1 3186456
10 30
*/

#include <iostream>
using namespace std;
int main() {
    // start your code from here
	int t ;
	cin >> t ;
	while(t--) {
	  int a,b ;
	  cin >> a >> b ;
	  int gcd ;
	  long lcm ;
	  for(gcd=min(a,b);gcd>=1;gcd--) {
	    if(a%gcd==0 && b%gcd==0)
	      break ;
	  }
	  lcm=long(gcd)*(a/gcd)*(b/gcd) ;
	  cout << gcd << " " << lcm << endl ;
	}
	return 0;
}
