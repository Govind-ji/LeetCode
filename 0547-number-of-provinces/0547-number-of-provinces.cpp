class Solution {
public:
void dfshelp(vector<vector<int>>& adj,vector<int>& vis,int curr)
{
    vis[curr]=1;
    for(int i=0;i<vis.size();i++)
    {
        if(vis[i]==-1 && adj[curr][i]==1 )
        dfshelp(adj,vis,i);
    }
    return;
}
    int findCircleNum(vector<vector<int>>& adj) {
        int n=adj.size();
        vector<int> vis(n,-1);
        int s=0;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==-1)
            {
                s++;
                dfshelp(adj,vis,i);
            }
        }
        return s;
    }
};