/*
Given an array of integers find max-even odd integers length.
Given input :-
array = [10,12,14,7,8] Output= 3 (14,7,8)
array = [7,10,13,14] Output = 4 (7,10,13,14)  */
#include<bits/stdc++.h>
using namespace std;
//O(n^2)
int even_odd_1(int ar[], int n)
{
	int res = 1;
	for (int i = 0; i < n; i++)
	{
		int curr = 1;
		for (int j = i + 1; j < n; j++)
		{
			if ((ar[j - 1] % 2 == 0 and ar[j] & 1) || (ar[j - 1] & 1 and ar[j] % 2 == 0))
				curr++;
			else
				break;
		}
		res = max(curr, res);
	}
	return res;
}
//O(n)
int even_odd_2(int ar[], int n)
{
	int res = 1, curr = 1;
	for (int j = 1; j < n; j++)
	{
		if ((ar[j - 1] % 2 == 0 and ar[j] & 1) || (ar[j - 1] & 1 and ar[j] % 2 == 0))
		{
			curr++;
			res = max(curr, res);
		}
		else
			curr = 1;
	}
	return res;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); // redirects standard input
	freopen("output.txt", "w", stdout); // redirects standard output
#endif
	int n; cin >> n; int ar[n];
	for (int i = 0; i < n; i++)cin >> ar[i];
	cout << even_odd_1(ar, n) << endl << even_odd_2(ar, n);
}
