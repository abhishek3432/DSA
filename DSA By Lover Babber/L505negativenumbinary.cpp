#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    
    long long int n;
    cin>>n;
    if(n<0)
        n=pow(2,32)+n;
    cout<<"n: "<<n;
    unsigned long long int i=0,ans=0;

    while(n!=0)
    {
        int bit=n&1;
        ans = (bit*pow(10,i)+ans);
        n=n>>1;
        i++;
    }

    cout <<"decimal to binary: "<<ans;
    return 0;
}