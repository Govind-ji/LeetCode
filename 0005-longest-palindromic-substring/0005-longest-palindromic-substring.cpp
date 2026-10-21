class Solution {
public:
bool chk(string &t,int i,int j)
{
    if(j<=i)return true;
    if(t[i]==t[j])return chk(t,i+1,j-1);
    return false;
}
    string longestPalindrome(string s) {
        int n=s.size();
        int t=0,p=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(chk(s,i,j))
                {
                    if(t<(j-i+1))
                    {t=j-i+1;
                    p=i;}
                }
            }
        }
        return s.substr(p,t);
    }
};