/*
Give n ranges. Fird the maximum appearing element those ranges..
Sample :
Left Range=[1,2,5,15]
Right Range=[5,8,7,18]
Output : 5
So here 1 to 5 forms one range. 2 to 8 forms one range. 5 to 7 forms one range. 15 to 18 forms one range.
Range 1=[1,2,3,4,5]
Range 2=[2,3,4,5,6,7,8]
Range 3=[5,6,7]
Range 4=[15,16,17,18]
Output : 5. We can see that 5 appears the maximum number of times.

Logic :
L[]=[1,2,3] R[]=[3,5,7] Now we wil take an all 0 array. We will increase by 1 for starting index and decrease the array by 1 for end range + 1.If we take prefix sum of the array gnerated from this. We can find occurence of each element.
*/
#include<bits/stdc++.h>
using namespace std;
int max_occur(int l[], int r[], int n)
{
	vector<int>v(1000, 0);
	//for (int &x : v)cout << x << " "; cout << endl;
	for (int i = 0; i < n; i++)
	{
		v[l[i]]++;
		v[r[i] + 1]--;
	}
	int maxm = v[0]; int res = 0;
	for (int i = 1; i < 1000; i++)
	{
		v[i] += v[i - 1];
		if (maxm < v[i])
		{
			maxm = v[i];
			res = i;
		}
	}
	return res;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); // redirects standard input
	freopen("output.txt", "w", stdout); // redirects standard output
#endif
	int n; cin >> n;
	int l[n]; int r[n];
	for (int i = 0; i < n; i++)	cin >> l[i];
	for (int i = 0; i < n; i++)	cin >> r[i];
	cout << max_occur(l, r, n);
}