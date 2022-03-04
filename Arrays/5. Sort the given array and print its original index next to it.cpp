/*
We are givem an array we need to sort it and print it's original index next to it.
Sample input=[10,54,21,2]
Output=2 3
	   10 0
	   21 2
	   54 1
Logic Used :- Create a vector of pair and store the array value in first and we can directly take input in vector. Index variable in loop will form the second of the pair.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); // redirects standard input
	freopen("output.txt", "w", stdout); // redirects standard output
#endif
	int n; cin >> n;
	vector<pair<int, int>>v;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		v.push_back({x, i});
	}
	sort(v.begin(), v.end());
	for (auto x : v)
	{
		cout << x.first << " " << x.second << endl;
	}
}