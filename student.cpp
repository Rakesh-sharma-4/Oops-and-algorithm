#include<iostream>
using namespace std;
class student
{
    string usn;
    string name;
    int marks[3];
    float avg;
    public:
    void read()
    {
        cout<<"Enter the usn"<<endl;
        cin>>usn;
        cout<<"Enter the Name"<<endl;
        cin>>name;
        cout<<"Enter the marks"<<endl;
        for(int i=0;i<3;i++)
        cin>>marks[i];
    }
    void computeAvg()
    {
        int sum=0,min=101;
        for(int i=0;i<3;i++)
        {
            if(marks[i]<min)
            {
                min=marks[i];
            }
            sum+=marks[i];
        }
        avg=(float)(sum-min)/2;
    }
    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"USN : "<<usn<<endl;
        cout<<"Average : "<<avg<<endl;
    }
};
int main()
{
    student *s;
    cout<<"Enter the number of students"<<endl;
    int n;
    cin>>n;
     s=new student[n];

     for(int i=0;i<n;i++)
     {
         s[i].read();
         s[i].computeAvg();
     }
     for(int i=0;i<n;i++)
     {
         s[i].display();
     }
     return 0;
}
