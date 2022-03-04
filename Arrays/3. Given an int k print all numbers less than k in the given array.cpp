/*We are given an array and an integer k we have to print out all the elements less than k in that array.
Sample Input : ar=[12,101,33,56,46] k=45
Sample Output : [12,33]
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> less_than_k(vector<int>&v, int k)
{
	vector<int>less;
	for (auto it = v.begin(); it != v.end(); it++)
	{
		if (k > (*it))less.push_back((*it));
	}
	return less;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); // redirects standard input
	freopen("output.txt", "w", stdout); // redirects standard output
#endif
	int n; cin >> n;
	vector<int>v;
	for (int i = 0; i < n; i++)
	{
		int x; cin >> x;
		v.push_back(x);
	}
	int k; cin >> k;
	v = less_than_k(v, k);
	for (int x : v)cout << x << " ";
}