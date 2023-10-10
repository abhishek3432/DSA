//tell value is lowercase,uppercase or numeric using ASCII value
#include<iostream>
using namespace std;

int main()
{
    char ch;
    cin>>ch;
    //a-97 A-65 0-48
    if(ch>='a'&&ch<='z')
    {
        cout<<ch<<" Lowercase"<<endl;
    }
    if (ch>='A'&& ch<='Z') 
    {
        cout<<ch<<" Uppercase"<<endl;
    }
    if(ch>=48&& ch<='9')
    {
        cout<<ch<<" Numeric"<<endl;
    }
    
}