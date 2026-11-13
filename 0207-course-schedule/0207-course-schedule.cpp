class Solution {
public:
    bool canFinish(int num, vector<vector<int>>& p) {
        vector<vector<int>> adj(num);
        vector<int> ind(num,0);
        for(vector<int> v:p)
        {
            adj[v[1]].push_back(v[0]);
            ind[v[0]]++;   //dependency wale nodes
        }
        queue<int> q;  // source dhoondh rhe jiski dependency 0 ho
        for(int i=0;i<num;i++)
        {
            if(ind[i]==0)
            q.push(i);
        }
        while(!q.empty())
        {
            int x=q.front();
            q.pop();
            vector<int> r=adj[x];
            for(int i:r){
                ind[i]--;
                if(!ind[i])
                q.push(i);
            }
        }
        for(int i:ind)
        {
            if(i!=0)return false;
        }
        return true;
    }
};