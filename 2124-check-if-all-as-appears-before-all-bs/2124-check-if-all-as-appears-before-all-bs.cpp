class Solution {
public:
    bool checkString(string s) {
        int b=s.find('b');
        reverse(s.begin(),s.end());
        int a=s.find('a');
        a=s.size()-a-1;
        return b==-1?1:a==s.size()?1:b>a;
    }
};