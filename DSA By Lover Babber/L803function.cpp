#include<iostream>
using namespace std;

bool iseven(int n)
{
    if(n&1)
        return 0;

    return 1;
}

int main()
{
    int n;
    cout<< "Enter a value to know it's even or not: ";
    cin>>n;

    if(bool ans=iseven(n))
        cout<<"yes, it is even.";
    
    else
        cout<<"no it's not.";
    
    return 101;
}