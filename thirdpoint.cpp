#include<iostream>
using namespace std;
template <class x>
class point{
	public:x a,b;
	point(x a=0,x b=0)
	{
		this->a=a;
		this->b=b;
	}
};
template <class x,class y>
y sum(x a,y b)
{
	return a+b;
}
template<class x>
point<x>sum(point<x>p1,point<x>p2)
{
	point<x>p;
	p.a=p1.a+p2.a;
	p.b=p1.b+p2.b;
	return p;
}
int main()
{
	int a; int b;
	cout<<"Enter a and b\n";
	cin >>a>>b;
	cout<<"Sum of ("<<a<<","<<b<<")" <<" and ("<<b<<","<<a<<") is "<<sum(a,b)
	<<" "<<sum(b,a)<<endl;
	cout<<"Enter c and d\n";
	int c,d,e,f;
	cin>>c>>d;
	cout<<"Enter e and f\n";
	cin>>e>>f;
	point<int>p1(c,d);point<int>p2(e,f);
	point<int>p3=sum(p1,p2);
	cout<<"Sum of ("<<c<<","<<d<<") and ("<<e<<","<<f<<") is ("<<p3.a<<","<<p3.b<<")";
}