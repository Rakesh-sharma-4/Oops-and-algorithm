#include<iostream>
using namespace std;
class student
{
    char name[20];
    char USN[10];
    double mark1,mark2,mark3;
    public:
    void getdata();
    void display();
    float avg();
};
int main()
{
   student *st;
   st=new student[10];

   for(int i=0;i<10;i++)
   {
       st[i].getdata();
       st[i].avg();
   } 
   for(int i=0;i<10;i++)
   {
       st[i].display();
   }
    return 0;
}
void student :: getdata()
{
    cout<<"Enter the usn of student:"<<endl;
    cin>>USN;
    cout<<"Enter the name of the student"<<endl;
    cin>>name;
    cout<<"Enter the marks of the student in 3 subject"<<endl;
    cin>>mark1,mark2,mark3;
}
void student :: display()
{
    cout<<"Name:-"<<name<<endl;
    cout<<"Usn:-"<<USN<<endl;
    cout<<"Marks:-"<<" "<<mark1<<" "<<mark2<<" "<<mark3<<endl;
    cout<<"Average:-"<<avg()<<endl;
}
float student:: avg()
{
    int min;
    float a;
    min=mark1;
    if(mark2<min)
    {
        min=mark2;
    }
    if(mark3<min)
    {
        min=mark3;
    }
    a=(mark1+mark2+mark3-min)/2.0;
    return a;
}