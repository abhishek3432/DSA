#include<iostream>
#include<algorithm>
using namespace std;

void printarr(auto arr[],int n)
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
    //array declare
    int arr[50];
    int b[50]={0};
    //int c[100]={[0...99]=0};
    //int d[100]={[99]=-5};
    int e[50]={-5};
    char g[3]={'s','d','f'};
    //acces
    cout<<arr[50];

    printarr(arr,50);
    printarr(b,50);
    //printarr(c,50);
    //printarr(d,50);
    printarr(e,50);
    printarr(g,3);

    int eleinb=sizeof(b)/sizeof(b[0]);
    cout<<eleinb<<endl;
    //as below only 5 is present but it will give whole element in c includeing default 0 so that's why we pass size of array in function
    int eleind=sizeof(e)/sizeof(e[0]);
    cout<<eleind<<endl;

    return 101;
}