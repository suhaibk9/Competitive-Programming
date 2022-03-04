/*
We are given an array , one index and one new integer. We will have to place the new int at the given index.
Input : array=[11,23,21,34,32] index =2 element=99
Output : array=[11,23,99,21,34,32]
TC = O(n)
*/
#include<bits/stdc++.h>
using namespace std;
void insert(int ar[], int n, int ele, int idx, int cap = 100)
{
	if (n == cap) {cout << "Array is full"; return;}
	for (int i = n - 1; i >= idx; i--)
		ar[i + 1] = ar[i];
	ar[idx] = ele;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); // redirects standard input
	freopen("output.txt", "w", stdout); // redirects standard output
#endif
	int ar[100]; //This is the capactity of the entire array
	int n;//This is how many values we want to enter
	cin >> n;
	for (int i = 0; i < n; i++)cin >> ar[i];
	for (int i = 0; i < n; i++)cout << ar[i] << " ";
	cout << endl;
	int ele; cin >> ele;
	int idx; cin >> idx;
	insert(ar, n, ele, idx);
	cout << endl;
	for (int i = 0; i < (n + 1); i++)cout << ar[i] << " ";
}