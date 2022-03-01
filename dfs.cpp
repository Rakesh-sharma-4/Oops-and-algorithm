#include <iostream>
#include <list>
#include <stack>
using namespace std;

list<int> *adjList;
stack<int> s;
bool *visited;

void addedge(int v, int u)
{
    adjList[v].push_back(u);
}

void dfs()
{
    int node;
    list<int>::iterator i;
    while (!s.empty())
    {
        node = s.top();
        s.pop();
        visited[node] = true;
        for (i = adjList[node].begin(); i != adjList[node].end(); i++)
        {
            if (!visited[*i])
            {
                s.push(*i);
            }
        }
    }
}

bool connected(bool visited[], int n)
{
    for (int i = 0; i < n; i++)
        if (!visited[i])
            return false;

    return true;
}

int main()
{
    int n, ch, v, u, src;
    cout << "Enter the number of nodes\n";
    cin >> n;
    adjList = new list<int>[n];
    visited = new bool[n];
    for (int i = 0; i < n; i++)
        visited[i] = false;

    
    do
    {
        cout << "Enter the edge to be added" << endl;
        cin >> v >> u;
        addedge(v, u);
        cout << "Enter 1 to continue" << endl;
        cin >> ch;
    } while (ch == 1);

    visited[0] = true;
    s.push(0);
    dfs();

    if (connected(visited, n))
        cout << "The given graph is connected\n";
    else
        cout << "The given graph is not connected\n";

    return 0;
}