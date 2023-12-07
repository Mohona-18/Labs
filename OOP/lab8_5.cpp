//base version
#include<iostream>
using namespace std;

class ABC
{
  public:
    virtual void display()
    {
      cout<<"Base class\n";
    }
};

class BBC : public ABC
{
  public:
    void display()
    {
      cout<<"Derived class BBC\n";
    }
};


class KBC : public ABC
{
  public:
    void display()
    {
      cout<<"Derived class KBC\n";
    }
};

int main()
{
  ABC x, *ptr;
  BBC y;
  KBC z;
  ptr = &x;
  ptr->display();
  
  return 0;
}