#include<iostream>

using namespace std;

class STUDENT
{
    public:
        int USN, Age;
        char name[10];
        void input();
};

class UGSTUDENT: public STUDENT
{
    public:
        int sem,stipend,fee;
        void input();
        friend void Avg(UGSTUDENT *, int);
};

class PGSTUDENT: public STUDENT
{
    public:
        int sem,stipend,fee;
        void input();
        friend void Avg(PGSTUDENT *, int);
};

void STUDENT::input()
{
    cout<<"\nEnter name: "; 
    cin>>name; 
    cout<<"Enter USN: "; 
    cin>>USN; 
    cout<<"Enter age: "; 
    cin>>Age; 
}

void UGSTUDENT::input() 
{ 
    STUDENT::input(); 
    cout<<"Enter the sem: "; 
    cin>>sem; 
    cout<<"Enter the fees: "; 
    cin>>fee; 
    cout<<"Enter the stipend: "; 
    cin>>stipend; 
}

void PGSTUDENT::input() 
{ 
    STUDENT::input(); 
    cout<<"Enter the sem: "; 
    cin>>sem; 
    cout<<"Enter the fees: "; 
    cin>>fee; 
    cout<<"Enter the stipend: "; 
    cin>>stipend; 
}

void Avg(UGSTUDENT *x, int n)
{
    int sum=0;
    for(int i=0; i<n ;i++)
    {
        sum += x[i].Age;
    }

    cout << (float)sum/n<<endl;
}

void Avg(PGSTUDENT *x, int n)
{
    int sum=0;
    for(int i=0; i<n ;i++)
    {
        sum += x[i].Age;
    }

    cout << (float)sum/n<<endl;
}

int main()
{
		int m,n,i;

		cout<<"Enter no.of UG students : ";
		cin>>m;
		UGSTUDENT u[m];
		for(i=0;i<m;i++)
			u[i].input();

		cout<<"\nEnter no.of PG students : ";
		cin>>n;
        PGSTUDENT p[n];
		for(i=0;i<n;i++)
			p[i].input();

		cout<<"\nAverage age of UG students : ";
		Avg(u,m);
		cout<<"\nAverage age of PG students : ";
		Avg(p,n);

        return 0;
}