class Solution {
public:
    map<char,int> mp;
    string t;
    string res;
    int n;
    bool dfs(int i,bool g)
    {
        if(i==n)
            return g;
        char sc=g?'a':t[i];
        for(char c=sc;c<='z';c++)
            {
                if(mp[c]>0)
                {
                    res[i]=c;
                    mp[c]--;
                    bool ng=g||(c>t[i]);
                    if(dfs(i+1,ng))
                        return true;
                    mp[c]++;
                }
            }
        return false;
    }
    string lexGreaterPermutation(string s, string target) {
        this->n=s.length();
        this->t=target;
        this->res=string(n,' ');
        mp.clear();
        for(char c:s)
            mp[c]++;
        if(dfs(0,false))
            return res;
        else
            return "";
    }
};