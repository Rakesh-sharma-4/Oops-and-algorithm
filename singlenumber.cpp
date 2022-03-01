#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    int s=0;
    for(int i=0;i<5;i++)
    {
        s=s^arr[i];
        cout<<s<<endl;
    }
    return 0;
}