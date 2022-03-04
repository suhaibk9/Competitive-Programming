/*
n=5
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
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
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j <= (2 * i - 1); j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}

}