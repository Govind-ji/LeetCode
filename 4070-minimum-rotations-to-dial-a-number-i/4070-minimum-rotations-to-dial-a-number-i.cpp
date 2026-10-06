class Solution {
public:
    int minRotations(string s) {
        int sum=0;
        int curr=0;
        for(char c:s)
        {
            int t=c-'0';
            int d=abs(curr-t);
            sum+=min(d,10-d);
            curr=t;
        }
        return sum;
    }
};