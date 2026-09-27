class Solution {
    public int minQueenMoves(int[] source, int[] target) {
        return source[0]==target[0] && source[1]==target[1]?0:source[0]==target[0]|| source[1]==target[1]|| (Math.abs(target[0]-source[0])==Math.abs(target[1]-source[1]) )?1:2;
    }
}