class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int ans = 0;
        for(char ch = 'A' ; ch <= 'Z'; ch++){
            queue<int>q;
            int i = 0, j = 0;

            while(j < n){
                if(s[j] != ch) q.push(j);
                if(q.size() > k){
                    i = q.front() + 1;
                    q.pop();
                }
                ans = max(ans , j - i + 1);
                j++;
            }
        }
        return ans;
    }
};