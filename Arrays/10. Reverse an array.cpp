//TC=O(n)
#include<bits/stdc++.h>
using namespace std;
void rev(int ar[], int n)
{
	int s = 0, e = n - 1;
	while (s < e)
	{
		swap(ar[s], ar[e]); s++; e--;
	}
	for (int i = 0; i < n; i++)cout << ar[i] << " ";
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
	rev(ar, n);
}