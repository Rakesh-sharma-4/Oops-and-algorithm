#include<iostream>
using namespace std;

int linearSearch(int a[],int key,int n)
{
    if(n==-1)
    return -1;
    if(a[n]==key)
        return n;

    return linearSearch(a,key,n-1);
}  

int main()
{
    int n,key,index;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter the element to be searched for"<<endl;
    cin>>key;
    index=linearSearch(a,key,n-1);

    (index==-1)?(cout<<"Element not found"<<endl):(cout<<"Element found at index "<<index<<endl);
    return 0;
}