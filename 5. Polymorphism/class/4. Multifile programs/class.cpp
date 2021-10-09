#include "class.h"
#include <iostream>
void A::show() 
{
  std::cout << "show\n";
}
void A::get()
{
  std::cout << data << std::endl;
}
void A::set(int val)
{
  data = val;
}