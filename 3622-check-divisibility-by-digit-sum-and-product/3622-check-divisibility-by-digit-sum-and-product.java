class Solution {
    public boolean checkDivisibility(int n) {
        int s=0;
        long p=1l;
        int t=n;
        while(n!=0)
        {
            s+=n%10;
            p*=n%10;
            n/=10;
        }
        return t%(s+p)==0?true:false;

    }
}