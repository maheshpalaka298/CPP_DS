#include <iostream>
#include<vector>
#include<queue>
using namespace std;
void dfs(int node,vector<int>ad[],vector<int>&vis)
{
    vis[node]=1;
    cout<<node<<" ";
    for(auto it:ad[node])
    {
        if(!vis[it])dfs(it,ad,vis);
    }
}
void bfs(int node,vector<int>ad[],vector<int>&vis)
{
    queue<int>q;
    q.push(node);
    vis[node]=1;
    while(!q.empty())
    {
        node=q.front();
        cout<<node<<" ";
        q.pop();
        for(auto it:ad[node])
        {
            if(!vis[it])
            {
                q.push(it);
                vis[it]=1;
            }
        }
    }
}
int main() {
	int n,e;
	cin>>n>>e;
//  WAY 1
// 	int m[n+1][n+1];
// 	int u,v;
// 	for(int i=0;o<e;i++)
// 	{
// 	    cin>>u>>v;
// 	    m[u][v]=1;
// 	    m[v][u]=1;
// 	}
// WAY 2
	vector<int>ad[n+1];
	int u,v;
	for(int i=0;i<e;i++)
	{
	    cin>>u>>v;
	    ad[u].push_back(v);
	    ad[v].push_back(u);
	}
	vector<int>vis(n+1,0);
// 	dfs(1,ad,vis);
// for(int i=1;i<n+1;i++)
// {
//   if(!vis[i])dfs(i,ad,vis);  
// }
for(int i=1;i<n+1;i++)
{
   if(!vis[i])bfs(i,ad,vis);  
}
}