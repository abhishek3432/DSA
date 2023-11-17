
//type of inheritance
#include"iostream"
using namespace std;

class human
{
    public:
    
    void speak()
    {
        cout<<"speaking"<<endl;
    }
};
class animal
{
    public:
        int age;
        int weight;

    void bark()
    {
        cout<<"barking"<<endl;
    }
};


class dog: public animal
{
    public:

};

class germanshepherd: public dog
{
    
};

class hybrid: public animal, public human
{

};

class a
{
    public:
    void f1()
    {
        cout<<"inside f1"<<endl;
    }

};

class b:public a
{
    public:
    void f2()
    {
        cout<<"inside f2"<<endl;
    }

};

class c:public a
{
    public:
    void f3()
    {
        cout<<"inside f3"<<endl;
    }

};

class di: public a, public animal
{
    public:
    void f4()
    {
        cout<<"inside f4"<<endl;
    }
};
int main()
{
     dog d;//single inheritance
     d.bark();

    germanshepherd g;//multilevel inheritance
    g.bark();

    hybrid h1;//mutiple inheritance
    h1.speak();
    h1.bark();

    //hirarchical inheritance
    a a1;
    b b1;
    c c1;

    a1.f1();
    b1.f2();
    b1.f1();
    c1.f3();
    c1.f1();
    // c1.f2();
 
    //hybrid inheritance
    di d1;
    d1.f4();
    d1.bark();
    return 202;
}





