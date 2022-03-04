/*
We are given an array of heights it is either 0 or >0. We need to find out how much water can we store.
Input :- heights : [2,0,2] Output : 2
Input :- heights : [3,0,1,2,5] Output : 6
Input :- heights : [3,2,1] Output : 0
Input :- heights : [1,2,3] Output : 0
We need to know we cannot store anything on top of rightmost or leftmost bars.
*/
#include<bits/stdc++.h>
using namespace std;
//Naive Soln :- Will calculate left and right maximum for each bar and we will calculate how much water can be stored on top of that particular bar.
// TC=O(n^2) SC=O(n) as we have taken extra arrays.
int naive(int heights[], int n)
{
	int res = 0;
	for (int i = 1; i < n - 1; i++)
	{
		int lmax = heights[i]; int rmax = heights[i];
		for (int j = 0; j < i; j++)
		{
			lmax = max(lmax, heights[j]);
		}
		for (int j = i + 1; j < n; j++)
		{
			rmax = max(rmax, heights[j]);
		}
		res += min(lmax, rmax) - heights[i];
	}
	return res;
}
//Better Solution :- We can precompute lmax,rmax for each bar and then calculate how much water can be taken for each bar.
// TC=O(n) SC=O(n) as we have taken extra arrays.
int better(int heights[], int n)
{
	int res = 0;
	int lmax[n]; int rmax[n];
	lmax[0] = heights[0]; rmax[n - 1] = heights[n - 1];
	for (int i = 1; i < n; i++)//Compare each bar height with last entered max height in lmax array
		lmax[i] = max(heights[i], lmax[i - 1]);
	for (int i = n - 2; i >= 0; i--)
		rmax[i] = max(heights[i], rmax[i + 1]);
	for (int i = 1; i < n - 1; i++)//Compare each bar height with last entered max height in rmax array
		res += min(lmax[i], rmax[i]) - heights[i];
	// cout << "Right Max Array ";
	// for (int i = 0; i < n; i++)cout << rmax[i] << " ";
	// cout << endl << "Left Max Array ";
	// for (int i = 0; i < n; i++)cout << lmax[i] << " " ;
	// cout << endl;
	return res;

}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); // redirects standard input
	freopen("output.txt", "w", stdout); // redirects standard output
#endif
	int n; cin >> n;
	int heights[n]; for (int i = 0; i < n; i++)cin >> heights[i];
	cout << naive(heights, n) << endl << better(heights, n);

}
