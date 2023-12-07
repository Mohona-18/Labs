#include<iostream>
using namespace std;
class book
{   protected:
    char title[20];
    char author[20];
    float p;
    public:
    book()
    {
        cout<<"Enter title author and price"<<endl;
        cin>>title;
        cin>>author;
        cin>>p;
    }
};
class print_book:public  book
{   protected:
    int n;
    public:
    print_book()
    {
        cout<<"Enter no.of pages"<<endl;
        cin>>n;
    }
   void  print_show()
    {
        cout<<title<<endl;
        cout<<author<<endl;

        cout<<p<<endl;
        cout<<n<<endl;

    }
};
class e_book:public  book
{   protected:
    int s;
    public:
    e_book()
    {
        cout<<"Enter the size in kb";
    cin>>s;
    }
   void  e_show()
    {
        cout<<title<<endl;
        cout<<author<<endl;

        cout<<p<<endl;
        cout<<s<<endl;

    }
};
int main()
{ int m=1,n=1;
    print_book *obj1=new print_book[m];

  for(int i=0;i<m;i++)
  { cout<<"Details of print book "<<i+1<<endl;
      obj1[i].print_show();
  } e_book *obj2=new e_book[n];
   for(int i=0;i<n;i++)
  { cout<<"Details of e_ book "<<i+1<<endl;
      obj2[i].e_show();
  }
  return 0;
}
