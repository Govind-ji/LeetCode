class Solution {
    public int[] maxSlidingWindow(int[] nums, int k) {
        int n=nums.length;
        int ar[]=new int[n-k+1];
        int p=0;
        Deque<Integer> dq=new ArrayDeque<>();
        for(int i=0;i<n;i++)
        {
            if(!dq.isEmpty() && dq.peekFirst()<=i-k)
            dq.removeFirst();
            while(!dq.isEmpty() && nums[dq.peekLast()]<nums[i])
            dq.removeLast();
            dq.addLast(i);
            if(i>=k-1)
            ar[p++]=nums[dq.peekFirst()];
        }
        return ar;
    }
}