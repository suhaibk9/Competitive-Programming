/*
Find an equilibrium point in an array. Equilibrium point is an element in an array on whose left and right the sum is exactly the same.
Sample Input : array = [3,4,8,-9,20,6] Output : 20 is the equib point as sum on both it's left and right is same.
	   Input : array = [4,2,-2] Output : 4 as left of 4 sum is 0
*/
#include<bits/stdc++.h>
using namespace std;
//It's naive becuase it requires 2 extra arrays and 3
bool equib_naive(int prefix[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int lsum = 0, rsum = 0;
		for (int j = 0; j < i; j++)lsum += prefix[i];
		for (int j = i + 1; j < n; j++)rsum += prefix[i];
		if (lsum == rsum)return true;
	}
	return false;
}
//TC : O(n) and SC : O(1)
bool equib_best(int ar[], int n)
{
	int sum = 0; for (int i = 0; i < n; i++)sum += ar[i];
	int lsum = 0;
	for (int i = 0; i < n; i++)
	{
		if (lsum == sum - ar[i])
		{
			return true;
		}
		lsum += ar[i];
		sum -= ar[i];
	}
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); // redirects standard input
	freopen("output.txt", "w", stdout); // redirects standard output
#endif
	int n; cin >> n;
	int ar[n]; for (int i = 0; i < n; i++)cin >> ar[i];
	int prefix[n]; prefix[0] = ar[0];
	for (int i = 1; i < n; i++)
		prefix[i] = ar[i] + prefix[i - 1];
	cout << equib_naive(prefix, n) << endl;

}