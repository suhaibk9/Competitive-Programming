/*Given 2 arrays one contains marks and one contains roll number. Sort the Roll number array according to increasing order of marks.
Sample Input :-
roll={101,108,103,105}
marks={70,80,40,90}
Output={105,108,101,103}
Login Used :- 1.Make a vector of pair and sort the vector we will have to use a custom comparator to sort.
			   2. Make a pair array and sort the pair by second term using a custom comparator
			   Or we can use greater<pair<int,int>> it reverses the default sorting order*/

#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int>p1, pair<int, int>p2)
{
	return p1.second > p2.second ? p1.second : p2.second;
}
//Same compartor can be used to sort a normal pair array. This is sorting by second element in the pair.


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); // redirects standard input
	freopen("output.txt", "w", stdout); // redirects standard output
#endif
	int n; cin >> n;
	int roll[n];
	int marks[n];
	vector<pair<int, int>>v;
	for (int i = 0; i < n; i++)cin >> roll[i];
	for (int i = 0; i < n; i++)cin >> marks[i];
	for (int i = 0; i < n; i++)v.push_back({roll[i], marks[i]});
	sort(v.begin(), v.end(), cmp);
	for (auto x : v)
		cout << x.first << " " << x.second << endl;
}



//Second Menthod by just using a pair array
// int main()
// {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin); // redirects standard input
// 	freopen("output.txt", "w", stdout); // redirects standard output
// #endif
// 	int n; cin >> n;
// 	int roll[n];
// 	int marks[n];
// 	pair<int, int>p[n];
// 	for (int i = 0; i < n; i++)cin >> roll[i];
// 	for (int i = 0; i < n; i++)cin >> marks[i];
// 	for (int i = 0; i < n; i++)
// 		p[i] = {roll[i], marks[i]};
// 	sort(p, p + n, cmp);
// 	for (auto x : p)
// 		cout << x.first << " " << x.second << endl;
// }