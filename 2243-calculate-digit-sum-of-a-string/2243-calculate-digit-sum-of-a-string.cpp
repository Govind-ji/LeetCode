class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size()>k)
        {
            vector<string> st;
            int i=0;
            string r="";
            while(i<s.size())
            {
                if(i!=0 && i%k==0)
                {
                    st.push_back(r);
                    r="";
                }
                r+=s[i];
                i++;
            }
            if(r!="")
            st.push_back(r);
            s="";
            for(string t:st)
            {
                int sum=0;
                for(char c:t)
                {
                    sum+=c-'0';
                }
                s+=to_string(sum);
            }
        }
        return s;
    }
};