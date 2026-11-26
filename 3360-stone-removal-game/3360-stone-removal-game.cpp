class Solution {
public:
    bool canAliceWin(int n) {
        int i=0,j=10;
        while(n>=0)
            {
                n=n-j;
                i++;
                j--;
            }
        if(i%2==0)
            return true;
        else
             return false;
    }
};