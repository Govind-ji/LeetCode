class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        return (source[0]+source[1])%2==(target[0]+target[1])%2?source[0]+source[1]==target[0]+target[1]?1:abs(target[0]-source[0])==abs(target[1]-source[1])?1:2:-1;
    }
};