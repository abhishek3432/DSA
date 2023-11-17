//Inheritance
#include"iostream"
using namespace std;

class human
{
    private:
        int age;

    protected:
    
    public:

        int height;
        int weight;

        int getAge()
        {
            return this->age;
        }

        void setweight(int weight)
        {
            this->weight=weight;
        }


};

class male:protected human
{
    public:
    string color;


    void setheight(int height)
    {
        this->height=height;
    }
    void sleep()
    {
        cout<<"SLEEPING"<<endl;
    }
};

int main()
{
    male m1;
    // cout<<m1.age<<endl;
    cout<<m1.getAge()<<endl;
    cout<<m1.weight<<endl;
    cout<<m1.height<<endl;
    cout<<m1.color<<endl;
    m1.sleep();

    m1.setweight(74);
    cout<<m1.weight<<endl;
    return 101;
}
