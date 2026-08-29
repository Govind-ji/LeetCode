class Solution {
public:
vector<int> minprev(vector<int> & h)
{
    int n=h.size();
    vector<int> v(n,-1);
    stack<int> st;
    for(int i=0;i<n;i++)
    {
        while(!st.empty() && h[st.top()]>=h[i])
        st.pop();
        if(!st.empty())
        v[i]=st.top();
        st.push(i);
    }
    return v;
}
vector<int> minnext(vector<int> & h)
{
    int n=h.size();
    vector<int> v(n,n);
    stack<int> st;
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() && h[st.top()]>=h[i])
        st.pop();
        if(!st.empty())
        v[i]=st.top();
        st.push(i);
    }
    return v;
}
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> prev=minprev(heights);
        vector<int> next=minnext(heights);
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            int l=heights[i];
            int b=next[i]-prev[i]-1;
            maxi=max(maxi,l*b);
        }
        return maxi;
    }
};