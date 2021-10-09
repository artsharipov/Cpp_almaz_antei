#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
 // ofstream out("file.txt");
	//for (int i = 0; i < 10; i++)
	//{
	//	out << i << endl;
	//}
	//out.close();
	////////////////////////
	ifstream in("file.txt");
	string res = "";
	while (in)
	{
		string t;
		in >> t;
		res += t;
	}
	cout << res;
}

