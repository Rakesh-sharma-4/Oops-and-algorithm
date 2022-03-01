#include<iostream>
using namespace std;
template <class X>
void f( X a)
{
    cout<<" inside f(x) a\n";
}
template <class X,class Y>
void f(X a, Y b)
{
    cout<<"Inside F(x,y) a b\n";
}
int main()
{
    f(double(10,20));
    return 0;
}