/*Find the leaders in an array. Leader is an element which is greater than all elements on it's right
Sample Input :- ar=[7,10,4,10,6,5,2]
	   Output :- 2,5,6,10
Logic : We can directly print the last element as there is nothing right to it.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); // redirects standard input
	freopen("output.txt", "w", stdout); // redirects standard output
#endif
	vector<int>v;
	int n; cin >> n; int ar[n]; for (int i = 0; i < n; i++)cin >> ar[i];
	int curr_leader = ar[n - 1];
	v.push_back(curr_leader);
	for (int i = n - 2; i >= 0; i--)
	{
		if (ar[i] > curr_leader)
		{
			v.push_back(ar[i]);
			curr_leader = ar[i];
		}
	}
	reverse(v.begin(), v.end());
	for (int x : v)cout << x << " ";
}