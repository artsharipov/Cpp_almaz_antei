#include <iostream>
#include "list.h"
#include "human.h"
using namespace std;


int main()
{
  List<Human> list;
  Human h;
  for (int i = 0; i < 5; i++)
  {
    cin >> h;
    list.add_item(h);
  }
  list.show();
  ////////////////////////////////////
  /*Human h;
  cin >> h;
  cout << h;*/

  //List<int> list;
  //list.add_item(3);
  //list.add_item(5);
  //list.add_item(99);
  //list.add_item(133);
  //list.show();
  //list.show();

  //List<string> list1;
  //list1.add_item("hello");
  //list1.add_item("world");
  //list1.show();
}
