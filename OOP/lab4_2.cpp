#include<iostream>
using namespace std;
class rectsq
{
    int l,b;
    public:
    void input();
    //void area();
    friend void area(rectsq);
};
void rectsq:: input()
{
  int i;
  cout<<"Rectangle\n";
  cout<<"Square\n";
  cout<<"Enter choice\n";
  cin>>i;
  if(i==1)
  {
      cout<<"Enter length and breadth"<<endl;
      cin>>l>>b;
  }
  else
  {
      cout<<"Enter the side\n";
      cin>>l;
      b=l;
  }
  
}
void area(rectsq r)
{   cout<<"Friend function invoked"<<endl;
    cout<<"Area="<<r.l*r.b<<endl;
}
int main()
{
    rectsq r;
    r.input();
   // r.area();
    area(r);
    return 0;
}