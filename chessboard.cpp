#include<iostream>
using namespace std;

int **board;
int tile=1;

void fillit(int trow,int tcol,int drow,int dcol,int size) {
    if(size==1)
        return;

    int qsize=size/2;
    int tileno=tile++;

    if(drow<trow+qsize && dcol<tcol+qsize )
        fillit(trow,tcol,drow,dcol,qsize);
    else{
        board[trow+qsize-1][tcol+qsize-1]=tileno;
        fillit(trow,tcol,trow+qsize-1,tcol+qsize-1,qsize);
    }

    if(drow<trow+qsize && dcol>=tcol+qsize )
        fillit(trow,tcol+qsize,drow,dcol,qsize);
    else{
        board[trow+qsize-1][tcol+qsize]=tileno;
        fillit(trow,tcol+qsize,trow+qsize-1,tcol+qsize,qsize);
    }

    if(drow>=trow+qsize && dcol<tcol+qsize )
        fillit(trow+qsize,tcol,drow,dcol,qsize);
    else{
        board[trow+qsize][tcol+qsize-1]=tileno;
        fillit(trow+qsize,tcol,trow+qsize,tcol+qsize-1,qsize);
    }

    if(drow>=trow+qsize && dcol>=tcol+qsize )
        fillit(trow+qsize,tcol+qsize,drow,dcol,qsize);
    else{
        board[trow+qsize][tcol+qsize]=tileno;
        fillit(trow+qsize,tcol+qsize,trow+qsize,tcol+qsize,qsize);
    }
}

int main(){
    int n,drow,dcol;
    cout<<"Enter the size of the chess board"<<endl;
    cin>>n;
    board=new int*[n];
    for(int i=0;i<n;i++)
        board[i]=new int[n];
    cout<<"Enter the defective tile positions (row,col)"<<endl;
    cin>>drow>>dcol;
    
    fillit(0,0,drow,dcol,n);
    cout<<"After filling"<<endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    

}