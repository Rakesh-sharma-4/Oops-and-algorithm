#include<iostream>
using namespace std;
int binomial(int n,int k){
    if(k>n)
        return 0;
    if(k==0 || k==n)
        return 1;
    return binomial(n-1,k-1)+binomial(n-1,k);
}

int main(){
    int n,k;
    cout<<"Enter the value of n and k"<<endl;
    cin>>n>>k;
    cout<<binomial(n,k);
}