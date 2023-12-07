#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   // char str[10];
    string text;
    cin>>text;
    cout<<text<<endl;//xyz -op
    string text1("abc");
    string text3="hello";
    cout<<text3<<endl;//hello-op
    string text2=text1;//copy the string
    cout<<text2<<endl;//abc -op
   // string text4;
   // getline(cin,text4);
   // cout<<text4<<endl;
    string text4=text+text3;//concatenation of string
    cout<<text4<<endl;//xyzhello-op
    //string compare
    /*if (text2==text1)
        
cout<<"strings are equal"<<endl;
    else
        cout<<"not equal"<<endl;*/
        //alternative to compare
    int c=text2.compare(text1);//both are abc
    if (c==0)
        cout<<"strings are equal"<<endl;
    else if (c>0)
        cout<<"string2 is greater than string1"<<endl;
    else
        cout<<"string2 is less than string1"<<endl;
    //erase some part of string
    text.erase(2,4);//index 2 se 4 tk urega in case of xyz display sirf x hua tha
    cout<<text<<endl;;
    //replace a string with a given string
    //text1.replace(text4);
    text="Welcome";
    text.replace(1,3,text4);//index 1-3 text ka hatega waha pura text4 atega... result sstored in text
    cout<<text<<endl;
    //append one string at the end of another string
    text1.append(text3);//text1+text3=abchello is stored in text1
    cout<<text1<<endl;;
    //calculate length of a string
    cout<<text1.length()<<endl;//text1.size();-8
    //find substring from a string
    int x=text1.find("abc");//return the position where it founds in the given string
    cout<<x<<endl;
    //retrive a substring
    cout<<text1.substr(2,4)<<endl;
    //find first occurance of a letter 
    cout<<text1.find_first_of('a')<<endl;;
    //find las
//find last occurance of a letter 
    cout<<text1.find_last_of('a')<<endl;
    
}