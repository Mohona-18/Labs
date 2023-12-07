#include<iostream>
using namespace std;
class a
{
    private:
   int n;
    int arr[50];
    int b[50];
    int c[50];
    public:
    friend class b;
};
class b
{   
    public:
    void show(a &ob)
    {
        for(int i=0;i<ob.n;i++)
        printf("%d\t",ob.c[i]);
    }
    void add(a &ob)
    {
        for(int i=0;i<ob.n;i++)
       ob.c[i]=ob.arr[i]+ob.b[i];
    }
    void input(a &ob)

    {   printf("Enter n\n");
        scanf("%d",&ob.n);
         printf("Elements\n");
        for(int i=0;i<ob.n;i++)
        scanf("%d",&ob.arr[i]);
        printf("Elements\n");
        for(int i=0;i<ob.n;i++)
        scanf("%d",&ob.b[i]);
    }
};
int main()
{
    a obj1;
    b obj2;
    obj2.input(obj1);
    obj2.add(obj1);
    obj2.show(obj1);
}


