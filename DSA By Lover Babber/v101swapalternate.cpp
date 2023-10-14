#include<iostream>
using namespace std;

void swapalt(char arr[], int n)
{
    for(int i=0; i+1<n; i+=2)
    {
        swap(arr[i],arr[i+1]);
    }
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


int main(){
    char even[6]={'a','b','c','d','e','f'};
    char odd[5]={'a','b','c','d','e'};

    swapalt(even,6);
    swapalt(odd, 5);
    printarr(even,6);
    printarr(odd,5);
}
