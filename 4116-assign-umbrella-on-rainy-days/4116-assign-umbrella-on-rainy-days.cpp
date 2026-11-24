class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int b;
        int a=b=0;
        int n=rain.size();
        vector<string> ans(n,"None");
        for(int i=0;i<n;i++)
        {
            if(rain[i]!=1)
            continue;
            if(i<n-1 && rain[i]==rain[i+1] && (a==b || a<b))
            {
                ans[i]="Alice";
                a++;
            }
            else
            {
                ans[i]="Bob";
                b++;
            }
        }
        return ans;
    }
};