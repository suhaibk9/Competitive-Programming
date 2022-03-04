/*Given an array of int's calculate maximum circular sum subarray.
Sample Input :- [10,5,-5] Output :- 15
Logiv Used: What we are doing is we are first calculating the minimum sum subarray. Then we are subtracting the minimum sum subarray from total. We can calculate the minimum sum subarray by chaging the signs of all elements in array then calculate maximum sum subarray on the inverted array/
*/
#include<bits/stdc++.h>
using namespace std;
//Calculating minimum sum subarray
int minimum_subarray(int ar[], int n)
{
	int till = ar[0], res = ar[0];
	for (int i = 1; i < n; i++)
	{
		till = max(ar[i] + till, ar[i]);
		res = max(till, res);
	}
	return res;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); // redirects standard input
	freopen("output.txt", "w", stdout); // redirects standard output
#endif
	int total = 0;
	int n; cin >> n; int ar[n]; for (int i = 0; i < n; i++) {cin >> ar[i]; total += ar[i]; ar[i] = ar[i] * -1;}
	cout << (total + minimum_subarray(ar, n));
}