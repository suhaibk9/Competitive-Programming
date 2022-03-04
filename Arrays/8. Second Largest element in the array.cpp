
//There are two possible Solutions.
//1. Two traversal solution 2. Single Traversal Solution
//Both are O(n) it's just that one has less traversals
#include<bits/stdc++.h>
using namespace std;
//1. Two traversal solution : First find the largest element in the array that will be the first traversal. Then find the element just small than that ele.
int two_traversal(int ar[], int n)
{
	int largest = ar[0];
	//First Traversal to find the largest element in the array
	for (int i = 0; i < n; i++)
		largest = max(largest, ar[i]);
	int res = -1;
	//Second Traversal to find the second Largest
	for (int i = 0; i < n; i++)
	{
		//We will ignore the duplicate of the largest element.
		if (ar[i] != largest)
		{

			if (res == -1 or ar[i] > ar[res])
				res = i;
		}
	}
	return ar[res];
}
//2. Single Traversal solution : We will find the largest element to certain position and keep on updating as we keep getting elements considering the array to be a stream of elements,
int single_traversal(int ar[], int n)
{
	int largest = 0, second_largest = -1;
	for (int i = 1; i < n; i++)
	{
		if (ar[i] > ar[largest])
		{
			second_largest = largest;
			largest = i;
		}
		else if (ar[i] != ar[largest])
		{
			if (second_largest == -1 or ar[i] > ar[second_largest])
				second_largest = i;
		}
	}
	return ar[second_largest];
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
	cout << single_traversal(ar, n) << endl << two_traversal(ar, n);
}