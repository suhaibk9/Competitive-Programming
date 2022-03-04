/*Vectors are dynamic sized array
vector<dataType>v;
Functions -
1. v.push_back(ele) :- It will insert ele at the end of the vector.
2. v.pop_back() :- It will remove ele from the back of the vecotr.
3. v.front() :- It will give us the first value of the vector. It can also be used to change the 1st value eg. v.front()=100;
4. v.back() :- It will give us the last value of the vector. It can also be used to change the last value eg. v.backt()=100;
5. v.insert() :- It can be used in multiple ways. v.insert(position,value). This will insert value at position. eg.auto it=v.insert(v.begin(),10)
 				There is a small catch iterator returned always points to the value inserted.
 				Second way :- v.insert(position,times,value) eg. v.inset(v.begin(),2,300). This says insert 300 at v.begin() position 2 times.
				Third way :- Say we have a vector v={1,2,3,4} now we created a new vector v2 and we want only first two elements of v in v2 so we can do v2.insert(v2.begin,v.begin(),v.begin()+2).
				Fourth way :- vector<int>v(10,4) = It will push 4 ten times in the vector.
6. v.size() :- To calculate length of vector
7. v.erase() :- Can be used in multiple ways.
				v.erase(iterator) It will just remove the element at iterator.
				v.erase(v.begin(),v.begin()+2) It will remove the first two elements.
				To delete all the elements just do v.erase(v.begin(),v.end())
8. v.clear() :- It will remove all elements from vector. After doing v.clear() if we do v.size() it will be 0.
9. v.empty() :- Will return boolean value if vector is empty or not.
10. v.resize() :- will change the size of vector. say original vector v={1,2,3,4,5}.
				  If we do v.resize(3). v will become {1,2,3}. 4 & 5 will be dropped.
				  If we do v.resize(6). v will become {1,2,3,4,5,0}. It will be filled with one default value which will be 0 in case of int vector.

Time Complexity :-
O(1) - front(),back(),empty(),begin(),end(),rbegin(),rend(),size(),push_back(),pop_back()
O(n) - insert,erase,resize
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); // redirects standard input
	freopen("output.txt", "w", stdout); // redirects standard output
#endif
	vector<int>v1(10, 4);//will insert 4 ten times in the vector
	for (int x : v1)cout << x << " ";
	cout << endl;
	vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	v.push_back(11);//11 added at the end of vector v
	v.pop_back();//Remove 11 from back of vector v
	for (int x : v)cout << x << " ";//one way to print but can change value here
	cout << endl;
	for (int &x : v) {//This will change but it is uncontrollable it will change all the values
		x = 10;
		cout << x << " ";
	}
	v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};//Bringing it back to orinal vector
	cout << endl << v.front() ; //First value in vector
	cout << endl << v.back() << endl; //Last value in vector
	v.insert(v.begin() + 5, 100); //Insert 100 at 5th position
	for (int x : v)cout << x << " ";
	v.insert(v.begin() + 7, 2, 100); //It will insert 100 two times at 7th position and it's not compulsory to use v.begin() We can give it any iterator
	cout << endl; for (int x : v)cout << x << " ";
	//For both examples they return an iterator directly to the new element added.
	//eg. auto it=v.insert(v.begin()+5,10); 'it' will point to the new 10 added at position 5.
	//This can be further used like v.insert(it,4). Insert 4 at posion it;
	auto it = v.insert(v.begin() + 2, 80);
	cout << endl << (*it) << endl;
	for (int x : v)cout << x << " ";
	v.insert(it, 3, 200);
	cout << endl;
	for (int x : v)cout << x << " ";
	vector<int>v2;
	v2.insert(v2.begin(), v.begin(), v.begin() + 3);//Will copy all elements from v.begin() to v.begin()+2 in vector v2
	cout << endl;
	for (int x : v2)cout << x << " ";
	cout << endl << v.size();
	cout << endl << v2.size();
	v2.resize(10); cout << endl;
	for (int x : v2)cout << x << " ";
	v2.clear();
	for (int x : v2)cout << x << " ";
}