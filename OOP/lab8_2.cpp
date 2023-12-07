#include<iostream>
using namespace std;
class item
{
    int n;
    int p;
    public:
    void getdata()
    {
        cout<<"Enter no. and price"<<endl;
        cin>>n>>p;
    }

    void show()
    {
        cout<<n<<"\t"<<p<<endl;
    }

};
int main()
{
   
    item *p=new item[5];
item *d=p;
  for(int i=0;i<5;i++) {
   p->getdata();
   p++;}
   for(int i=0;i<5;i++) {
   d->show();
   d++;}
}