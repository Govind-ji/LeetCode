class Solution {
public:
void dfs(vector<vector<int>>& adj,vector<int> &vis,int i)
{
    vis[i]=1;
    for(int u=0;u<vis.size();u++)
    {
        if(vis[u]==-1 && adj[i][u]==1)
        dfs(adj,vis,u);
    }
    return ;
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int> v(n,-1);
        int t=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==-1)
            {
                cout<<i<<" ";
                t++;
                v[i]=1;
                dfs(isConnected,v,i);
            }
        }
        return t;
    }
};