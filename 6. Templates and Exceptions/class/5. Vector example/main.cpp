#include <iostream>
#include "my_vector.h"
using namespace std;

int main()
{
  MyVector<int> v;
  v.push(2);
  v.push(6);
  v.push(10);
  v.show();
}
