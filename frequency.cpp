#include<iostream>
using namespace std;
int findfrequency(int *a,int n,int key)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        count++;
    }
    return count;

}
int main()
{
    int n, key,ans;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the numbers"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element to find the frequency";
    cin>>key;
    ans=findfrequency(a,n,key);
    (ans==0)?(cout<<"Element not present in the array"):(cout<<"Frequency :"<<ans);
    return 0;
}