//Given an array find a majority element.
//Majority element = Any element that appears more than n/2 times is called majority element.
#include<bits/stdc++.h>
using namespace std;
int majority(int ar[], int n)
{
	int cnt = 1; int res = 0;
	for (int i = 1; i < n; i++)
	{
		if (ar[res] == ar[i])
			cnt++;
		else
			cnt--;
		if (cnt == 0)
		{
			res = i;
			cnt = 1;
		}
	}
	cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (ar[res] == ar[i])cnt++;
	}
	if (cnt <= n / 2)
	{
		res = -1;
	}
	return res;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); // redirects standard input
	freopen("output.txt", "w", stdout); // redirects standard output
#endif
	int n; cin >> n; int ar[n]; for (int i = 0; i < n; i++)cin >> ar[i];
	cout << majority(ar, n);
}