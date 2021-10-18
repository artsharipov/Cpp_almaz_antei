#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
using namespace std;
int main()
{
	//vector<int> l;
	//for (size_t i = 0; i < 5; i++)
	//{
	//	l.push_back(i * 2);
	//}
	//auto it = min_element(l.begin()+3, l.end());
	//cout << *it << endl;
	/*auto it = max_element(l.begin(), l.end());
	cout << *it << endl;*/
	////////////////////////////////////////////////
	/*vector<int> l;*/
	//for (size_t i = 0; i < 5; i++)
	//{
	//	l.push_back(i * 2);
	//}
	/*auto it = find(l.begin(), l.end(), 44);
	cout << *it << endl;*/
	///////////////////////////////////////////////
	vector<int> l;
	l.push_back(4);
	l.push_back(-54);
	l.push_back(-4);
	l.push_back(-44);
	/*sort(l.begin(), l.end());*/
	reverse(l.begin(), l.end());
	for (auto& item : l)
	{
		cout << item << endl;
	}
}