#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};

void insertend(node* &head,int value)
{
    node* newnode=new node;
    newnode-> data =value;
    newnode-> next=nullptr;
    if(head==nullptr)
    {
        head=newnode;
        return;
    }
    node* temp=head;
    while(temp->next != nullptr)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}

void display(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void even(node* head,node* &oddeven)
{
    while(head != nullptr)
    {
         if(head->data % 2 == 0)
                insertend(oddeven,head->data);
         head=head->next;
    }
}
void odd(node* head,node* &oddeven)
{
    while(head != nullptr)
    {
         if(head->data % 2 != 0)
                insertend(oddeven,head->data);
         head=head->next;
    }
}

int main()
{
    node* head=nullptr;
    node* oddeven=nullptr;
    int n,val;
    cout<<"Enter the length of the list:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>val;
        insertend(head,val);
    }
    cout<<"Original List:";
    display(head);
    even(head,oddeven);
    odd(head,oddeven);
    cout<<"\nEven Odd list:";
    display(oddeven);
    cout<<"\nSangeeth Siddharth S\n2403917773821016";
    return 0;
}

