class Solution {
    public String shortestBeautifulSubstring(String s, int k) {
        int n=s.length();
        int l=0,r=0,mini=n;
        int cnt=0;
        String t="";
        while(r<n)
        {
            while(r<n && cnt<k)
            {
                if(s.charAt(r)=='1')cnt++;
                r++;
            }
            while(l<n && s.charAt(l)!='1')
            l++;
            if(cnt==k && mini>=r-l)
            {
                if(t.equals("") || mini>r-l)
                t=s.substring(l,r);
                else
                t=t.compareTo(s.substring(l,r))<0?t:s.substring(l,r);
                mini=r-l;
            }
            while(cnt>=k)
            {
                if(s.charAt(l)=='1')
                cnt--;
                l++;
            }

        }
        return t;
    }
}