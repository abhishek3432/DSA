// //node definition, declaration and implementation
// #include <iostream>
// using namespace std;

// class node
// {
//     public:
//         int data;
//         node* next;

//         //constructor
//         node(int data)
//         {
//             this->data=data;
//             this->next=NULL;
//         }
// };

// int main()
// {
//     node* n1=new node(1);
//     cout<<n1->data<<endl;
//     cout<<n1->next<<endl;

//     return 101;
// }

// insert at head singlylinkedlist(collection of node) 
#include <iostream>
using namespace std;

class node
{
    public:
        int data;
        node* next;

        //constructor
        node(int data)
        {
            this->data=data;
            this->next=NULL;
        }
        ~node()
        {
            int value= this->data;
            if(this->next!=NULL)//this check is memory alloted to ptr or not
            {
                delete next;//delete heap memory alloted to pointer
                next=NULL;

            }
            cout<<"memory is free for node with data"<<data<<endl;
        }
};

void insertAtHead(node*& head, int data)
{
        node* newnode= new node(data);
        newnode->next=head;
        head=newnode;
}

void insertAtTail(node*& tail, int data)
{
    node* newnode= new node(data);
    // node* temp= tail;
    // while(temp->next!=NULL)
    // {
    //     temp=temp->next;
    // }
    // node* tail=temp;
    tail->next=newnode;
    // tail= tail->next;
    tail=newnode;
}

void insertAtKposition(node*& head, int data,int k)
{
    //if position is head
     if(k==1)
    {
        insertAtHead(head, data);
        return ;
    }

    node* newnode=new node(data);
    node* temp= head;
    for(int i=1; i<k-1; i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next= newnode;

    // //if position is tail
    // if(temp->next==NULL)
    // {
    //     insertAtTail(head, data);
    // }
}

void printllist(node*& head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

void deleteAtPosition(node* head, int position)
{
    //deletion first node
    if(position==1)
    {
        node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else
    {
        //deleting any inbetween node
        node* cur=head;
        node* pre=NULL;
        for(int i=1; i<position; i++)
        {
            pre=cur;
            cur=cur->next;
        }
        pre->next=cur->next;
        cur->next= NULL;
        delete cur;
    }
    
}

int main()
{
    node* newnode=new node(3);
    node* head=newnode;
    node* tail=newnode;
    
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAtHead(head, 0);
    printllist(head);
    
    insertAtTail(tail, 4);
    insertAtTail(tail, 5);
    insertAtTail(tail, 6);
    printllist(head);

    insertAtKposition(head, 7, 3);
    insertAtKposition(head, 8, 5);
    insertAtKposition(head, 8, 1);
    printllist(head);


    deleteAtPosition(head, 1);
    deleteAtPosition(head, 3);
    deleteAtPosition(head, 10);
    printllist(head);
    return 101;
}

// //doubly linked list
// #include <iostream>
// using namespace std;

// class node
// {
//     public:
//         int data;
//         node* pre;
//         node* next;

//         node(int data)
//         {
//             this->data=data;
//             this->pre=NULL;
//             this->next=NULL;
//         }

//         ~node()
//         {
//             int val=this->data;
//             if(next!=NULL)
//             {
//                 delete next;
//                 next=NULL;
//             }
//             cout<<"memory free for node with data"<<val<<endl;
//         }
// };

// void print(node* head)
// {
//     node* temp= head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<endl;
// }

// int getlength(node* head)
// {
//     int len=0;
//     node* temp=head;
//     while(temp!=NULL)
//     {
//         len++;
//         temp=temp->next;
//     }

//     return len;
// }

// void insertAtHead(node* head, int data)
// {
//     node* newnode= new node(data);
//     head->pre= newnode;
//     newnode->next= head;
//     head= newnode;
    
// }

// void insertAtTail(node*& tail, int data)
// {
//     node* newnode= new node(data);
//     tail->next= newnode;
//     newnode->pre= tail;
//     tail=newnode;
// }

// void insertAtKposition(node*&head, node*& tail, int position)
// {
//     //insert at head
//     if(position==1)
//     {
//         insertAtHead(head, data);
//         return;
//     }
    
//     node* temp= head;
//     int count=1; 
//     while(count<position-1)
//     {
//         temp= temp->next;
//         count++;
//     }

//     //insert at last position
//     if(temp->next==NULL)
//     {
//         insertAtTail(tail, data);
//         return;
//     }

//     node* newnode= new node(data);
//     newnode->next= temp->next;
//     temp->next->pre= newnode;
//     temp->next= newnode;
//     newnode->pre= temp;  
    
// }

// void deleteAtPosition(node*& head, int posi)
// {
//     //if starting node
//     node* temp=head;
//     head=temp->next;
//     temp->next->pre=NULL;
//     temp->next=NULL;
//     delete temp;

//     //delete node except first node
//     node* cur=head;
//     node* pre=NULL;
//     int count=1;
//     while(count<posi)
//     {
//         pre=cur;
//         cur=cur->next;
//         count++;
//     }
//     cur->pre=NULL;
//     pre->next=cur->next;
//     cur->next=NULL;

//     delete cur;
// } 
// int main()
// {
//     // node* newnode=;
//     node* head=new node(1);
//     node* tail= head;
//     print(head);
    
//     cout<<getlength(head)<<endl;
    
//     insertAtHead(head, 0);
//     insertAtHead(head, 2);
//     insertAtHead(head, 3);
//     insertAtHead(head, 4);
//     print(head);
//     cout<<getlength(head)<<endl;

//     insertAtTail(tail, 5);
//     insertAtTail(tail, 6);
//     insertAtTail(tail, 7);
//     insertAtTail(tail, 8);
//     print(head);
//     cout<<getlength(head)<<endl;

//     insertAtKposition(head, tail, 0);
//     insertAtKposition(head, tail, 44);
//     insertAtKposition(head, tail, 330);
//     insertAtKposition(head, tail, 0444);
//     insertAtKposition(head, tail, getlength(head));
//     print(head);
//     cout<<getlength(head)<<endl;

//     deleteAtPosition(head, 4);
//     print(head);
//     cout<<"head "<<head->data<<endl;
//     cout<<"tail "<<
// }

// //circular linkedlist

// #include"iostream"
// using namespace std;

// class node
// {
//     public:
//         int data;
//         node* next;

//         //constructor
//         node(int data)
//         {
//             this->data= data;
//             this->next= NULL;
//         }

//         //destructor
//         ~node()
//         {
//             int val=this->data;
//             if(this->next!=NULL)
//             {
//                 delete next;
//                 next=NULL;
//             }
//             cout<<"memory is free for node with data "<<this->data<<endl;
//         }
// };

// void insertNode(node*& tail, int elem, int data)
// {
//     //empty list
//     if(tail==NULL)
//     {
//         node* newnode= new node(data);
//         tail=newnode;
//         //newnode->next= newnode;
//         tail->next= tail;
//     }
//     else
//     {
//         //non-empty list
//         //assume element is present in list
//         node* cur= tail;
//         while(cur->data!=elem)
//         {
//             cur=cur->next;
//         }

//         //after element found
//         node* newnode= new node(data);
//         newnode->next=cur->next;
//         cur->next= newnode;
//     }
// }

// void print(node*& tail)
// {
//     node* temp= tail;
    
//     //empty list 
//     if(tail==NULL)
//     {
//         cout<<"list is empty"<<endl;
//         return;
//     }

//     do
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }while(temp!=tail);
//     cout<<endl;
// }

// void deleteNode(node*& tail, int value)
// {
//     //empty list
//     if(tail==NULL)
//     {
//         cout<<"list is empty"<<endl;
//         return;
//     }
//     else
//     {
//         //non-empty list
//         node* pre=tail;
//         node* cur=tail->next;

//         while(cur->data!=value)
//         {
//             pre=cur;
//             cur=cur->next;
//         }

//         pre->next= cur->next;
        
//         //if one node
//         if(cur==pre)
//         {
//             tail=NULL;
//         }

//         //>=2 node 
//         else if(tail==cur)
//         {
//             tail=pre;
//         }
        
//         cur->next=NULL;

//         delete cur;
//     }
// }

// int main()
// {
//     node* tail= NULL;

//     insertNode(tail, 0, 1);
//     print(tail);

//     insertNode(tail, 1, 2);
//     print(tail);

//     insertNode(tail, 2, 3);
//     print(tail);

//     insertNode(tail, 3, 4);
//     print(tail);

//     insertNode(tail, 4, 5);
//     print(tail);

//     deleteNode(tail, 1);
//     print(tail);

//     return 101;
// }