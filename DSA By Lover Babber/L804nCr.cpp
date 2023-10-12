#include<iostream>
using namespace std;

float fact(int n)
{
    long int ans=1;
    if(n==0)
        return 1;
    else
        for(int i=n; i>0; i--)
        {
            ans*=i;
        }
    return ans;
}

float nCr(int n, int r)
{
    float nCr=fact(n)/(fact(r)*fact(n-r));

    return nCr;
}

int main()
{
    int n=0,r=0;
    cout<<"Enter n and r value to find nCr: ";
    cin>>n>>r;

    cout<<"nCr = "<<nCr(n,r)<<endl;

    return 101;
}