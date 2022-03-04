/*We are given an array of stock prices. We have to maximize the profit by buying and selling.
Sample input :- prices=[1,5,3,8.12]
	   output :- 13((5-1)+(8-3)+(12-8))
Logic : We will buy the stock when it reaches the bottom and we will only sell it when it reaches next high and we will sell it there and next buying will be when it reaches the next low.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); // redirects standard input
	freopen("output.txt", "w", stdout); // redirects standard output
#endif
	int n; cin >> n; int sum = 0;
	int a[n]; for (int i = 0; i < n; i++)cin >> a[i];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > a[i - 1] )
		{
			cout << (a[i] - a[i - 1]) << endl;
			sum +=  (a[i] - a[i - 1]) ;
		}
	}
	cout << sum;
}