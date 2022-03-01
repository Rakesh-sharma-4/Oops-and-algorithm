#include<iostream>
#define INT_MAX 999
using namespace std;

int n;

int getMin(int *dist,bool *visited){
    int minIndex;
    int min=INT_MAX;

    for(int i=0;i<n;i++){
        if(visited[i]==false && dist[i]<=min){
            min=dist[i];
            minIndex=i;
        }
    }

    return minIndex;
}

int main(){
    int src;
    cout<<"Enter the no of vertices in the graph\n";
    cin>>n;
    int graph[n][n];
    int dist[n],v;
    bool visited[n];
    
    cout<<"Enter the weights\n";
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin>>graph[i][j];

    cout<<"Enter the source vertex: ";
    cin>>src;

     for(int i=0;i<n;i++){
        dist[i]=INT_MAX;
        visited[i]=false;
    }

    dist[src]=0;

    for(int j=0;j<n-1;j++){
        
        v=getMin(dist,visited);
        visited[v]=true;

        for(int u=0;u<n;u++){
            if(!visited[u] && graph[v][u] && dist[v]!=INT_MAX && graph[v][u]+dist[v]<dist[u]){
                dist[u]=dist[v]+graph[v][u];
            }
        }

    }

    cout<<"Vertex\tDistance from source\n";
    for(int i=0;i<n;i++)
    cout<<i<<'\t'<<dist[i]<<'\n';

    return 0;
}