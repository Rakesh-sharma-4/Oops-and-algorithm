#include<iostream>
using namespace std;
int main()
{
    int n;
    int fact=1;
    cout<<"Enter the number"<<endl;
    cin>>n;
    while(n!=0)
    {
        fact=fact*n;
        n--;
    }
    cout<<fact;
    return 0;
}