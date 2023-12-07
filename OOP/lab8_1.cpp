#include<iostream>
using namespace std;
class item
{
    int n;
    int p;
    public:
    item()
    {
        cout<<"Enter no. and price"<<endl;
        cin>>n>>p;
    }

    void show()
    {
        cout<<n<<p<<endl;
    }

};
int main()
{
    item a;
    item *p=new item();
    a.show();
  //  p->getdata();
    p->show();
}