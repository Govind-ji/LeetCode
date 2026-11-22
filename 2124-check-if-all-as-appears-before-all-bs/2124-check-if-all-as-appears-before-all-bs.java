class Solution {
    public boolean checkString(String s) {
        int t=s.indexOf('b');
        int s1=s.lastIndexOf('a');
        return t==-1?true:s1<t;
    }
}