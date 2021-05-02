#include<bits/stdc++.h>

using namespace std;
vector<int> adj[100000];
bool visited[100000];


bool dfs(int curr , int dest)
{
    if(curr == dest)
        return 1;
    else
    {
        visited[curr] =1;
        bool f =0;
        for(int adj_v : adj[curr])
        {
            if(visited[adj_v])
                continue;
            else
            {
                if(find_path(adj_v, dest))
                {
                    f =1;
                }
            }
        }
        return f;
    }
}


vector<int> adj[100000];
bool visited[100000];

int dist[100000];
void bfs (int s)
{
    queue<int> q;
    for(int i=1; i<=100000; i++)
    {
        dist[i] = INT_MAX;
    }
    q.push(s);
    dist[s]=0;
    visited[s]=1;
    while(!q.empty())
    {
        int curr = q.front();
        q.pop();
        for(int adj_v :adj[curr])
        {
            if(visited[adj_v])
                continue;
            else
            {
                q.push(adj_v);
                visited[adj_v] = 1;
                dist[adj_v] = dist[curr]+1;
            }
        }
    }
}
