#include<iostream>
using namespace std;
int main()
{
    int cards[13],temp,i,j;
    for(i=0;i<13;i++)
    {
        cout<<"\nEnter card "<<i+1<<" :";
        cin>>cards[i];
    }
    cout<<endl;
    for(i=0;i<13;i++)
    {
        cout<<cards[i]<<" ";
    }
    for(i=1;i<13;i++)
    {
        temp=cards[i];
        j=i-1;
        while(j>=0 && cards[j]>temp)
        {
            cards[j+1]=cards[j];
            j--;
        }
        cards[j+1]=temp;
    }
    cout<<"\nCards after sorting:\n";
    for(i=0;i<13;i++)
    {
        cout<<cards[i]<<" ";
    }
    return 0;
}
