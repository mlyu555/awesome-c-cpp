#include <iostream>
using namespace std;

class Base
{
  public:
  virtual void func()
   {
       cout << "Base func" << endl;
   }
};
class Derived : public Base
{
   public:
   virtual void func()
   {
       cout << "Derived func" << endl;
   }
};

int main()
{
    Base *p = new Derived();
    p->func();

    Derived *p1 = new Derived();
    p1->func();

    Base *p2 = new Base();
    p2->func();

    p = p1;
    p->func();

    // Derived *p2 = new Base();    error!

    return 0;
}