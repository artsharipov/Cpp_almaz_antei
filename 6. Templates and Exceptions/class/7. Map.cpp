#include <iostream>
#include<map>
using namespace std;

int main()
{
  //map<string, int> m;
	//for (size_t i = 0; i < 4; i++)
	//{
	//	string t;
	//	cin >> t;
	//	int n;
	//	cin >> n;
	//	m[t] = n;
	//}
	//m["rus"] = 140;
	//m["usa"] = 300;
	//m["latvia"] = 2;
	/*auto it = m.begin();
	for (size_t i = 0;it!=m.end() ; i++, it++)
	{
		cout << it->first << " " << it->second << endl;
	}*/
	//////////////////////////////////
	/*m["rus"] = 140;
	m["usa"] = 300;
	m["latvia"] = 2;
	auto it = m.find("usak");
	cout << (it == m.end());*/
	/*cout << it->second << endl;*/
	////////////////////////////////////////////////
	map<string, int> countries;
	int num_of_countries;
	cout << "enter number of countries" << endl;
	cin >> num_of_countries;
	for (size_t i = 0; i < num_of_countries; i++)
	{
		string country;
		int number;
		cout << "Country: ";
		cin >> country;
		cout << "number: ";
		cin >> number;
		countries.insert(make_pair(country, number));
	}
	int choice;
	while (true)
	{
		cout << "choice: [0] - check the country, [1] -  delete the country, [2] - add the country: [3] - show all the countries: ";
		cin >> choice;
		if (choice == 0)
		{
			string country;
			cout << "Country: ";
			cin >> country;
			if (countries.count(country))
			{
				cout << countries[country] << endl;
			}
			else
			{
				cout << "Such a country doesn't exist"<<endl;
			}
		}
		else if (choice == 1)
		{
			string country;
			cout << "Country: ";
			cin >> country;
			if (countries.find(country) == countries.end())
			{
				cout << "Such a country doesn't exist" << endl;
			}
			else
			{
				countries.erase(countries.find(country));
				cout << "The country was deleted" << endl;
			}
		}
		else if (choice == 2)
		{
			string country;
			int number;
			cout << "Country: ";
			cin >> country;
			cout << "number: ";
			cin >> number;
			countries[country] = number;
		}
		else if (choice == 3)
		{
			auto it = countries.begin();
			for (size_t i = 0;it!= countries.end() ; i++, it++)
			{
				cout << it->first << " " << it->second << endl;
			}
		}
		else
		{
			cout << "wrong answer. Try one more time" << endl;
		}
		cout << "Do you want to continue? yes - [1] or no [0]: ";
		cin >> choice;
		if (choice == 0)
		{
			break;
		}
	}
}
