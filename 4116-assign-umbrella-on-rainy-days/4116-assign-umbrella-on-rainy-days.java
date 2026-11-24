class Solution {
    public String[] assignUmbrella(int[] rain) {
        int b;
        int a=b=0;
        int n=rain.length;
        String ans[]=new String[n];
        for(int i=0;i<n;i++)
        {
            if(rain[i]!=1)
            {
                ans[i]="None";
                continue;
            }
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
}