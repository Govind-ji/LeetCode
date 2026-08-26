class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string t="";
        int n=s.size(),mini=n;
        int l=0,cnt=0,r=0;
        while(r<n)
        {
            while(r<n && cnt<k)
            {
                cnt+=s[r]=='1'?1:0;
                r++;
            }
            while(l<n && s[l]!='1')
            l++;
            if(cnt ==k && mini>=r-l)
            {
                if(t=="" || mini>r-l)
                t=s.substr(l,r-l);
                else
                t=min(t,s.substr(l,r-l));
                mini=r-l;
            }
            while(cnt>=k)
            {
                if(s[l]=='1')
                cnt--;
                l++;
            }

        }
        return t;
    }
};