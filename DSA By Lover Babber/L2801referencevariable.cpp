#include<iostream>
using namespace std;

void update1(int t)
{
    t++;
}

void update2(int& t)
{
    t++;
}

int& update3(int t)
{
    int a=t;
    int& ans=a;
    return ans;
}

int main (){
    int i=5;

    //create a ref vvaribale 
    int& j =i;
    cout<<"i"<<i<<endl;
    i++;
    cout<<"i"<<i<<endl;
    j++;
    cout<<"i"<<i<<endl;
    cout<<"i"<< j<<endl;

    int n=5;
    cout<<"before" << n<<endl;
    update1(n);
    cout<<"after pass by value: "<< n<< endl;
    update2(n);
    cout<<"after pass by reference varible: "<< n<< endl;
    update3(n);
    cout<<"bad practice of reference variable but for me no error is generated: "<< n << endl;
    return 0;
}