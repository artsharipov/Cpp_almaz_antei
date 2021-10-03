#include <iostream>
using namespace std;

class Example
{
public:
  char* data;
  int len;
  Example(){ cout << "constructor" << endl; }
  Example(const char* data, int len)
  {
    cout << "constructor" << endl;
    this->data = new char[len];
    for (int i = 0; i < len; i++)
    {
      this->data[i] = data[i];
    }
    this->len = len;
  }
  Example(Example& c)
  {
    cout << "copy" << endl;
    this->data = new char[c.len];
    for (int i = 0; i < c.len; i++)
    {
      this->data[i] = c.data[i];
    }
    this->len = c.len;
  }
  ~Example()
  {
    cout << "destructor" << endl;
    delete[] data;
  }
  Example& operator=(Example& c)
  {
    cout << "= overloading" << endl;
    this->data = new char[c.len];
    for (int i = 0; i < c.len; i++)
    {
      this->data[i] = c.data[i];
    }
    this->len = c.len;
    return *this;
  }
};
int main()
{
  Example a("hello", 6);
  //Example b(a);
  Example b = a;
  /*b = a;*/
  cout << b.data;
}
