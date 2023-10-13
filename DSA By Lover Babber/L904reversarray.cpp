#include<iostream>
using namespace std;

void revarr(char arr[],int n)
{
    int t=n-1;
    int z=n;
    if(n&1==0)
        //n is even
        n=(n/2)-1;
    else
        n=n/2;
    for(int i=0; i<=n; i++)
    {
        swap(arr[i],arr[t]);
        t--;
    }

    //while(start<end) approch can also be used
}
void printarr(char arr[],int n)
{
    cout<<"array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    char arr[6]={'a','b','c','d','e','f'};
    printarr(arr,6);
    revarr(arr,6);
    printarr(arr,6);
}