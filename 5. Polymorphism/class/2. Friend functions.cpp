#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//class B;
//class A
//{
//private:
//  int a;
//public:
//  A()
//  {
//    a = 1;
//  }
//  friend int func(A, B);
//};
//class B
//{
//private:
//  int b;
//public:
//  B()
//  {
//    b = 2;
//  }
//  friend int func(A, B);
//};
//int func(A a_obj, B b_obj)
//{
//  return a_obj.a + b_obj.b;
//}
class Time
{
private:
  int min, sec;
public:
  Time(int min=0, int sec=0)
  {
    this->min = min;
    this->sec = sec;
  }
  friend ostream& operator<<(ostream&, Time&);
  friend istream& operator>>(istream&, Time&);
};
ostream& operator<<(ostream& s, Time& t)
{
  s << t.min << " " << t.sec << endl;
  return s;
}
istream& operator>>(istream& s, Time& t)
{
  cout << "Enter minutes and seconds" << endl;
  s >> t.min>>t.sec;
  return s;
}
int main()
{
  ofstream out("file.txt");
  Time t;
  cin >> t;
  out << t;
  out.close();
  //cout << t;
  ////////////////////////////////
  //A a_obj;
  //B b_obj;
  //cout << func(a_obj, b_obj);
}

