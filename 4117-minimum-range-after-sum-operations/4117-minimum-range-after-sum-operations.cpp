class Solution {
public:
    int minRange(int a, int b, int c) {
        int maxi=max(a,max(b,c));
        int mini=min(a,min(b,c));
        int mid=a+b+c-mini-maxi;
        if(mini+mid>maxi)return maxi-mini;
        maxi=mini+mid;
        return maxi-mini;
    }
};