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
   
      void areacircle()
    {
   
       cout<<"Circle area "<<3.14*radius*radius<<endl;

    }
};
class RECTANGLE: public CIRCLE
{
    protected:
    int len;
    int br;
    public:
 
    RECTANGLE(int b=0)
    {
        len=radius;
        br=b;
    }
    void arearect()
    {
        cout<<"REctangle area"<< len*br<<endl;
    }
};
class CYLINDER: public RECTANGLE
{
    protected :
    int r;
    int h;
    public:
    CYLINDER()
    {   r=radius;
     h=len;
    }
    void volcylin()
    {
        cout<<"Volume of cylinder "<<3.14*r*r*h<<endl;
    }
};

int main() 
{ 
     int b;
     cout<<"Enter breadth"<<endl;
        cin>>b;
	RECTANGLE r1(b);
r1.areacircle();
	r1.arearect();
    CYLINDER obj;
    obj.areacircle();
    obj.volcylin();
	return 0;
}