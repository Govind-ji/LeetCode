class Solution {
public:
    int minInsertions(string s) {
        int l=s.size();
        int sum=0;
        int req=0;
        for(char c:s)
        {
            if(c=='(')
            {
                if(sum%2==1)
                {
                    sum--;
                    req++;
                }
                sum+=2;
            }
            else
            {
                if(sum>0)
                sum--;
                else
                {
                    req++;
                    sum++;
                }
            }
        }
        return req+sum;
    }
};