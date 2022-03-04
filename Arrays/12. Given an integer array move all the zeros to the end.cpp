/*
Given an integer array move all the zeros to the end.
Sample: input=[0,10,54,0,1,0]
		output=[10,54,1,0,0,0]
*/
//TC=O(n)
#include<bits/stdc++.h>
using namespace std;
void move_zeros_to_end(int ar[], int n)
{
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (ar[i] != 0)
		{
			swap(ar[cnt], ar[i]);
			cnt++;
		}
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
	move_zeros_to_end(ar, n);
}