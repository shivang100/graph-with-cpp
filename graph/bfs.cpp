#include<bits/stdc++.h>
using namespace std;
void adjlist(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void print(vector <int> adj[] ,int v)
{
    for(int i=0;i<v;i++)
    {
        for(int x:adj[i])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
void bfs(vector <int> adj[],int v,int s)
{
    bool visited[v+1];
    for(int i=0;i<v;i++)
    {
        visited[i]=false;
    }
    queue <int> q;
    visited[s]=true;
    q.push(s);
    while(q.empty()==false)
    {
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int v:adj[u]){
            if(visited[v]==false)
            {
                visited[v]=true;
                q.push[v];

            }
            
        }
    }
}
