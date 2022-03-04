/*
Given an array we need to find maximum value of ar[j]-ar[i] where j>i.
Sample input :- ar=[2,3,10,6,4,8,1]
	   Output :- 8 (10-2)
2 solutions possible O(n^2) and O(n)
*/
#include<bits/stdc++.h>
using namespace std;
//O(n^2) Solution
int naive_soln(int ar[], int n)
{
	int res = ar[1] - ar[0];
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			res = max(res, ar[j] - ar[i]);
		}
	}
	return res;
}
//O(n) Solution
int best_soln(int ar[], int n)
{
	int res = ar[1] - ar[0];
	int mini = ar[0];
	for (int i = 1; i < n; i++)
	{
		res = max(res, ar[i] - mini);
		mini = min(ar[i], mini);
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
	cout << "Naive " << naive_soln(ar, n) << endl << "Best " << best_soln(ar, n);
}