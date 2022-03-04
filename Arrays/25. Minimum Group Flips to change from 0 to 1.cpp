/*We are given a binary array. We need to make all the elements same i.e. make all 0 or 1.
 Input :- array=[1,0,0,0,1,0,0,1,1,1,1]
 Output :- From 1 to 3
 		   From 5 to 6
 Logic Used :- We will have to decide what do we flip 0 or 1.
 			   We know that the difference in number of groups of 0's and 1's is either 0 or 1. In our code we will flip the second thing that appears which basically means like for above example it will be 0 but say we have an array like [0,0,1,1,.....] then we willl flip 1 as it's the second set.
*/
#include<bits/stdc++.h>
using namespace std;
void printGroups(int ar[], int n)
{
	for (int i = 1; i < n; i++)
	{
		//We only have to flip in groups so if the element is same as previous elemenmt that means the same group is still going on so no need to flip just move on. We will flip when the element chanmges i.e 0 changes to 1 or 1 changes to 0.
		if (ar[i - 1] != ar[i])
		{
			//Checking that we only flip the second set/group of 0 or 1. So for that we can just compare it with ar[0].If it matches that means it's not the part of the second set if it doesn't that means its the seond group.
			if (ar[i] != ar[0])
				cout << "From " << i << " to ";
			else
				cout << (i - 1) << endl;
		}
	}
	//This is to handnle if the last element in the array is starting of a new group and the element is not equeal to ar[0]
	if (ar[n - 1] != ar[0])
		cout << (n - 1) << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); // redirects standard input
	freopen("output.txt", "w", stdout); // redirects standard output
#endif
	int n; cin >> n; int ar[n]; for (int i = 0; i < n; i++)cin >> ar[i];
	printGroups(ar, n);
}