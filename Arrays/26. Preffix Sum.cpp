/*Create a prefix sum array from the given array.
We will also try to calculate sum between two indexes.*/
#include<bits/stdc++.h>
using namespace std;
int difference_between(int prefix[], int l, int r)
{
	if (l != 0)
		return prefix[r] - prefix[l - 1];
	else
		return prefix[r];
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
	int prefix[n]; prefix[0] = ar[0];
	for (int i = 1; i < n; i++)
		prefix[i] = ar[i] + prefix[i - 1];
	for (int i = 0; i < n; i++)
		cout << prefix[i] << " ";
	int l, r; cin >> l >> r;
	cout << endl << difference_between(prefix, l, r);
}