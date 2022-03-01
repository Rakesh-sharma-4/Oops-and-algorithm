#include<iostream>
using namespace std;
int main()
{
    int n,num,sum=0;
    cout<<"Enter the number"<<endl;
    cin>>num;
    int num1=num;
    while(num!=0)
    {
        n=num%10;
        sum=sum+(n*n*n);
        num=num/10;
    }
    if(sum==num1)
    {
        cout<<"Is a armstrong number"<<endl;
    }
    else{
        cout<<"Is not a armstrong number"<<endl;
    }
    return 0;
}