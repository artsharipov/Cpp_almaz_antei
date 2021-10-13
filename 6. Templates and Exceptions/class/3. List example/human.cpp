#include "human.h"
#include <iostream>
using namespace std;
Human::Human(string name, int age)
{
  this->name = name;
  this->age = age;
}
istream& operator>>(istream& in, Human& h)
{
  cout << "Enter your name: ";
  in >> h.name;
  cout << "Enter your age: ";
  in >> h.age;
  return in;
}
ostream& operator<<(ostream& out, Human& h)
{
  out << "Name: "<< h.name<<endl;
  out << "Age: "<< h.age<<endl;
  return out;
}
