/*Given an array left rotate it by d,
Sample: input=[1,2,3,4,5] d=2
		output=[3,4,5,1,2]
There are 3 solutions.
*/
#include<bits/stdc++.h>
using namespace std;
/*1. Naive Solution : TC=O(nd) SC=O(1)
Here we are simply rotating the array one element at a time. */
void naive_left(int ar[], int n)
{
	int last = ar[0];
	for (int i = 0; i < n - 1; i++)
	{
		ar[i] = ar[i + 1];
	}
	ar[n - 1] = last;
}
void naive_soln(int ar[], int n, int d)
{
	for (int i = 0; i < d; i++)
		naive_left(ar, n);
	for (int i = 0; i < n; i++)cout << ar[i] << ' ';
}
/*2. Best Solution : It has 3 steps first rotate the array from 0 to d-1 then from d to n-1 and the fully rotate the array.
say ar=[1,2,3,4,5] d=2
rotate first half of array from 0 to d-1 ar=[2,1,3,4,5]
rotate second half of array from d to n-1 ar=[2,1,5,4,3]
Now rotate full array ar=[3,4,5,1,2] */
void reverse(int ar[], int s, int e)
{
	for (int i = s; i <= e; i++)cout << ar[i] << " ";
	cout << endl;
	while (s <= e)
	{
		swap(ar[s], ar[e]);
		s++; e--;
	}
}
void best_soln(int ar[], int n, int d)
{
	reverse(ar, 0, d - 1);
	reverse(ar, d, n - 1);
	reverse(ar, 0, n - 1);
	for (int i = 0; i < n; i++)cout << ar[i] << ' ';
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
	int d; cin >> d;
	//naive_soln(ar, n, d);
	cout << endl;
	best_soln(ar, n, d);
}