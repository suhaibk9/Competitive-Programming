//TC=O(n)
#include<bits/stdc++.h>
using namespace std;
bool isSorted(int ar[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (ar[i] > ar[i + 1])return false;
	}
	return true;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); // redirects standard input
	freopen("output.txt", "w", stdout); // redirects standard output
#endif
	int n;
	cin >> n;
	int ar[n];
	for (int i = 0; i < n; i++)cin >> ar[i];
	cout << isSorted(ar, n);
}