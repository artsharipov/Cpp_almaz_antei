#include <iostream>
using namespace std;
const int max_size = 100;
template <typename T>
class Stack
{
private:
  T arr[max_size];
  int top;
public:
  Stack()
  {
    top = -1;
  }
  void push(T t)
  {
    arr[++top] = t;
  }
  T pop()
  {
    return arr[top--];
  }
};
int main()
{
  Stack<int> s;
  s.push(2);
  s.push(4);
  s.push(0);
  cout << s.pop() << " " << s.pop() << " " << s.pop() << endl;

  Stack<string> s1;
  s1.push("hello");
  s1.push("world");
  s1.push("my");
  cout << s1.pop() << " " << s1.pop() << " " << s1.pop() << endl;
}