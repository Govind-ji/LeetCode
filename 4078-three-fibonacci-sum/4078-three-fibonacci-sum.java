class Solution {
    public boolean threeFibonacciSum(int n) {
        if(n<2)return false;
        int i=1,j=1;
        int l=0;
        while(j<n)
        {
            int r=i+j;
            if(r-l==n)return true;
            l=i;
            i=j;
            j=r;
        }
        return false;
    }
}