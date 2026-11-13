class Solution {
public:
    vector<int> findOrder(int num, vector<vector<int>>& p) {
        vector<int> ans;
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
            ans.push_back(x);
            q.pop();
            vector<int> r=adj[x];
            for(int i:r){
                ind[i]--;
                if(!ind[i])
                q.push(i); //jiski dependency khtm vo agnge complte kr skte hain
            }
        }
        for(int i:ind)//jiski indegree 0 hai mtlb complete ho gaya 
        {
            if(i!=0)return {};
        }
        return ans;
    }
};