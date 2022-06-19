#include<bits/stdc++.h>
using namespace std;
void adjlist(vector <int> adj[],int u , int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void print(vector<int> adj[] int v){
    for(int i=0;i< v ;i++)
    {
        for(int x:adj[i])
        {
            cout<<x<<" ";
        }
    }
}
int main(){
    int v=4;
    vector <int> adj[v];
    adjlist(adj,0,1);
    adjlist(adj,0,2);
    adjlist(adj,1,2);
    adjlist(adj,0,3);
    adjlist(adj,1,3);
    adjlist(adj,2,3);
}