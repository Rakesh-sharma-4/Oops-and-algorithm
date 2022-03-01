#include <iostream>
using namespace std;

class Rectangle
{
    public:
        int length, breadth, area, perimeter;
        
        Rectangle& setDimensions(const int& a, const int& b);

        Rectangle()
        {
        setDimensions(0,0); 
        }
        Rectangle(int l)
        {
            setDimensions(l,0);
        }
        Rectangle(int l, int b)
        {
            setDimensions(l,b);
        }

        int computeArea();
        int computePerimeter();
        void display();

};

Rectangle& Rectangle::setDimensions(const int& a , const int& b)
{
    this->length = a;
    this->breadth = b;
    return *this;
}

int Rectangle::computeArea()
{
	return length*breadth;
}
int Rectangle::computePerimeter()
{
	return 2*(length+breadth);
}
void Rectangle::display()
{
	cout << endl << "l = "<< length << " b = " << breadth <<endl<< "area = " << area << " per = "<< perimeter <<endl;
}

int main()
{
    Rectangle a(15,30);
    a.area = a.computeArea();
    a.perimeter = a.computePerimeter();
    a.display();
   // delete a;
    return 0;
}