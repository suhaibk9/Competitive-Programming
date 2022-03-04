/*We are given two arrays one is a char array and one is an int array. We need to sort the char array according to the int array
Sample Input =
array a=[3,1,2]
array b=['g','e','v']
Sample Output
array b=['e','v','g']

Logic Used = Make a pair array put both of them in pairs put int on first position and char on second. Sort the pair array and as we know by default sort function sorts by first element of the pair so it will be sorted then we can print the second of the pair array.
The pair for above input will be {{3,'e'},{1,'v'},{2,'g'}}
After Sorting pair={{1,'v'},{2,'g'},{3,'e'}}*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); // redirects standard input
	freopen("output.txt", "w", stdout); // redirects standard output
#endif
	int n;
	cin >> n;
	int ar[n];
	char ch[n];
	for (int i = 0; i < n; i++)cin >> ar[i];
	for (int i = 0; i < n; i++)cin >> ch[i];
	pair<int, char>p[n]; //Pair Array first position will have the int and second one will have char
	for (int i = 0; i < n; i++)
		p[i] = {ar[i], ch[i]};//can m
	sort(p, p + n); //will sort by first element of the pair
	for (int i = 0; i < n; i++)cout << p[i].second << " ";
}
