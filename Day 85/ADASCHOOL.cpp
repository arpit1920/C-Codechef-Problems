/*
Problem: nhttps://www.codechef.com/problems/ADASCOOL

Ada's classroom contains N⋅M tables distributed in a grid with N rows and M columns.
Each table is occupied by exactly one student.
Before starting the class, the teacher decided to shuffle the students a bit.
After the shuffling, each table should be occupied by exactly one student again.
In addition, each student should occupy a table that is adjacent to that student's original table,
i.e. immediately to the left, right, top or bottom of that table.
Is it possible for the students to shuffle while satisfying all conditions of the teacher?

Input
The first line of the input contains a single integer T denoting the number of test cases.
The description of T test cases follows.
The first and only line of each test case contains two space-separated integers N and M.

Output
For each test case, print a single line containing the string "YES"
if it is possible to satisfy the conditions of the teacher or "NO" otherwise (without quotes).

Constraints
1≤T≤5,000
2≤N,M≤50

Example Input
2
3 3
4 4

Example Output
NO
YES

Explanation
Example case 2: The arrows in the following image depict how the students moved.
*/

#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
    int test_cases{};
    cin >> test_cases;
    while(test_cases > 0) {
        int N{} , M{};
        cin >> N >> M;
        if( N*M % 2 == 0){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    test_cases = test_cases - 1;
    }
    return 0;
}
