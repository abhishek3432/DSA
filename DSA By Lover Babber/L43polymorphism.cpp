//polymorphism
#include"iostream"
using namespace std;

class a{
    public:
    int z=26;
    void f1()
    {
        cout<<"without parameter f1"<<endl;
    }
    void f1(string name)
    {
        cout<<"with parameter f1"<<name<<endl;
    }

    void operator+ (a& a2)
    {
        cout<<"operator ovrloading"<<endl;
        cout<< this->z + a2.z<<endl;
    }
};

class b: public a{
    public:

    void f1()
    {
        cout<<"without parameter b f1"<<endl;
    }

};

int main()
{
    //compile-time polymorphism
    a a1,a2;
    a2.z=27;
    a1.f1();//function overloading
    a1.f1("verman");//funtion overloading

    //operator overloading
    a1+a2;


    //run-time polymorphism
    b b1;
    b1.f1(); // method overloading

    return 101;
}