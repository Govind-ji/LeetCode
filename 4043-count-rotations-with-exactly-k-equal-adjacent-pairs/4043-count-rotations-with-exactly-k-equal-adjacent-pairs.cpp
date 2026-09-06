class Solution {
public:
    int countRotations(string s, int k) {
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            string t=s.substr(i,n-i);
            t+=s.substr(0,i);
            int r=0;
            for(int j=1;j<n;j++)
            {
                if(t[j]==t[j-1]){r++;
                }
            }
            if(r==k)ans++;
        }
        return ans;
    }
};