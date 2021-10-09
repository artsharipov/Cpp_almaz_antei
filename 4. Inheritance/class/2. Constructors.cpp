#include <iostream>
#include <string>
using namespace std;
//class A
//{
//public:
//  A(int a) { cout << "A" << endl; }
//  ~A() { cout << "~A" << endl; }
//};
//class B: public A
//{
//public:
//  B(int a, int b):A(a) { cout << "B" << endl; }
//  ~B() { cout << "~B" << endl; }
//};
//class C: public B
//{
//public:
//  C(int a, int b, int c):B(a,b) { cout << "C" << endl; }
//  ~C() { cout << "~C" << endl; }
//};
//class D: public C
//{
//public:
//  D(int a, int b ,int c, int d): C(a,b,c) { cout << "D" << endl; }
//  ~D() { cout << "~D" << endl; }
//};
///////////////////////////////////////////////////////////
//class Parent
//{
//public:
//  int parent_public;
//protected:
//  int parent_protected;
//private:
//  int parent_private;
//};
//class Child: private Parent
//{
//public:
//  Child()
//  {
//    parent_public = 1;
//    parent_protected = 1;
//    /*parent_private = 1;*/
//  }
//};
//class GrandChild: public Child
//{
//public:
//  GrandChild()
//  {
//    parent_public = 1;
//    parent_protected = 1;
//    /*parent_private = 1;*/
//  }
//}
class A
{
public:
  string show()
  {
    return "A";
  }
};
class B : public A
{
public:
  string show()
  {
    return A::show()+"B";
  }
};
int main()
{
  B b;
  cout << b.show();
  ////////////////
  //D d(1,2,3,4);
  /////////////////////////////
  //Parent p;
  //p.parent_public = 1;
  ////p.parent_protected = 1;
  ////p.parent_private = 1;
  //Child c;
  //c.parent_public = 1;
  //c.parent_protected = 1;
  //c.parent_private = 1;
  //////////////////////////////
}

