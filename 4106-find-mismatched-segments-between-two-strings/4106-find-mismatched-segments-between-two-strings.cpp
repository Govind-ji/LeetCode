class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>> v;
        int n=s1.size();
        int s=0,t=0;
        for(int i=0;i<n;i++)
        {
            s=i;
            t=i;
            while(i<n && s1[i]!=s2[i])
            {

                i++;
                t=i;
            }
            if(s!=t){
            vector<string> p;
            p.push_back(s1.substr(s,t-s));
            p.push_back(s2.substr(s,t-s));
            v.push_back(p);
            }

        }
        return v;
    }
};