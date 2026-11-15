class Solution {
public:
void dfs(vector<vector<int>> &adj,vector<int>&vis,int curr)
{
    vis[curr]=1;
    for(int i:adj[curr])
    {
        if(vis[i]!=-1)
        {
            continue;
        }
        dfs(adj,vis,i);
    }
}
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1)return -1;
        vector<vector<int>> adj(n);
        for(vector<int> v:connections)
        {
            adj[v[0]].push_back(v[1]);
            adj[v[1]].push_back(v[0]);
        }
        int r=0;
        vector<int> vis(n,-1);
        for(int i=0;i<n;i++)
        {
            if(vis[i]==-1)
            {
                r++;
                dfs(adj,vis,i);
            }
        }
        r--;
        return r;
    }
};