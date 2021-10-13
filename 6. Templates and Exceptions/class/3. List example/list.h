#pragma once
#include <iostream>
using namespace std;
template<typename T>
struct Link
{
  T data;
  Link* next;
};
template<typename T>
class List
{
private:
  Link<T>* current;
public:
  List()
  {
    current = nullptr;
  }
  void add_item(T);
  void show();
};



template<typename T>
void List<T>::add_item(T val)
{
  Link<T>* new_link = new Link<T>;
  new_link->data = val;
  new_link->next = current;
  current = new_link;
}
template<typename T>
void List<T>::show()
{
  Link<T>* temp = current;
  while (temp)
  {
    cout << temp->data << endl;
    temp = temp->next;
  }
}