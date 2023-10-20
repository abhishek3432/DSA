#include<bits/stdc++.h>
using namespace std;

int bi_search(int arr[], int arsiz, int tar)
{
    int s=0,
        e=arsiz-1;
        
    
    while(s<=e)
    {
        int m=(s+e)/2;
        if(tar==arr[m])
            return m;
        else if(tar>arr[m])
                s=m+1;
            else
                e=m-1;
    }

    return -1;
}

int main()
{
    int arr[]={1,23,23,2,43,32};
    int arsiz=sizeof(arr);
    int tar=12;

    int ans= bi_search(arr, arsiz, tar);
    if(ans==-1)
        cout<<"not present"<<endl;
    else
        cout<<"target is at :" <<ans<<endl;
    return 101;
}