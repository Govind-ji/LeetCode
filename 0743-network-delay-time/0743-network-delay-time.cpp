class Solution {
public:   //by dijikstras
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int> dis(n+1,INT_MAX);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        dis[k]=0;
        pq.push({0,k});
        vector<vector<pair<int,int>>> adj(n+1);
        for(vector<int> v:times)
        {
            adj[v[0]].push_back({v[1],v[2]});
        }
        while(!pq.empty())
        {
            auto [cst,nd]=pq.top();
            pq.pop();
            if(cst>dis[nd])continue;
            for(pair<int,int> v:adj[nd])
            {
                int newcst=cst+v.second;
                int x=v.first;
                if(newcst<dis[x])
                {
                    dis[x]=newcst;
                    pq.push({newcst,x});
                }
            }
        }
        int maxi=*max_element(dis.begin()+1,dis.end());
        return maxi==INT_MAX?-1:maxi;
    }
};