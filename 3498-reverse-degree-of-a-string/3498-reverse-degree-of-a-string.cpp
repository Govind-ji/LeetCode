class Solution {
public:
    int reverseDegree(string s) {
        int su=0;
        int i=1;
        for(char c:s)su+=(26-(c-'a'))*i++;
        return su;
    }
};