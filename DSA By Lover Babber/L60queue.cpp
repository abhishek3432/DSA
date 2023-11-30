//queue using STL
#include"iostream"
#include"queue"
using namespace std;

int main()
{
    queue<int> atmline;
    cout<<"size: "<<atmline.size()<<endl;
    cout<<"front :"<<atmline.front()<<endl;
    atmline.empty()?cout<<"yes empty"<<endl:cout<<"not empty"<<endl;

    atmline.push(1);
    cout<<"size: "<<atmline.size()<<endl;
    cout<<"front :"<<atmline.front()<<endl;
    atmline.empty()?cout<<"yes empty"<<endl:cout<<"not empty"<<endl;
    
    atmline.push(2);
    cout<<"size: "<<atmline.size()<<endl;
    cout<<"front :"<<atmline.front()<<endl;
    atmline.empty()?cout<<"yes empty"<<endl:cout<<"not empty"<<endl;

    atmline.push(3);
    cout<<"size: "<<atmline.size()<<endl;
    cout<<"front :"<<atmline.front()<<endl;
    atmline.empty()?cout<<"yes empty"<<endl:cout<<"not empty"<<endl;

    atmline.push(4);
    cout<<"size: "<<atmline.size()<<endl;
    cout<<"front :"<<atmline.front()<<endl;
    atmline.empty()?cout<<"yes empty"<<endl:cout<<"not empty"<<endl;

    return 101;
}