class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<int> st;
        int n=t.size();
        vector<int> v(n);
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && t[st.top()]<=t[i])st.pop();
            if(st.empty())
            v[i]=0;
            else 
            v[i]=st.top()-i;
            st.push(i);
        }
        return v;
    }
};