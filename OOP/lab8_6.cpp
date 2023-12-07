
#include<iostream>
using namespace std;

class ABC
{
  public:
    virtual void display() = 0;
};

class BBC : public ABC
{
  public:
    void display()
    {
      cout<<"Derived class: BBC\n";
    }
};

class KBC : public ABC
{
  public:
    void display()
    {
      cout<<"Derived class: KBC\n";
    }
};

int main()
{
  ABC *p;
  BBC x;
  KBC y;
  p = &x;
  p->display();
  p =&y;
  p->display();
  return 0;
}