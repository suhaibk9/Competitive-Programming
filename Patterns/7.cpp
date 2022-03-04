/*
n=3
A
B B
C C C
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); // redirects standard input
	freopen("output.txt", "w", stdout); // redirects standard output
#endif
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++ )
	{
		for (int j = 1; j <= i; j++)
		{
			cout << char(i + 64) << " ";
		}
		cout << endl;
	}
}