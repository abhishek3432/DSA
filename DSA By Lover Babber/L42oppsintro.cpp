#include"iostream"
#include"cstring"
using namespace std;
//size of empty class is 1 byte
class hero{
    //properties by default set as private
    private:
        char* name;
        int health;//private are accessed in class when we write function
        
    public:
        char level;
    static int timeTocomplete;//static keyword
    //getter and setter used for accessing private properties
    void sethealth(int hea){
        health=hea;
    }

    void setname(char* name)
    {
        strcpy(this->name, name);//if do name=name then name is indicating address so...
    }
    int gethealth()
    {
        return health;
    }

    char* getname()
    {
        return this->name;
    }

    //constructor
    hero()
    {
        cout<<"constructor called"<<endl;
        this->name= new char[100];
    }
    //parameterized constructor
    // hero(int health, char level)
    // {
    //     this->level= level;
    //     this->health= health;
    // }

    //copy constructor
    hero(hero& temp)//here & is used for reference for referening class hero
    {
        char* c= new char[strlen(temp.name)+1];
        strcpy(c,temp.name);
        this->name= c;//temp.name here  create shallow copy
        this->level= temp.level;
        this->health= temp.health;        
    }
    
    void print()
    {
        cout<<"name="<<this->name<<endl;
        cout<<"health="<<this->health<<endl;
        cout<<"level="<<this->level<<endl;
    }
    
    static int random()
    {
        // return health; 
        return timeTocomplete;//static function can only access static variable
    }

    ~hero()
    {
        cout<<"destructor called"<<endl;
    }
};

//static variable initialization
int hero:: timeTocomplete=5;
// int main()
// {
//     hero h1;//static allocation
//     cout<<"size of h1="<<sizeof(h1)<<endl;//expected size 5 but came 8 ANSWER PADDING AND GREEDY ALIGNMENT
    
//     // h1.health=50;
//     h1.sethealth(50);//we need setter as it is a private properties
//     h1.level='b';
    
//     // cout<<"hero h1 health="<<h1.health<<endl;
//     cout<<"hero h1 health="<<h1.gethealth()<<endl;
//     cout<<"hero h1 health="<<h1.level<<endl;

//     return 101;
// }

// int main(){
//     hero* h2= new hero;//here () not neccessary 
//     hero* h3= new hero(23, 'z');
//     hero h4;//for it default constructor is called and if don't exist then try it
//     (*h2).level='d';
//     cout<<(*h2).level<<endl;
//     cout<<h2->level<<endl;
//     cout<<h2->gethealth()<<endl;
//     h3->print();
//     return 101;
// }

// int main()
// {
//     //ERROR occur when done dynamic allocation
//     hero h5(88,'g');
//     char name[]="verman"
//     h5.setname(name);
//     cout<<"h5:"<<endl;
//     h5.print();
//     //copy constructor
//     hero h6(h5);
//     cout<<"h6:"<<endl;
//     h6.print();   

//     return 101;
// }

// int main()
// {
//     //shallow and deep copy constructor
//     hero h1;
//     char name[]="verman";
//     h1.sethealth(32);
//     h1.level='t';
//     h1.setname(name);
//     cout<<"h1:"<<endl;
//     h1.print();

//     //use defaut copy constructor does shallow copy
//     hero h2(h1);
//     // hero h2=h1;
//     cout<<"h2:"<<endl;
//     cout<<h2.getname();
//     cout<<h2.gethealth();
//     h2.print();

//     name[0]='G';     
//     h1.setname(name);

//     cout<<"h1:"<<endl;
//     h1.print();
//     cout<<"h2:"<<endl;

//     h2.print(); 

//     // making own copy constructor does deep copy constructor

//     return 101;
// }


// int main()
// {
//     //destructor in class
//     //static allocation
//     hero h1;//automatically destructor is called

//     //dynamic allocation
//     hero* h2=new hero;//manually destructor is called

// }

int main()
{
    //static keyword and don't belong to obj but belong to class
    cout<<hero::timeTocomplete<<endl;
    cout<<hero::random()<<endl;
    hero a;
    cout<<"a"<<a.timeTocomplete<<endl;
    hero b;
    b.timeTocomplete=10;//this lead to update static timetocomplete so last line will also print 10
    cout<<"b"<<b.timeTocomplete<<endl;
    cout<<"a"<<a.timeTocomplete<<endl;
    return 0;
}