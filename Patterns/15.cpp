/*
n=4
   1
  23
 456
78910
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
	int num = 1;
	for (int i = 1; i <= n; i++ )
	{
		for (int j = i; j <= n - 1; j++)cout << " ";
		for (int j = 1; j <= i; j++, num++)
		{
			cout << num;
		}
		cout << endl;
	}
}
