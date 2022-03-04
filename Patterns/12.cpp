/*
n=4
   *
  **
 ***
****
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
		for (int j = 1; j <= i - 1; j++) {
			cout << " ";
		}
		for (int j = n; j >= i; j--)cout << "*";
		cout << endl;
	}
}