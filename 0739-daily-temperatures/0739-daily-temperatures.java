class Solution {
    public int[] dailyTemperatures(int[] t) {
        Stack<Integer> st=new Stack<>();
        int n=t.length;
        int ar[]=new int[n];
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && t[st.peek()]<=t[i])
            {
                st.pop();
            }
            if(!st.empty())
            ar[i]=st.peek()-i;
            st.push(i);
        }
        return ar;
    }
}