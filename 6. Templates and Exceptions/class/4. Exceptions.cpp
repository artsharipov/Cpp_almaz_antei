#include <iostream>
using namespace std;
//const int max_size = 5;
//template <typename T>
//class Stack
//{
//private:
//  T arr[max_size];
//  int top;
//public:
//  class Full
//  {
//  public:
//    string func;
//    Full(string _func)
//    {
//      func = _func;
//    }
//  };
//  class Empty
//  {
//  public:
//    string func;
//    Empty(string _func)
//    {
//      func = _func;
//    }
//  };
//  Stack()
//  {
//    top = -1;
//  }
//  void push(T t)
//  {
//    if (top >= max_size - 1)
//    {
//      throw Full("The error is in push");
//    }
//    arr[++top] = t;
//  }
//  T pop()
//  {
//    if (top < 0)
//    {
//      throw Empty("The error is in pop");
//    }
//    return arr[top--];
//  }
//};
int main()
{
  int size;
  char* ptr;
  try 
  {
    ptr = new char[size];
  }
  catch (bad_alloc)
  {
    cout << "Too many elements in array\n";
  }
  
  delete[] ptr;
  /////////////////////////////////////////////
  //Stack <int> st;
  //try
  //{
  //  for (int i = 0; i < 7; i++)
  //  {
  //    st.push(i);
  //  }
  //}
  //catch (Stack<int>::Full error)
  //{
  //  cout << "Too many elements in stack" << endl;
  //  cout << error.func << endl;
  //}
  //try
  //{
  //  for (int i = 0; i < 7; i++)
  //  {
  //    cout << st.pop() << endl;
  //  }
  //}
  //catch (Stack<int>::Empty error)
  //{
  //  cout << "No elements in stack" << endl;
  //  cout << error.func << endl;
  //}

  
  
  //////////////////////////////
 /* try
  {
    throw - 1;
  }
  catch (int a)
  {
    cout << "error with code " << a << endl;
  }
  catch (string str)
  {
    cout << "error with text " << str << endl;
  }*/
}
