class Solution {
public:

    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> mp;
        unordered_map<char,int> mp1;
        for(char c:s1)
        mp[c]++;
        int n=s1.size();
        int l=0;
        int r=0;
        int n1=s2.size();
        if(n > n1) return false;
        while(r-l<n)
        {mp1[s2[r]]++;r++;}
        if(mp==mp1)
            return true;
        while(r < n1) {
            mp1[s2[l]]--;
            if(mp1[s2[l]] == 0) mp1.erase(s2[l]);
            l++;
            mp1[s2[r]]++;
            r++;
            if(mp == mp1) return true;
        }
        return false;
    }
};