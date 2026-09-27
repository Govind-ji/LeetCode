class Solution {
public:
    int minQueenMoves(vector<int>& source, vector<int>& target) {
        return source[0]==target[0] && source[1]==target[1]?0:source[0]==target[0]|| source[1]==target[1]|| (abs(target[0]-source[0])==abs(target[1]-source[1])||(target[1]==source[0] && target[0]==source[1]) )?1:2;
    }
};