#include <iostream>
#include <string>
using namespace std;
class Human
{
protected:
  string name;
  float age;
public:
  Human(string name, float age)
  {
    this->name = name;
    this->age = age;
  }
  string get_name()
  {
    return "My name is: " + name;
  }
  float get_age()
  {
    return age;
  }
  void is_good()
  {
    cout << "My name is: " << name << ". " << "My age is: " << age << endl;
  }
};
class Student: public Human
{
private:
  static const int max_size = 10;
  int marks[max_size];
  int number_of_marks = 0;
public:
  Student(string name, float age, int marks[], int n):Human(name, age)
  {
    for (int i = 0; i < n; i++)
    {
      this->marks[i] = marks[i];
    }
    number_of_marks = n;
  }
  void get_marks()
  {
    for (int i = 0; i < number_of_marks; i++)
    {
      cout << marks[i] << " ";
      cout << endl;
    }
  }
  void is_good()
  {
    Human::is_good();
    float res = 0;
    for (int i = 0; i < number_of_marks; i++)
    {
      res += marks[i];
    }
    res /= number_of_marks;

    if (res >= 4)
    {
      cout << "I'm a good student" << endl;
    }
    else
    {
      cout << "I'm a bad student" << endl;
    }
  }
};
class Teacher : public Human
{
private:
  int number_of_publications;
public:
  Teacher(string name, float age, int number_of_publications):Human(name, age)
  {
    this->number_of_publications = number_of_publications;
  }
  int get_number_of_publications()
  {
    return number_of_publications;
  }
  void is_good()
  {
    Human::is_good();
    if (number_of_publications >= 5)
    {
      cout << "I'm a good teacher" << endl;
    }
    else
    {
      cout << "I'm a bad teacher" << endl;
    }
  }
};
int main()
{
  int marks[3]{ 5,4,5 };
  Student s("Jack", 23, marks, 3);
  Teacher t("Tom", 43, 3);
  //cout << s.get_name() << " " << s.get_age() << endl;
  //s.get_marks();
  //cout << t.get_name() << " " << t.get_age() <<" "<< t.get_number_of_publications()<<endl;
  s.is_good();
  t.is_good();
}
