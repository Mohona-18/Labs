#include<iostream>
using namespace std;
class a
{
    private:
  //  int n;
    int arr[5];
    int b[5];
    public:
    friend class b;
};
class b
{   private:
    int c[5];
    public:
    void show()
    {
        for(int i=0;i<5;i++)
        printf("%d\t",c[i]);
    }
    void add(a &ob)
    {
        for(int i=0;i<5;i++)
       c[i]=ob.arr[i]+ob.b[i];
    }
    void input(a &ob)
    {   printf("Elements\n");
        for(int i=0;i<5;i++)
        scanf("%d",&ob.arr[i]);
        printf("Elements\n");
        for(int i=0;i<5;i++)
        scanf("%d",&ob.b[i]);
    }
};
int main()
{
    a obj1;
    b obj2;
    obj2.input(obj1);
    obj2.add(obj1);
    obj2.show();
}


