#include <iostream>
using namespace std;
class CIRCLE
{
    
    protected: 
    int radius;
    public:

    CIRCLE()
    { cout<<"Enter radius"<<endl;
        cin>>radius;
    }
      void area1()
    {
   
       cout<<"Circle area "<<3.14*radius*radius<<endl;

    }
};
class RECTANGLE:public CIRCLE
{
    protected:
    int len;
    int br;
    public:
 
    RECTANGLE()
    {
        len=radius;
        cout<<"Enter breadth"<<endl;
        cin>>br;
       // br=b;
    }
    void area()
    {
        cout<<"REctangle area"<< len*br<<endl;
    }
};
class box:public RECTANGLE
{   protected:
    int h;
    public:
    box()
    {   
        cout<<"enter height\n";
        cin>>h;

    }
    void show()
    {   int v;
        v=len*br*h;
        cout<<"Volume="<<v<<endl;
    }
};
int main() 
{ 
  
    box c1;
    c1.area1();
    c1.area();
    c1.show();

	return 0;
}
