#include <iostream>
#include<vector>
using namespace std;

int main()
{
  vector<int> v;
	//v[3] = 9;
	for (size_t i = 0; i < 10; i++)
	{
		v.push_back(i * 2);
	}
	//for (auto& t : v)
	//{
	//	cout << t << endl;
	//}
	//v[0] = 101;
	//cout << v[0]<<endl;
	//cout << v.size() << endl;
	//cout << v.empty() << endl;
	//cout << v.front() << endl;
	//cout << v.back() << endl;
	//cout << v.size() << endl;
	//v.pop_back();
	//for (auto& t : v)
	//{
	//	cout << t << endl;
	//}
	//cout << v.size() << endl;
	///////////////////////////////////////////////
	//v.clear();
	//cout << v.size() << endl;
	///////////////////////////////////////////
	//v.insert(v.begin()+3, 121);
	//for (auto& t : v)
	//{
	//	cout << t << endl;
	//}
	//v.erase(v.begin(), v.begin() + 4);
	//for (auto& t : v)
	//{
	//	cout << t << endl;
	//}
	/*cout << *v.begin();*/
	/*cout << *(v.end()-1);*/
	//for (auto i = v.begin(); i != v.end(); i++)
	//{
	//	cout << *i << " ";
	//}
	for (auto i = v.rbegin(); i != v.rend(); i++)
	{
		cout << *i << " ";
	}
}
