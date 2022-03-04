/*
n=4
A B C
B C D
C D E
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
	for (int i = 1; i <= (n); i++ )
	{
		for (int j = i; j <= n + i - 1 ; j++)
		{
			cout << char(j + 64) << " ";
		}
		cout << endl;
	}
}
