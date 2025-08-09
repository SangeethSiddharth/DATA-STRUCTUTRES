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
    newnode-> data =value;
    newnode-> prev=nullptr;
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
    newnode->prev=temp;
}

void display(node* head)
{
    while(head != nullptr)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

void swapfirstlast(node* &head)
{
    node* first=head;
    node* last=head;
    while(last->next != nullptr)
    {
        last=last->next;
    }
    int temp=first->data;
    first->data=last->data;
    last->data=temp;
}

int main()
{
    node* head=nullptr;
    int n,val;
    cout<<"Enter the length of the list:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>val;
        insertend(head,val);
    }
    cout<<"Before Swapping First and last : ";
    display(head);
    swapfirstlast(head);
    cout<<"\nAfter Swapping first and lasr : ";
    display(head);
    cout<<"\nSangeeth Siddharth S\n2403917773821016";
    return 0;
}
