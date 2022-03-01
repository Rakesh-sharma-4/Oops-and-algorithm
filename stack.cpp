#include <iostream>

using namespace std;

const int SIZE=10; 

class stack
{
   int items[SIZE];
   int top;
   int full();
   int empty();
   public:
   
   stack()
   {
      top=-1;
   }

   void display()
   {
        for(int i=top;i>=0;i--)
            cout<<items[i]<<" ";
        cout << endl;
   }

   stack operator--(int);
   friend stack operator+(stack s1,int elem);
};


int stack::full()
{
   if(top==SIZE-1)
      return 1;
   else
      return 0;
}


int stack::empty()
{
   if(top==-1)
      return 1;
   else
      return 0;
}


stack stack::operator--(int )
{
   if(empty())
   {
     cout<<"Stack is Empty\n";
   }
   else
   {
       cout<<"\nThe poped element is :"<<items[top]<<endl;
       stack t;
       t.top=--top;
       for(int i=0;i<=top;i++)
           t.items[i]=items[i];
   }
   return *this;
}


stack operator+(stack s1,int elem)
{
   if(s1.full())
     cout<<"\nStack overflow\n";
   else
     s1.items[++(s1.top)]=elem;
   return s1;
}
int main(){
   stack s1;
   int choice,elem;

   for(;;){
     cout<<"\n1:PUSH 2:POP 3:DISPLAY 4:EXIT\n"
     <<"enter your choice:";
     cin>>choice;
     switch(choice)
     {
       case 1:
           cout<<"Enter the element to be inserted:";
           cin>>elem;
           s1=s1+elem;
           break;
       case 2:
           s1=s1--;
           break;
       case 3:
           cout <<"The contents of the stack are : ";
           s1.display();
           break;
       case 4: exit(0);
       default: cout <<"Invalid choice\n";
       exit(0);
     }
   }
 return 0;
}