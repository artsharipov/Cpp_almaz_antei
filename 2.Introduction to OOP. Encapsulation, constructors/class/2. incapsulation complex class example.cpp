#include <iostream>
#include <string>
using namespace std;
/*class Human
{
private:
	string name;
	int age;
public:
	Human(string _name, int _age)
	{
		set_age(_age);
		set_name(_name);
		
	}
	void show()
	{
		cout << name << " " << age << endl;
	}
	int get_age()
	{
		return age;
	}
	void set_age(int _age) 
	{
		if (_age >= 0)
		{
			age = _age;
		}
		else
		{
			age = 0;
		}
	}
	string get_name()
	{
		return name;
	}
	void set_name(string _name)
	{
		name = _name;
	}

};*/
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
	Complex add(Complex c)
	{
		return Complex(re + c.re, im + c.im);
	}
	Complex sub(Complex c)
	{
		Complex res;
		res.set_re(re - c.re);
		res.set_im(im - c.im);
		return res;
	}
	Complex mul(Complex c)
	{
		//(a+ib) * (x+iy) = ax +i ay +i bx - by  =ax - by + ay+bx i
		return Complex(re * c.re - im * c.im, re*c.im+im*c.re);
	}
	bool is_equal_to(Complex c)
	{
		return re == c.re && im == c.im;
	}
	bool is_not_equal_to(Complex c)
	{
		return !(re == c.re && im == c.im);
	}
};
////////////////////////////////////////////////////
int main()
{
	Complex z1(2, 3);
	Complex z2(27, 3);
	if (!z1.is_equal_to(z2))
	{
		cout << "not equal";
	}
	else
	{
		cout << "equal";
	}
	/////////////////////////////////////////

	//Complex z1(2, 3);
	//Complex z2(27, 3);
	////cout << z1.is_equal_to(z2)<<endl;
	//if (z1.is_equal_to(z2))
	//{
	//	cout << "equal";
	//}
	//else
	//{
	//	cout << "not equal";
	//}
	//////////////////////////////
	/*Complex z1(2, 3);
	Complex z2(6, 9);
	Complex z3 = z1.mul(z2);
	cout << z3.show() << endl;*/
	////////////////////////
	/*Complex z1(2, 3);
	Complex z2(6, 9);
	Complex z3(1, 1);
	Complex z4 = z1.add(z2).sub(z3);
	cout << z4.show() << endl;*/
	/////////////////////////////////////////
	//Complex z1(2, 3);
	//Complex z2(6, 9);
	////Complex z3 = z1.add(z2);
	//Complex z3 = z2.sub(z1);
	//cout << z3.show() << endl;
	/////////////////////////////////////////
	/*Complex z(2, 3);
	z.set_re(7);
	cout << z.show();*/
	//////////////////////////////////////////
	/*Human jack("Jack", 20);
	//jack.show();
	cout << jack.get_name() << endl;
	jack.set_age(-20);
	jack.show();*/
	//////////////////////////////////////////


}