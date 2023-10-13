#include<iostream>
using namespace std;
void inputarr(int arr[], int n)
{
    cout<<"Enter arr input :"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
}
void maxmin(int arr[], int size)
{
    //int ans[2]={INT_MIN,INT_MAX};
    //cout<<ans[0];
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0; i<size; i++)
    {
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];        
    }
        cout<<"max and min :"<<max<<" "<<min<<endl;
    //return ans;
}
int main()
{
    int arr[10];
    int arrsize=sizeof(arr)/sizeof(arr[0]);
    inputarr(arr,arrsize);
    maxmin(arr,arrsize);
    //int ans[2]=maxmin(arr,arrsize);


    return 101;
}