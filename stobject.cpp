#include<iostream>
using namespace std;

class Student {
    string name;
    int usn;
    static int count;
    public:
    Student(){
        name='\0';
        usn=0;
        count++;
    }
    Student(string sname,int USN){
        name=sname;
        usn=USN;
        count++;
    }
    Student(Student &s){
        name=s.name;
        usn=s.usn;
        count++;
    }
    static int getCount(){
        return count;
    }
    void operator =(Student &s){
        name=s.name;
        usn=s.usn;
    }
    friend void display(Student &s);
    
};

void display(Student &s){
        cout<<"Name : "<<s.name<<endl;
        cout<<"USN : "<<s.usn<<endl;
}

int Student::count=0;

int main(){
    Student obj1,obj2("Arun",5647),obj3("Kamal",5874);
    Student obj4(obj2);
    
    obj1=obj2;

    display(obj1);

    obj1=obj3;

    display(obj1);

    cout<<"No of objects created "<<Student::getCount()<<endl;

    return 0;

}