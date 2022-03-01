#include<iostream>
using namespace std;
class matrix
{
  private:long arr[10][10];
  int row;int col;
  public:
  void input();
  void dispaly();
  int operator ==(matrix);
  matrix operator+(matrix);
  matrix operator-(matrix);

};

int matrix::operator==(matrix x)
{
  if(row==x.row && col==x.col)
  {
    return 1;
  }
  return 0;
}

void matrix::input()
{
  cout<<"enter the number of rows\n";
  cin>>row;
  cout<<"enter the number of columns\n";
  cin>>col;
  cout<<"enter the elements of the matrix\n";
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
       cin>>arr[i][j];
    }
  }
}

void matrix::dispaly()
{
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
       cout<<arr[i][j] << " ";
    }
    cout << endl;
  }
}

matrix matrix::operator+(matrix x)
{
  matrix temp;
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      temp.arr[i][j]=arr[i][j]+x.arr[i][j];
    }
    temp.row=row;
    temp.col=col;
  }
  return temp;
}

matrix matrix::operator-(matrix x)
{
  matrix temp;
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      temp.arr[i][j]=arr[i][j]-x.arr[i][j];
    }
    temp.row=row;
    temp.col=col;
  }
  return temp;
}

int main()
{
  matrix m1,m2,m3,m4;

  cout<<"Enter Details for Matrix 1\n";
  m1.input();

  cout<<"\nEnter Details for Matrix 2\n";
  m2.input();
  cout<<"\n";

  if(m1==m2)
  {
    m3=m1+m2;
    m4=m1-m2;
    cout<<"Sum of matrices :\n";
    m3.dispaly();
    cout<<"Difference of matrices :\n";
    m4.dispaly();
  }
  else
  {
    cout<<"order not compatible\n";
  }

  return 0;
}