#include<iostream>
using namespace std;

template <typename T>
void bubbleSort(T a[], int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1])
                swap(a[j], a[j+1]);
}

template <typename T>
int binarySearch(T a[], int start, int end, T x)
{
    if(start<=end)
    {
        int mid = (start+end)/2;
        if(a[mid]==x)
            return mid;
        else if(a[mid]<x)
            return binarySearch(a,mid+1,end,x);
        else
            return binarySearch(a,start,mid-1,x);
    }
    return -1;
}

int main()
{
    int n;
    cout<<"\nEnter number of elements : ";
    cin>>n;

    int a[n];
    cout<<"Enter integers : ";
    for(int i=0;i<n;i++)
        cin>>a[i];

    double b[n];
    cout<<"Enter double : ";
    for(int i=0;i<n;i++)
        cin>>b[i];

    bubbleSort<int>(a,n);
    bubbleSort<double>(b,n);

    cout<<"\nSorted integer array : ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    cout<<"\nSorted double array : ";
    for(int i=0;i<n;i++)
        cout<<b[i]<<" ";

    int x; double y;
    cout<<"\n\nEnter integer to search : ";
    cin>>x;
    cout<<"Enter double to search : ";
    cin>>y;

    cout<<endl;

    if(binarySearch(a,0,n,x)==-1)
        cout<<x<<" is not present in integer array";
    else
        cout<<x<<" is present in integer array";

    cout<<endl;

    if(binarySearch(b,0,n,y)==-1)
        cout<<y<<" is not present in double array";
    else
        cout<<y<<" is present in double array";

    return 0;
}