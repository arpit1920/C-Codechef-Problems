/*
The chef has a recipe he wishes to use for his guests, but the recipe will make far more food than he can serve to the guests.
The chef therefore would like to make a reduced version of the recipe which has the same ratios of ingredients,
but makes less food. The chef, however, does not like fractions.
The original recipe contains only whole numbers of ingredients, and the chef wants the reduced recipe to only contain whole numbers of ingredients as well.
Help the chef determine how much of each ingredient to use in order to make as little food as possible.

Input
Input will begin with an integer T, the number of test cases. Each test case consists of a single line. The line begins with a positive integer N, the number of ingredients.
N integers follow, each indicating the quantity of a particular ingredient that is used.

Output
For each test case, output exactly N space-separated integers on a line,
giving the quantity of each ingredient that the chef should use in order to make as little food as possible.

Sample Input
3
2 4 4
3 2 3 4
4 3 15 9 6

Sample Output
1 1
2 3 4
1 5 3 2

Constraints
T≤100
2≤N≤50

All ingredient quantities are between 1 and 1000, inclusive.
*/

#include <iostream>
using namespace std;
int gcd(int a , int b){
    if(a<b){
        return gcd(b,a);
    }
    if(b==0){
        return a;
    }
    while(a>0 && b>0){
       return gcd(b,a%b);
    }
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int ans=arr[0];
	     for(int i=0;i<n;i++){
	       ans=gcd(ans,arr[i]);
	    }
	     for(int i=0;i<n;i++) {
	        cout<<arr[i]/ans<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
