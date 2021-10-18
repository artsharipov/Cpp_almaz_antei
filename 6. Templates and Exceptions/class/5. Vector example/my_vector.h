#pragma once
#include <iostream>
using namespace std;
template<typename T> class MyVector
{
private:
  T* arr;
  int capacity;
  int size;
public:
  MyVector()
  {
    arr = new T[1];
    capacity = 1;
    size = 0;
  }
  void push(T val)
  {
    if (size == capacity)
    {
      T* temp = new T[2 * capacity];
      for (int i = 0; i < size; i++)
      {
        temp[i] = arr[i];
      }
      delete[] arr;
      capacity *= 2;
      arr = temp;
    }
    arr[size] = val;
    size++;
  }
  T get(int index)
  {
    if (index < size)
    {
      return arr[index];
    }
  }
  void pop()
  {
    if (size > 0) 
    {
      size--;
    }
  }
  int get_size()
  {
    return size;
  }
  int get_capacity()
  {
    return capacity;
  }
  void show()
  {
    for (int i = 0; i < size; i++)
    {
      cout << arr[i] << endl;
    }
  }
};