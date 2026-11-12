class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c:s)
        {
            if(c=='(' || c=='{' || c=='[')
            st.push(c);
            else if(st.size())
            {
                char r=st.top();
                if(r=='(' && c==')')
                {
                    st.pop();
                }
                else if(r=='{' && c=='}')
                st.pop();
                else if(r=='[' && c==']')
                st.pop();
                else
                return false;
            }
            else
            return false;
            
        }
        return st.size()==0;
    }
};