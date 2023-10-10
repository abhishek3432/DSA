//tell no. is positive, zero or negative esle if statement
#include<iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;

    if (a>0)
    {
        cout<<a<< " is postive"<<endl;
    }
    else if (a==0)
    {
         cout<<a<<" is zero"<<endl;
    }

    else
    {
        cout<<a<<" is negative"<<endl;
    }
}