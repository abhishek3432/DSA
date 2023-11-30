// //stack using STL
// #include "iostream"
// #include "stack"
// using namespace std;

// int main()
// {
//     stack<int> plate;//stack declaration
    
//     //stack insertion
//     plate.push(1);
//     plate.push(2);
//     plate.push(3);
//     plate.push(4);

//     //stack top element
//     cout<<"printing top element= "<<plate.top()<<endl;
    
//     //stack deletion
//     plate.pop();
//     cout<<"printing top element= "<<plate.top()<<endl;

//     //stack empty check
//     if(plate.empty())
//         cout<<"stack is empty"<<endl;
//     else
//         cout<<"stack is not empty"<<endl;

//     //stack size
//     cout<<"plate size= "<<plate.size()<<endl;
//     return 101;
// }


//stack  implementaion
#include "iostream"
// #include "stack"
using namespace std;

class stack{
    public:
        //properties
        int* arr;
        int top;
        int size;

        //behaviour
        //constructor
        stack(int size)
        {
            this->size=size;
            arr= new int[size];
            top=-1;
        }
        
        //insertion
        void push(int element)
        {
            if(size-top>1)
            {
                top++;
                arr[top]= element;
            }
            else{
                cout<<"stack overflow"<<endl;
            }
        }

        //deletion
        void pop()
        {
            if(top>-1)
            { 
                top--;
            }
            else{
                cout<<"stack underflow"<<endl;
            }
        }
        
        //stack top
        int peek()
        {
            if(top>-1)
            {
                return arr[top];
            }
            else{
                cout<<"stack underflow"<<endl;
                return -1;
            }

            
        }

        //check stack is empty
        bool isEmpty()
        {
            if(top==-1)
            {
                return true;
            }
            else{
                return false;
            }
        }
};

int main()
{
    stack plate(5);
    plate.peek();

    plate.push(1);
    cout<<plate.peek()<<endl;
    plate.push(2);
    cout<<plate.peek()<<endl;
    plate.push(3);
    cout<<plate.peek()<<endl;
    plate.push(4);
    cout<<plate.peek()<<endl;
    
    plate.pop();
    cout<<plate.peek()<<endl;
    
    return 101;
}

//stack using linkedlist
