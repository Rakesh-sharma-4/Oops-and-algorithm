#include <iostream>
using namespace std;

class DM;

class DB
{
    float feet, inch;
    public:
        void input()
        {
            cout << "Enter distance (feet inch) : ";
            cin >> feet >> inch;
        }
        void display()
        {
            cout << endl << "Distance is : " << feet << " feet " << inch << " inch";
        }

        friend void add(DB &b, DM &a);
};

class DM
{
    float meter, cm;
    public:
        void input()
        {
            cout << "Enter distance (meter cm) : ";
            cin >> meter >> cm;
        }
        void display()
        {
            cout << endl << "Distance is : " << meter << " meter " << cm << " cm";
        }

        friend void add(DB &b, DM &a);
};

void add(DB &b, DM &a)
{
    cout << "Enter your Choice :" <<endl;
    cout << "1. Meter-CM" << endl;
    cout << "2. Feet-Inch"<< endl;
    int ch;
    cin>>ch;

    if(ch==1)
    {
        DM c;
        int i = (a.meter*100 + a.cm + b.feet*30.48 + b.inch*2.54);

        if(i >= 100)
        {
            c.meter = i/100;
            c.cm = i%100;
        }
        else
        {
            c.meter = 0;
            c.cm = i;
        }

        c.display();
    }
    else if(ch==2)
    {
        DB c;
        int i = (a.meter*39.37 + a.cm*0.3937 + b.feet*12 + b.inch);

        if(i >= 12)
        {
            c.feet = i/12;
            c.inch = i%12;
        }
        else
        {
            c.feet = 0;
            c.inch = i;
        }

        c.display();
    }
}

int main()
{
    DM a; DB b;

    a.input();
    b.input();

    cout<< endl;

    add(b,a);

    cout << endl;

    return 0;
}