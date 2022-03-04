/* Given a sorted array remove all duplicates from it
Sample: input=[10,10,20,20,20,30,30]
		output=[10,20,30]*/
//TC=O(n)
#include<bits/stdc++.h>
using namespace std;
/*First method: Create a temporary array and copy all unique elements to that temp array.
TC=O(n) Space complexity=O(n) as we have to take an extra array */
void remove_duplicates_1(int ar[], int n)
{
	int temp[n]; temp[0] = ar[0];
	int res = 1;
	for (int i = 1; i < n; i++)
	{
		if (ar[i] != temp[res - 1])
		{
			temp[res] = ar[i]; res++;
		}
	}
	for (int i = 0; i < res; i++)cout << temp[i] << ' ';
}
/*Second Solution: There is no extra array involved. We compare every element with last element pushed in pushed.
TC=O(n) SC=O(1)*/
void remove_duplicates_2(int ar[], int n)
{
	int res = 1;
	for (int i = 1; i < n; i++)
	{
		if (ar[res - 1] != ar[i])
		{
			ar[res] = ar[i];
			res++;
		}
	}
	for (int i = 0; i < res; i++)cout << ar[i] << " ";
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
	remove_duplicates_1(ar, n);
	cout << endl;
	remove_duplicates_2(ar, n);
}