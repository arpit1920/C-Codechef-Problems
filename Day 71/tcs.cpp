#include <iostream>
using namespace std;
string getString(char x)
{
  string s(1, x);
	return s;
}
bool solve(string s1, string s2)
{
	string a = getString(s1[0]), b = getString(s2[0]);
	for (int i = 1; i < s1.length(); i++)
		if (s1[i] != s1[i - 1]) {
			a += getString(s1[i]);
		}
	for (int i = 1; i < s2.length(); i++)
		if (s2[i] != s2[i - 1]) {
			b += getString(s2[i]);
		}
	if (a == b)
		return 1;
	return 0;
}
