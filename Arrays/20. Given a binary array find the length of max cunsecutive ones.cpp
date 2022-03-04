/*
We are given a binary array i.e. array of only 0's and 1's.We need to find the length of max consecutive 1's.
Sample Input :- array=[0,1,1,0,1,0] Output :- 2
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); // redirects standard input
	freopen("output.txt", "w", stdout); // redirects standard output
#endif
	int n; cin >> n; int ar[n];
	for (int i = 0; i < n; i++)cin >> ar[i];
	int res = 0; int curr = 0;
	for (int i = 0; i < n; i++)
	{

		if (ar[i] == 0)
		{
			curr = 0;
			continue;
		}
		curr++;
		res = max(curr, res);
	}
	cout << res;
}
