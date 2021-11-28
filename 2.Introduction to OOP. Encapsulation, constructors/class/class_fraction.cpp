#include <iostream>
using namespace std;

class Fraction {
   public:
      int a,b,c,d,num,den;
      fraction(): num(0), den(0) {}
      void enter()
      {
         cout << "Ввод первой дроби";
         cin >> a >> b;
         cout << "Ввод второй дроби";
         cin >> c >> d;
      }
 
      void sum()
      {
          num = (a*d) + (b* c);
          den = b*d;
      }
			void sub()
			{		
					num = (a*d) - (b* c);
          den = b*d;
			}
			void mult()
			{
					num = a*c;
					den = b*d;
			}
			void div()
			{
					num = a*d;
					den = c*b;
			}
			void dif()
			{
					int nok,a1,c1;
					nok = b*d;
					a1 = (nok/d)*a;
					c1 = (nok/b)*c;
					
					if (a1 == c1)
        			cout << "equals" << "\n";
    			if (a1 > c1)
        			cout << "First is greater than second" << "\n";
    			if (a1 < c1)
        			cout << "First is less than second" << "\n";
			
      void show()
      {
					cout << num << "/" << den;
			}
    
    };
