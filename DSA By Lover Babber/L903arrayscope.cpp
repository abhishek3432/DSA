#include<iostream>
using namespace std;

void printarr(int arr[],int n)
{
    for(int i=0;i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void update(int arr[],int n)
{
    arr[2]=43354;
    cout<<"inside update function"<<endl;
    printarr(arr,n);
}
int main()
{
    int arr[3]={1,32,44};
    cout<<"inside main function"<<endl;
    printarr(arr,3);
    update(arr,3);
    cout<<"AGAIN inside main function"<<endl;
    printarr(arr,3);
    cout<<"ARRAY LIFE IS BEYOND FUNCTION BECAUSE AS WE PASS arr  this show base adresses of array"
    return 102;
}