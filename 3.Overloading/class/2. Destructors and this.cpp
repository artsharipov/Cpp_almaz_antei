#include <iostream>
#include <string>
using namespace std;

class Array
{
private:
  int* data;
  int len;
public:
  Array(int len)
  {
    data = new int[len];
    this->len = len;
  }
  ~Array()
  {
    cout << "dest" << endl;
    delete[] data;
  }

  void set(int index, int val)
  {
    data[index] = val;
  }
  int get(int index)
  {
    return data[index];
  }
};


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
		return module_of_number() > c.module_of_number();
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
	Complex& operator+=(Complex c)
	{
		re += c.re;
		im += c.im;
		return *this;
	}
};
int main()
{
 /* Array arr(10);
  arr.set(3, 66);
  cout << arr.get(3);*/
  /////////////////////////
 /* Array*  arr = new Array(10);
  arr->set(3, 66);
  cout << (*arr).get(3);
  delete arr;*/
}
