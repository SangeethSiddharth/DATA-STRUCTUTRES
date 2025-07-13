#include<iostream>
using namespace std;
int main()
{
    string employees[100];
    int salary[100],n;
    cout<<"Enter number of employess:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter employee name:";
        cin>>employees[i];
        cout<<"\nEnter the salary:";
        cin>>salary[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<employees[i]<<" - "<<salary[i];
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        int flag=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(salary[j]>salary[j+1])
            {
                int temp=salary[j];
                salary[j]=salary[j+1];
                salary[j+1]=temp;
                string x=employees[j];
                employees[j]=employees[j+1];
                employees[j+1]=x;
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
    cout<<"\n\nAfter Sorting:\n\n";
    for(int i=0;i<n;i++)
    {
        cout<<employees[i]<<" - "<<salary[i];
        cout<<endl;
    }
    return 0;
}
