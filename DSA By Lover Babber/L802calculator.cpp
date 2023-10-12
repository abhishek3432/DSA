#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char op;
    cout<<"Enter two value and operation you want to perform"<<endl;
    cin>>a>>b>>op;

    switch(op)
    {
        case '+':
            cout<<"a + b = "<<a+b<<endl;
            break;
        case '-':
            cout<<"a - b = "<<a-b<<endl;
            break;
        case '*':
            cout<<"a * b = "<<a*b<<endl;
            break;
        case '/':
            cout<<"a / b = "<<a/b<<endl;
            break;

    }

    return 101;
}