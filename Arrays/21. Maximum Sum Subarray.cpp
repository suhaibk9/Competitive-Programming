/*
Find the maximum sum in a subarray
Sample Input :- array = [ -3 , 8 , -2 , 4 , -5 , 6]
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); // redirects standard input
	freopen("output.txt", "w", stdout); // redirects standard output
#endif
	int n; cin >> n; int ar[n]; for (int i = 0; i < n; i++)cin >> ar[i];
	int till_here = ar[0], res = ar[0];
	for (int i = 1; i < n; i++)
	{
		till_here = max(ar[i] + till_here, ar[i]);
		res = max(till_here, res);
	}
	cout << res;
}