//compare two numbers using if statement only
#include<iostream>
using namespace std;

int main(void)
{
    int a,b;
    cout<<"enter two numbers:";
    //cout<<a<<endl<<b;
    cin>>a>>b;//cin don't read space,enter(\n),tab(\t)
    
    //a=cin.get();b=cin.get();
    
    if (a>b)
    {
        cout<<a<<">"<<b<<endl;
    }
    if(a<b)
    {
        cout<<a<<"<"<<b<<endl;
    }
    if(a==b)
    {
        cout<<a<<"="<<b<<endl;
    }
}