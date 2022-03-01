#include<iostream>
using namespace std;
class largest
{
    int a,b,c;
    public:
    void getdata();
    void  findLarge();
};
int main()
{
   largest lg;
   lg.getdata();
   lg.findLarge(); 
   return 0;
}
void largest :: getdata()
{
    cout<<"Enter the three numbers"<<endl;
    cin>>a>>b>>c;
}
void largest :: findLarge()
{
    int min=0;
    min=a;
    if(min<b)
    {
        min=b;
    }
    if(min<c)
    {
        min=c;
    }
    cout<<"Largest of threee number is:"<<min<<endl;
}