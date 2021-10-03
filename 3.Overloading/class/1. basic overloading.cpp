#include <iostream>
#include <string>
using namespace std;

class Complex
{
private:
	double re, im;
public:
	Complex(double _re = 0, double _im = 0)
	{
		set_re(_re);
		set_im(_im);
	}
	double module_of_number()
	{
		return sqrt(pow(re, 2) + pow(im, 2));
	}
	double get_re()
	{
		return re;
	}
	void set_re(double _re)
	{
		re = _re;
	}
	double get_im()
	{
		return im;
	}
	void set_im(double _im)
	{
		im = _im;
	}
	string show()
	{
		return to_string(re) + " + " + to_string(im) + " i";
	}
	Complex operator+(Complex c)
	{
		return Complex(re + c.re, im + c.im);
	}
	Complex operator-(Complex c)
	{
		Complex res;
		res.set_re(re - c.re);
		res.set_im(im - c.im);
		return res;
	}
	Complex operator*(Complex c)
	{
		return Complex(re * c.re - im * c.im, re * c.im + im * c.re);
	}
	bool operator==(Complex c)
	{
		return re == c.re && im == c.im;
	}
	bool operator!=(Complex c)
	{
		return !(re == c.re && im == c.im);
	}
	bool operator>(Complex c)
	{
		return module_of_number()>c.module_of_number();
	}
	bool operator>=(Complex c)
	{
		return module_of_number() >= c.module_of_number();
	}
	bool operator<(Complex c)
	{
		return module_of_number() < c.module_of_number();
	}
	bool operator<=(Complex c)
	{
		return module_of_number() <= c.module_of_number();
	}
	void operator+=(Complex c)
	{
		re += c.re;
		im += c.im;
	}
};
//int x = 0;
//int& f()
//{
//	return x;
//}

class SafeArray
{
private:
	const static int size = 10;
	int arr[size];
public:
	void set(int index, int value)
	{
		if (index < 0 || index >= size)
		{
			cout << "Error. Index is out of a range" << endl;
		}
		arr[index] = value;
	}
	int get(int index)
	{
		if (index < 0 || index >= size)
		{
			cout << "Error. Index is out of a range" << endl;
			exit(1);
		}
		return arr[index];
	}
	int& operator[](int index)
	{
		if (index < 0 || index >= size)
		{
			cout << "Error. Index is out of a range" << endl;
			exit(1);
		}
		return arr[index];
	}
};

class ExampleEquality
{
public:
	char* data;
	int length;
	ExampleEquality()
	{

	}
	ExampleEquality(const char* _data, int _length)
	{
		data = new char[_length];
		for (int i = 0; i < _length; i++)
		{
			data[i] = _data[i];
		}
		length = _length;
	}
	~ExampleEquality()
	{
		delete[] data;
	}
	ExampleEquality& operator=(ExampleEquality& c)
	{
		data = new char[c.length];
		for (int i = 0; i < c.length; i++)
		{
			data[i] = c.data[i];
		}
		length = c.length;
		return *this;
	}
	void show()
	{
		cout << data << endl;
	}
};

int main()
{
	ExampleEquality ex("Jack Black", 11);
	ExampleEquality ex_copy;
	ex_copy = ex;
	ex.data[1] = 'o';
	ex_copy.show();
	///////////////////////////////
	/*Complex a(2, 3);
	Complex b;
	b = a;
	cout << b.show();*/
	/////////////////////////////////////////////
	//SafeArray s;
	//s[3] = 5;
	//cout << s[3];
	//s.set(3, 5);
	//cout << s.get(30);
////////////////////////////////////////
	//f() = 7;
	//z = f();
	/*f() = 7;
	f() = 7;
	cout<<x;*/
	////////////////////////////////
	//Complex a(2, 3);
	//Complex b(4, 5);
	/*Complex c(6, 7);
	Complex d;

	d = a+b+c;*/

	//cout<<d.show();

	//cout << (a > b);

	//a += b;
}

