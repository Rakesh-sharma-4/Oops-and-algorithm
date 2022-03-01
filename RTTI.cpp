#include <bits/stdc++.h>
#include<iostream>

using namespace std;

class Base
{
    virtual void vfun(){} 
};

class Derived:public Base {};

int main()
{
    Base *a =  new Derived;
    Derived *b = dynamic_cast<Derived*>(a);
    if(a != NULL)
        cout<<"Cast of Base* to Derived* successful.\n";
    else    
        cout<<"Cast unsuccessful.\n";
    cout<<"a: "<<typeid(*a).name()<<endl;
    cout<<"b: "<<typeid(*b).name()<<endl;
    return 0;
}