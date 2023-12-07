#include<iostream>
using namespace std;
class student
{
    protected:
    char name[20];
    int roll;
    int sec;
    public:
    student()
    {
        cout<<"Name"<<endl;
        cin>>name;
        cout<<"Roll no."<<endl;
        cin>>roll;
        cout<<"Section"<<endl;
        cin>>sec;
    }
    ~student()
    {
        cout<<"Destructor of student class"<<endl;
    }
};
class marks
{
    protected:
    float m1,m2,m3;
    float e1,e2,e3;
    public:
    marks()
    {
        cout<<"Mid sem and end sem marks of 1"<<endl;
        cin>>m1>>e1;
        
        cout<<"Mid sem and end sem marks of 2"<<endl;
        cin>>m2>>e2;
        
        cout<<"Mid sem and end sem marks of 3"<<endl;
        cin>>m3>>e3;
       
    }
    ~marks()
    {
        cout<<"Destructor of marks class"<<endl;
    }
};
class result:public student,public marks
{
    protected:
    int t3,t2,t1;
    char g;
    public:
    void cal()
    {
        t1=m1+e1;
        t2=m2+e2;
        t3=m3+e3;
        int grade=(t1+t2+t3)/30;
        switch (grade)
        {
            case 10:g='O';break;
             case 9:g='E';break;
              case 8:g='A';break;
               case 7:g='B';break;
                case 6:g='C';break;
                 case 5:g='D';break;
                 case 4:g='P';break;
                 default :g='F';break;
        }
    }
    void showdata()
    {
        cout<<"Name"<<name<<endl;
         cout<<"Roll No"<<roll<<endl;
          cout<<"Section"<<sec<<endl;
           cout<<"Marks of mid sem n end sem of 1 "<<m1<<"\t"<<e1<<endl;
             cout<<"Marks of mid sem n end sem of 2 "<<m2<<"\t"<<e2<<endl;
               cout<<"Marks of mid sem n end sem of 3 "<<m3<<"\t"<<e3<<endl;
           cout<<"total in  1 "<<t1<<endl;
             cout<<"toatal in 2 "<<t2<<endl;
               cout<<"total in 3 "<<t3<<endl;
                cout<<"Grade"<<g<<endl;

    }

};
int main()
{
    result obj;
    obj.cal();
    obj.showdata();
    return 0;
}