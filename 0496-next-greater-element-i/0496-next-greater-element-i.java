class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        Stack<Integer> st=new Stack<>();
        int n=nums2.length;
        HashMap<Integer,Integer> mp =new HashMap<>();
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && nums2[i]>st.peek())
            {
                st.pop();
            }
            if(st.empty())
            {
                mp.put(nums2[i],-1);
            }
            else
            {
            mp.put(nums2[i],st.peek());
            }
            st.push(nums2[i]);
        }
        n=nums1.length;
        int p=0;
        int ar[]=new int[n];
        for(int i:nums1)
        {
            ar[p++]=mp.get(i);
        }
        return ar;
    }
}