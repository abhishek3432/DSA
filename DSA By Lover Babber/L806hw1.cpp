#include<iostream>
using namespace std;

int main()
{
    int n=1330;
    int m;
    switch(1)
    {
        case 1:
            m=n/100;
            n=n%100;
            cout<<m<<" hundered notes"<<endl;
        
        case 2:
            m=n/50;
            n=n%50;
            cout<<m<<" fifty notes"<<endl;

        case 3:
            m=n/20;
            n=n%20;
            cout<<m<<" twenty notes"<<endl;
        case 4:
            m=n/10;
            n=n%10;
            cout<<m<<" ten notes"<<endl;
        
    }
}