#include<iostream>
using namespace std;

int binarySearch(int a[],int l,int r,int key)
{
    if(l>=r)
    {
        return -1;
    }
    int mid=l+(r-l)/2;
    if(a[mid]==key)
    return mid;
    else if(key<a[mid])
        return binarySearch(a,l,mid-1,key);
    else
        return binarySearch(a,mid+1,r,key);    
}

int main()
{
    int n,key,index;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element to be searched for"<<endl;
    cin>>key;
    index=binarySearch(a,0,n,key);
    (index==-1)?(cout<<"Element not found"<<endl):(cout<<"Element found at index "<<index<<endl);
    return 0;
}