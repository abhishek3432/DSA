#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    switch(n)
    {
        case 1:
            cout<<"one"<<endl;
            break;
        case 2:
            cout<<"second"<<endl;
            break;
        
        default:
            cout<<"Error"<<endl;
    }
    return 0;
}