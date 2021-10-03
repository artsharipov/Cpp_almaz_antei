#include <iostream>
using namespace std;
//class A 
//{
//public:
//	int data;
//	void show_data()
//	{
//		cout << data<<endl;
//	}
//};
///////////////////////////////////////
//class Human
//{
//public:
//	string name;
//	int age;
//	Human(string _name, int _age): name(_name), age(_age){}
//	void show()
//	{
//		cout << name << " " << age << endl;
//	}
//};
////////////////////////////////////////
class Complex
{
public:
	double re;
	double im;
	//Complex()
	//{
	//	re = 0;
	//	im = 0;
	//}
	Complex(double _re = 0, double _im = 0)
	{
		re = _re;
		im = _im;
	}
	void show()
	{
		cout << re << " + i" << im << endl;
	}
};
int main()
{
	//A a;
	//a.data = 4;
	//a.show_data();
	//A aa;
	//aa.data = 3;
	//aa.show_data();
	///////////////////////////////
	/*Human jack;
	jack.name = "Jack Black";
	jack.age = 20;
	jack.show();*/
	///////////////////////////////
	//Human jack;
	//jack.name = "Jack Black";
	//jack.age = 20;

	//Human tom;
	//tom.name = "Tom Red";
	//tom.age = 25;

	//Human alex;
	//alex.name = "Alex Green";
	//alex.age = 15;

	//Human people[]{ jack, tom, alex };

	/*for (int i = 0; i < 3; i++)
	{
		people[i].show();
	}*/

	//for (Human person : people)
	//{
	//	person.show();
	//}

	/*for (auto person : people)
	{
		person.show();
	}*/

	////////////////////////////////////////////////////////////
	//Human jack;
	//jack.name = "Jack Black";
	//jack.age = 20;

	//Human tom;
	//tom.name = "Tom Red";
	//tom.age = 25;

	//Human alex;
	//alex.name = "Alex Green";
	//alex.age = 15;

	//Human people[]{ jack, tom, alex };

	//auto max_age_person = people[0];
	///*max_age_person.show();*/


	//for (auto person : people)
	//{
	//	if (max_age_person.age < person.age)
	//	{
	//		max_age_person = person;
	//	}
	//}

	//max_age_person.show();
	/////////////////////////////////////////////////////
	//Human jack;
	//jack.name = "Jack Black";
	//jack.age = 20;

	//Human tom;
	//tom.name = "Tom Red";
	//tom.age = 25;

	//Human alex;
	//alex.name = "Alex Green";
	//alex.age = 15;

	//Human people[]{ Human("Jack Black", 20), Human("Tom Red", 25), Human("Alex Green", 15) };

	//auto max_age_person = people[0];
	///*max_age_person.show();*/


	//for (auto person : people)
	//{
	//	if (max_age_person.age < person.age)
	//	{
	//		max_age_person = person;
	//	}
	//}

	//max_age_person.show();
	/////////////////////////////////////////////
	Complex z;
	Complex z1(3, 4);
	Complex z2(5);
	z.show();
	z1.show();
	z2.show();
}

