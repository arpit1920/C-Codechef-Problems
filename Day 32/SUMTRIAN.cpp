/*
Let's consider a triangle of numbers in which a number appears in the first line,
two numbers appear in the second line, three in the third line, etc.
Develop a program which will compute the largest of the sums of numbers that appear on the paths starting from the top towards the base, so that:
on each path the next number is located on the row below, more precisely either directly below or below and one place to the right;
the number of rows is strictly positive, but less than 100
all numbers are positive integers between 0 and 99.

Input
In the first line integer n - the number of test cases (equal to about 1000). Then n test cases follow. Each test case starts with the number of lines which is followed by their content.

Output
For each test case write the determined value in a separate line.

Example
Input:
2
3
1
2 1
1 2 3
4
1
1 2
4 1 2
2 3 1 1

Output:
5
9
*/

#include<algorithm>
#include<cmath>
#include<cstring>
#include<iostream>
#include<map>
#include<list>
#include<set>
#include<vector>

using namespace std;
typedef long long ll;

void test_cases(){
	int n;
	cin >> n;
	int arr[n][n], dp[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cin >> arr[i][j];
			dp[i][j]=0;
		}
	}
	for(int i=0;i<n;i++){
		dp[n-1][i] = arr[n-1][i];
	}
	for(int i=n-2;i>=0; i--){
		for(int j=0;j<=i;j++){
			dp[i][j] = arr[i][j] + max(dp[i+1][j],dp[i+1][j+1]);
		}
	}

	cout << dp[0][0] << "\n";
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 1;
	cin >> t;

	for(int tt = 1; tt <= t; tt++){
		test_cases();
	}
	return 0;
}
