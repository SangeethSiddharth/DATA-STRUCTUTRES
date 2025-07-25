#include<iostream>
using namespace std;
int main()
{
    int arr[100],n,sum=0,product=1;
    cout<<"Enter the range of array:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        product*=arr[i];
    }
    cout<<"\nSum of array elements:"<<sum;
    cout<<"\nProduct of array elements:"<<product;
    return 0;
}
