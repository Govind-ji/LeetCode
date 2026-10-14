class Solution {
public:
    int minRotations(int n, string s) {
        auto c = [](int a, int b) {
            int d = abs(a - b);
            return min(d, 10 - d);
        };

        int inner = 0;
        for (int j = 1; j < n; j++)
            inner += c(s[j - 1] - '0', s[j] - '0');

        int last = s[n - 1] - '0';
        int pre = 0;        
        int prev = 0;  
        int sufCost = inner;
        int best = INT_MAX;

        for (int i = 0; i < n; i++) {
            best = min(best, pre + c(prev, last) + sufCost);
            int cur = s[i] - '0';
            pre += c(prev, cur);
            if (i + 1 < n) sufCost -= c(cur, s[i + 1] - '0');
            prev = cur;
        }
        return best;
    }
};