class Solution {
public:
void dfshelp(vector<vector<int>> &adj,map<pair<int,int>,int>&cost,int k,vector<int>&dist,int curr)
{
	for(int u:adj[k])
	{
		
		int newc=curr+cost[{k,u}];
        if(newc<dist[u])
		{
            dist[u]=newc;
	        dfshelp(adj,cost,u,dist,newc);
        }
	}
	return ;
}
int networkDelayTime(vector<vector<int>>& graph, int n, int k) {
	vector<vector<int>> adj(n+1);
	map<pair<int,int>,int> cost;
	for(vector<int> v:graph)
	{
		cost[{v[0],v[1]}]=v[2];
		adj[v[0]].push_back(v[1]);
	}
	vector<int> dist(n+1,INT_MAX);
	dist[k]=0;
	dfshelp(adj,cost,k,dist,0);
	int maxi=0;
	for(int i=1;i<n+1;i++)
	{
		if(dist[i]==INT_MAX)return -1;
		maxi=max(maxi,dist[i]);
	}
	return maxi;

        
    }
};