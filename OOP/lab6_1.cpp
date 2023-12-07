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
 
    RECTANGLE(int b)
    {
        len=radius;
        br=b;
    }
    void area()
    {
        cout<<"REctangle area"<< len*br<<endl;
    }
};

int main() 
{ 
     int b;
     cout<<"Enter breadth"<<endl;
        cin>>b;
	RECTANGLE r1(b);
r1.area1();
	r1.area();
	return 0;
}