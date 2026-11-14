class Solution {
public:
    vector<int> findOrder(int num, vector<vector<int>>& p) {
        vector<int> ind(num,0);
        vector<vector<int>> adj(num);
        for(vector<int> v:p)
        {
            adj[v[1]].push_back(v[0]);
            ind[v[0]]++;
        }
        queue<int> q;
        for(int i=0;i<num;i++)
        {
            if(ind[i]==0)
            q.push(i);
        }
        vector<int> v;
        while(!q.empty())
        {
            int f=q.front();
            q.pop();
            v.push_back(f);
            for(int u:adj[f])
            {
                ind[u]--;
                if(!ind[u])q.push(u);
            }
        }
        for(int i:ind)
        {
            if(i)return {};
        }
        return v;
    }
};