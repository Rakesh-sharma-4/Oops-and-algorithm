#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the no. of elements"<<endl;
    cin>>n;
    int a[n],b[n],r[n];
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        r[i]=0;
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[j]<=a[i])
            r[i]++;
            else
            r[j]++;
        }
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" "<<r[i]<<endl;
    for(i=0;i<n;i++)
    {
        b[r[i]]=a[i];
    }    
    for(i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}