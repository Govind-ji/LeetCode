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
            if(t==n)
            v[pq.top().second]="Gold Medal";
            else if(t==n-1)
            v[pq.top().second]="Silver Medal";
            else if(t==n-2)
            v[pq.top().second]="Bronze Medal";
            else
            v[pq.top().second]=to_string(n-t+1);
            t--;
            pq.pop();
        }
        return v;
    }
};