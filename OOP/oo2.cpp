#include<iostream>
using namespace std;
class A{
	int a[5];
	public:
		void getdata(){
			for(int i=0;i<5;i++)
			cin>>a[i];
		}
		friend  A operator +(int b, A m){
			A t;
			for(int i=0;i<5;i++)
			t.a[i]=m.a[i]+b;
			return t;
		}
		void show(){
			for(int i=0;i<5;i++)
			cout<<endl<<"\t"<<a[i];
		}
};
int main(){
	A ob1;
	int x;
	cout<<"enter x: ";
	cin>>x;
	ob1.getdata();
	ob1.show();
	A ob2=x+ob1;
	cout<<endl;
	ob2.show();
}