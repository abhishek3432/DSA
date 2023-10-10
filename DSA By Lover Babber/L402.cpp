/*print pattern
4231
4321
4321
4321
*/
#include<iostream>
using namespace std;

int main(void)
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=n;
        while(j>=1)
        {
            cout<<j<<endl;
            j=j-1;
        }
        cout<<endl;
        i=i+1;
    }
}