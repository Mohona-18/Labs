#include<iostream>
using namespace std;

class  distances
{
	int f;
	int in;
	public :
	distances()
    {
        cout<<"Enter feets and inches\n";
        cin>>f>>in;
    }
	
    distances(int n1,int n2)
    {
        f=n1;
        in=n2;
    }
    
    void  display()
    {
		cout<<f<<" feets "<<in<<" inches \n";
    }
    void  add(distances a,distances b)
    {
	  
	     //c.s=c.m=c.h=0;
	    in=a.in+b.in;
         f=a.f+b.f+in/12;
         in=in%12;
	    //c.display();
    }
};
int main()
{   int x,y;

    cout<<"Enter"<<endl;
    cin>>x>>y;
    distances obj1(x,y);
    distances obj2;
    distances obj3(0,0);

obj3.add(obj1,obj2);
obj3.display();
return 0;
}

