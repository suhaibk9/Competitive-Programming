/*Given a sorted array find the frequency of each element.
Sample Input:- array=[10,10,10,25,30,30]
	   Output:- 10 3
	   			25 1
	   			30 2
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); // redirects standard input
	freopen("output.txt", "w", stdout); // redirects standard output
#endif
	int n; cin >> n; int ar[n]; for (int x = 0; x < n; x++)cin >> ar[x];
	int freq = 1, i = 1;
	while (i < n)
	{
		while (i < n and ar[i] == ar[i - 1])
		{
			i++; freq++;
		}
		cout << ar[i - 1] << " " << freq << endl;
		i++;
		freq = 1;
	}
	if (n == 1 or ar[n - 1] != ar[n - 2])
	{
		cout << ar[n - 1] << " " << 1;
	}
}