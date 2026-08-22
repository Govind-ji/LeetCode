class Solution {
public:
static int op(int a, int b) {
    return a * b;
}
    bool checkDivisibility(int n) {
       vector<int> v;
       int t=n;
       while(t)
       {
        v.push_back(t%10);
        t/=10;
       } 
       int digs=accumulate(v.begin(),v.end(),0);
       int digp=accumulate(v.begin(),v.end(),1,op);
       return n%(digs+digp)==0?true:false;
    }
};