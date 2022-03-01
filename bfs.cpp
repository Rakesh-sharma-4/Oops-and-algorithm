#include <bits/stdc++.h>

using namespace std;

void bfs(vector<vector<int>> adjacency_list, int n, int s){
    queue<int> q;
    q.push(s);
    vector<int> visited(n+1);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        visited.at(node) = 1;
        cout<<node<<" ";
        for(const auto &child: adjacency_list.at(node)){
            if(!visited.at(child))
                q.push(child);
        }
    }
    cout<<endl;
}

int main(){
    cout<<"Enter the number of nodes: ";
    int n; cin>>n;
    cout<<"Enter the number of edges: ";
    int m; cin>>m;
    vector<vector<int>> adjacency_list(n+1);
    cout<<"Enter the graph:\n";
    while(m--){
        int a, b; cin>>a>>b;
        adjacency_list.at(a).push_back(b);
    }
    cout<<"Enter the starting node: ";
    int node; cin>>node;
    cout<<"The BFS traversal of the given graph is: ";
    bfs(adjacency_list, n, node);
    return 0;
}
