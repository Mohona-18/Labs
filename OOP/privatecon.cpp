#include<iostream>
using namespace std;
class a
{
    private :
    int x,y;
    a()
    {
    x=2;y=2;
    }
    ~a()
    {
        cout<<"Destructor"<<endl;
    }
    public :
    void show()
    {
    a();
      ///  this->a::~a();
    }
};
int main()
{
    a *obj;
    obj->show();
}