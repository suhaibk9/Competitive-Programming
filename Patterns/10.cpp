/*
n=4
D
C D
B C D
A B C D
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
	for (int i = n; i >= 1; i-- )
	{
		for (int j = i; j <= n; j++)
		{
			cout << char(64 + j) << " ";
		}
		cout << endl;
	}
}
