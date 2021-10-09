#include <iostream>
#include <string>
using namespace std;
//class A
//{
//public:
//  void show_A()
//  {
//    cout << "A" << endl;
//  }
//  void show()
//  {
//    cout << "A" << endl;
//  }
//};
//class B
//{
//public:
//  void show_B()
//  {
//    cout << "B" << endl;
//  }
//  void show()
//  {
//    cout << "B" << endl;
//  }
//};
//class  C: public A, public B
//{
//};
//////////////////////////////////////////
class A
{
public:
  void show()
  {
    cout << "A";
  }
};
class B: public A{};
class C : public A {};
class D : public B, public C {};
int main()
{
  /*C c;*/
 /* c.show_A();
  c.show_B();*/
  /*c.B::show();*/
  //////////////////////////////
  D d;
  d.B::show();
}

