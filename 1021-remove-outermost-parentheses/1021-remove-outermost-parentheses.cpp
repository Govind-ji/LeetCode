class Solution {
public:
    string removeOuterParentheses(string s) {
        string res = "";
        int st = -1;
        int bo = 0;
        int bc = 0;
        for (int i = 0; i < s.size(); i++) {
            s[i] == '(' ? bo++ : bc++;
            if (st == -1 && s[i] == '(') {
                st = i;
            } else if (bo == bc) {
                res += s.substr(st + 1, i - st - 1);
                st = -1;
                bo = 0;
                bc = 0;
            }
        }
        return res;
    }
};