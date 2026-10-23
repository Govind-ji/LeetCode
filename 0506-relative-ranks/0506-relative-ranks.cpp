class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> pq;
        int t=score.size();
        vector<string> v(t);
        for(int i=0;i<t;i++)
        {
            pq.push({score[i],i});
        }
        int n=t;
        while(pq.size()>0)
        {
            int r=pq.top().second;
            if(t==n)
            v[r]="Gold Medal";
            else if(t==n-1)
            v[r]="Silver Medal";
            else if(t==n-2)
            v[r]="Bronze Medal";
            else
            v[r]=to_string(n-t+1);
            t--;
            pq.pop();
        }
        return v;
    }
};