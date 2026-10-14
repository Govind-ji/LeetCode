class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string s="";
        int sm=0,dig=9;
        while(num)
        {
            if(sm+dig<=sum)
            {
                s+=to_string(dig);
                sm+=dig;
                num--;
            }
            else
            dig--;
        }
        return sm==sum?s:"";
    }
};