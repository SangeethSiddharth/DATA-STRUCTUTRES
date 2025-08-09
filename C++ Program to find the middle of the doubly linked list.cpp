#include<iostream>
using namespace std;

struct node
{
    int data;
    node* prev;
    node* next;
};

void insertend(node* &head,int value)
{
    node* newnode=new node;
    newnode->data=value;
    newnode->prev=nullptr;
    newnode->next=nullptr;
    if(head==nullptr)
        head=newnode;
    else
    {
         node* temp=head;
         while(temp->next != nullptr)
         {
             temp=temp->next;
         }
         temp->next=newnode;
         newnode->prev=temp;
    }
}

void display(node* head)
{
    while(head != nullptr)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

void middle(node* head)
{
    node* slow=head;
    node* fast=head;
    while(fast!=nullptr && fast->next != nullptr)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<"Middle element : "<<slow->data;
}

int main()
{
    node* head = nullptr;
    int n,val;
    cout<<"Enter the length of list : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<" :";
        cin>>val;
        insertend(head,val);
    }
    display(head);
    middle(head);
    return 0;
}
