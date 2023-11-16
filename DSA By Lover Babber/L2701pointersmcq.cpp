#include<iostream>
using namespace std;
void update(int **p)
{
    p=p+1;//kuch change nahi hoga
    *p=*p+1;//kuch change hoga
    **p=**p+1;//kuch change hoga
}
int main()
{
    int i=5;
    int* p=&i;
    int** p2=&p;
    cout<<endl<<"sab sahi chal rha h"<<endl;
    cout<<"printing p="<<p<<endl;
    cout<<"address of p="<<&p<<endl;
    cout<<*p2<<endl;
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;
    cout<<p2<<endl;
    return 0;
}