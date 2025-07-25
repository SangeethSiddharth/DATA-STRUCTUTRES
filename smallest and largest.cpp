#include<iostream>
using namespace std;
int main()
{
    int r,large,small,arr[100];
    cout<<"Enter the size of array:";
    cin>>r;
    for(int i=0;i<r;i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }
    large=small=arr[0];
    for(int i=1;i<r;i++)
    {
        if(large<arr[i])
            large=arr[i];
        if(small>arr[i])
            small=arr[i];
    }
    cout<<"\nLargest element:"<<large;
    cout<<"\nSmallest element:"<<small;
    return 0;
}
