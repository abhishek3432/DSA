/*pattern
111
222
333
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n)//row
    {
        int j=1;
        while(j<=3)//colum is fixed to 3
        {
            cout<<i<<" ";
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }
}