#include<iostream>
using namespace std;

int main()
{
    int a,b=1;
    a=10;
    if(++a)
        cout<<b;
    else
        cout<<++b;
    
    cout<<"-----------------------------"<<endl;

    a=1;
    b=2;
    if(a--&&++b>2)
    {
        cout<<"stage1 - inside if";

    }
    else
        cout<<"stage2- inside else";
    
    cout<<a<<" "<<b<<endl;

    cout<<"---------------"<<endl;

    int number=3;
    cout<<(25*(++number))<<endl;

    cout<<"-----------"<<endl;

    a=1;
    b=a++;
    int c=++a;
    cout<<b;
    cout<<c;
    cout<<"-----------------------------"<<endl;

    a=1;
    int m =2;
    if(a--||++m>2)
    {
        cout<<"stage1 - inside if";

    }
    else
        cout<<"stage2- inside else";
    
    cout<<a<<" "<<m<<endl;

    return 0;

}