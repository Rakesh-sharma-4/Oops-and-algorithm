#include<iostream>
#include<math.h>

using namespace std;

class Shape
{
    protected:
        float area, perimeter;
    public:
        Shape(){ area=0; perimeter=0; };
        virtual void initialize()=0;
        virtual void display()=0;
        virtual float computeArea()=0;
        virtual float computePerimeter()=0;
        virtual ~Shape(){ free(&area); free(&perimeter); };
};

class Triangle : public Shape
{
    protected:
        float a,b,c;
    public:
        void initialize()
        {
            cout<<"\nEnter the 3 Sides of Triangle : ";
            cin>>a>>b>>c;
            area=computeArea();
            perimeter=computePerimeter();
        }
        float computeArea()
        {
            float s=(a+b+c)/2;
            return sqrt(s*(s-a)*(s-b)*(s-c));
        }
        float computePerimeter()
        {
            return a+b+c;
        }
        void display()
        {
            cout<<"Area of triangle : "<<area<<endl;
            cout<<"Perimeter of triangle : "<<perimeter<<endl;
        }
};

class Rectangle : public Shape
{
    protected:
        float a,b;
    public:
        void initialize()
        {
            cout<<"\nEnter the Sides of Rectangle : ";
            cin>>a>>b;
            area=computeArea();
            perimeter=computePerimeter();
        }
        float computeArea()
        {
            return a*b;
        }
        float computePerimeter()
        {
            return (a+b)*2;
        }
        void display()
        {
            cout<<"Area of Reactangle : "<<area<<endl;
            cout<<"Perimeter of Rectangle : "<<perimeter<<endl;
        }
};

int main()
{   
    Triangle t;
    Shape *st = &t;
    st->initialize();
    st->display();
     
    Rectangle r;
    Shape *sr = &r;
    sr->initialize();
    sr->display();

    return 0;   
}

