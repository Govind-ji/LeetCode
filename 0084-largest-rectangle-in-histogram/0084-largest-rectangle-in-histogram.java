class Solution {
    int [] minright(int[] nums,int n)
    {
        Stack<Integer> st=new Stack<>();
        int ar[]=new int[n];
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && nums[st.peek()]>=nums[i])
            st.pop();
            if(st.empty())
            ar[i]=n;
            else 
            ar[i]=st.peek();
            st.push(i);
        }
        return ar;
    }
    int [] minleft(int[] nums,int n)
    {
        Stack<Integer> st=new Stack<>();
        int ar[]=new int[n];
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && nums[st.peek()]>=nums[i])
            st.pop();
            if(st.empty())
            ar[i]=-1;
            else
            ar[i]=st.peek();
            st.push(i);
        }
        return ar;
    }
    public int largestRectangleArea(int[] heights) {
        int n=heights.length;
        int str[]=new int[n];
        int stl[]=new int[n];
        str=minright(heights,n);
        stl=minleft(heights,n);
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            int l=stl[i];
            int r=str[i];
            maxi=Math.max(maxi,(r-l-1)*heights[i]);
        }
        return maxi;
    }
}