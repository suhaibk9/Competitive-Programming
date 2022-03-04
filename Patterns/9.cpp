/*
n=4
A
B C
D E F
G H I j
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
	char ch = 'A';
	for (int i = 1; i <= n; i++ )
	{
		for (int j = 1; j <= i; j++)
		{
			cout << ch << " "; ch++;
		}
		cout << endl;
	}
}
