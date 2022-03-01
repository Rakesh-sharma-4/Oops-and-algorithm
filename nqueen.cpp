#include <iostream>
using namespace std;
const int n = 4;

bool isSafe(int board[][n], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        if (board[row][i] == 1)
            return false;
    }

    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 1)
            return false;
    }

    for (int i = row, j = col; i < n && j >= 0; i++, j--)
    {
        if (board[i][j] == 1)
            return false;
    }

    return true;
}

 bool nqueens(int board[][n], int col)
{
    if (col >= n)
        return true;
    for (int i = 0; i < n; i++)
    {
        if (isSafe(board, i, col))
        {
            board[i][col] = 1;
            if (nqueens(board, col + 1))
                return true;
        }
        board[i][col] = 0;
    }
    return false;
}

int main()
{
    int board[n][n];

    for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                board[i][j]=0;
            }
            cout << endl;
        }

    if (nqueens(board, 0))
    {
        cout<<"Solution for board of size "<<n<<" is\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Solution does not exist\n";
    }
    return 0;
}