/*
n=4
1
2 1
3 2 1
4 3 2 1
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
		for (int j = i; j >= 1; j--)
		{cout << j << " ";}
		cout << endl;
	}
}
