#include <iostream>

using namespace std;

class complex
{
  int r,i;
  public:
  void read();
  void print();
  friend complex add(int a,complex c);
  friend complex add(complex c1,complex c2);
};
void complex::read()
{
  cin>>r>>i;
}
void complex::print()
{
  cout<<r<<"+i"<<i<<endl;
}
complex add(int a,complex c)
{
  complex t;
  t.r=a+c.r;
  t.i=c.i;
  return t;
}
complex add(complex c1,complex c2)
{
  complex t;
  t.r=c1.r+c2.r;
  t.i=c1.i+c2.i;
  return t;

}

int main()
{
    int a;
    cout << "enter integer :";
    cin>>a;

    complex c1,c2,c3;
    cout<<"Enter real and imaginary part C1 :\n";
    c1.read();

    cout<<"Enter real and imaginary part C2 :\n";
    c2.read();

    cout<<"\na : "<<a;
    cout<<"\nc1 : ";
    c1.print();
    cout<<"c2 : ";
    c2.print();

    c3=add(a,c1);
    cout<<"\na + c1 : ";
    c3.print();

    c3=add(c1, c2);
    cout<<"c1 + c2 : ";
    c3.print();

    return 0;
}