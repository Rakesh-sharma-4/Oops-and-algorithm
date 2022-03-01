#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a;
    vector<int>::iterator it;
    int temp;
    srand(100);
    for(int i=0;i<10;i++){
        temp=rand()%100+1;
        a.push_back(temp);
    }

    cout<<"The random vector is\n";
    for(it=a.begin();it!=a.end();it++){
        cout<<*it<<" ";
    }

    sort(a.rbegin(),a.rend());
    
    cout<<"\nSorted vector in descending order\n";
    for(it=a.begin();it!=a.end();it++){
        cout<<*it<<" ";
    }

    cout<<"\nSum : "<<accumulate(a.begin(),a.end(),0)<<'\n';
    return 0;

}