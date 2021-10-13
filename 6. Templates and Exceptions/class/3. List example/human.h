#pragma once
#include <iostream>
using namespace std;
class Human
{
private:
  string name;
  int age;
public:
  Human(string name = "", int age = 0);
  friend istream& operator>>(istream&, Human&);
  friend ostream& operator<<(ostream&, Human&);
};