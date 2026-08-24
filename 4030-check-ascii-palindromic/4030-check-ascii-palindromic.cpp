class Solution {
public:
    bool isPalindromic(string s) {
        string t="";
        for(char c:s)
        {
            int to=(int)c;
            string st="";
            while(to)
            {
                st+='0'+to%2;
                to/=2;
            }            
            while(st.size()<8)
            {
                st+='0';
            }
            reverse(st.begin(),st.end());

            t+=st;
        }
        int n=t.size();
        for(int i=0;i<n/2;i++)
        {
            if(t[i]!=t[n-i-1])return false;
        }
        return true;
    }
};