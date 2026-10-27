class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> t;
        string s="";
        for(int i=0;i<n;i++)s+='.';
        t.push_back(s);
        for(int i=0;i<n-1;i++)s[i]='#';
        for(int i=0;i<m-1;i++)t.push_back(s);
        return t;
    }
};