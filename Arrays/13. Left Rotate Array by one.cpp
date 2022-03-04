/*Given an array left rotate it by one,
Sample: input=[1,2,3,4,5]
		output=[2,3,4,5,1]*/
//TC=O(n)
#include<bits/stdc++.h>
using namespace std;
void rotate_left_by_one(int ar[], int n) {
	int last = ar[0];
	for (int i = 0; i < n - 1; i++)
	{
		ar[i] = ar[i + 1];
	}
	ar[n - 1] = last;
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
	rotate_left_by_one(ar, n);
	for (int i = 0; i < n; i++)cout << ar[i] << " ";
}