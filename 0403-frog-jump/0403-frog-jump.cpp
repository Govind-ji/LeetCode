class Solution {
public:
int t[2001][2001];
bool dphelp(vector<int> & stones,unordered_map<int,int> &mp,int curr,int prev,int n)
{
    if(curr==n-1)return true;
    bool res=false;
    if(t[curr][prev]!=-1)return t[curr][prev];
    for(int nj=prev-1;nj<=prev+1;nj++)
    {
        if(nj>0)
        {
        int next=nj+stones[curr];  
        if(mp.find(next)!=mp.end()) //find ye dekh rha ki stones us number ka present hai ya nhi
        res=res||dphelp(stones,mp,mp[next],nj,n);
        }
    }
    return t[curr][prev]=res;
}
    bool canCross(vector<int>& stones) {
        int n=stones.size();
        unordered_map<int,int>mp;
        if(stones[1]!=1)return false;
        for(int i=0;i<n;i++)
        {
            mp[stones[i]]=i;
        }
        memset(t,-1,sizeof(t));
        return dphelp(stones,mp,0,0,n);
    }
};