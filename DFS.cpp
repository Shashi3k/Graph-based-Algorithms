// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Graph{
    public:
    map<int, bool> visited;
    map<int,list<int>> adj;
    void add_edge(int v,int w);
    void DFS(int v);
};

void Graph::add_edge(int v,int w){
    adj[v].push_back(w);
}

void Graph::DFS(int v){
    visited[v]=true;
    cout<<v<<" ";
    list<int>::iterator i;
    for(i=adj[v].begin();i!=adj[v].end();++i)
    if(!visited[*i])
    DFS(*i);
}

int main() {
    Graph g;
    g.add_edge(0,1);
    g.add_edge(0,2);
    g.add_edge(1,2);
    g.add_edge(2,0);
    g.add_edge(2,3);
    g.add_edge(3,3);
    
    cout<<"Depth first search starting from the vertex 2 is \n";
    
    g.DFS(2);
}

//Output
// Depth first search starting from the vertex 2 is 
// 2 0 1 3 
