#include <iostream>
using namespace std;

int main(){
    cout<<"Min Min algo";
    int m,n;
    //2->m, 3->n
    cout<<"Enter Row and Column Numbers\n";
    cin>>m>>n;
    cout<<"enter values\n";
    int ar[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>ar[i][j];
        }
    }


    for(int k=0;k<n;k++){
    int min=INT16_MAX;
    int r,c;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(ar[i][j]<min && ar[i][j]!=-1)
            {
                min=ar[i][j];
                r=i;c=j;
            }
        }
    }
    cout<<endl;
    cout<<"M"<<r+1<<"is executing T"<<c+1<<" for "<<min<<endl;



    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<m;i++)
        ar[i][c]=-1;
    
    for(int j=0;j<n;j++){
        if(ar[r][j]!=-1)ar[r][j]+=min;
    }
    }



}